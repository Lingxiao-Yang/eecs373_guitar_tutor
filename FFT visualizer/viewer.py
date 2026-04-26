import struct
import threading
import queue
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
import serial
import serial.tools.list_ports

MAGIC = 0x4750  # 'GP'1
HEADER_FMT = "<HIfffHHHHH"
HEADER_SIZE = struct.calcsize(HEADER_FMT)

class SerialFFTViewer:
    def __init__(self, port: str, baud: int = 921600):
        self.ser = serial.Serial(port=port, baudrate=baud, timeout=1.0)
        self.rx_queue: queue.Queue[dict] = queue.Queue()
        self.running = True
        self.thread = threading.Thread(target=self.reader_loop, daemon=True)
        self.thread.start()

        self.time_data = None
        self.freq_data = None
        self.freq_axis = None
        self.fs_hz = None
        self.dom_hz = None
        self.adc_mean = None
        self.adc_min = None
        self.adc_max = None
        self.adc_span = None
        self.frame_id = None

        self.fig, (self.ax_time, self.ax_freq) = plt.subplots(2, 1, figsize=(11, 8))

        self.time_line, = self.ax_time.plot([], [], lw=1)
        self.freq_line, = self.ax_freq.plot([], [], lw=1)
        self.peak_line, = self.ax_freq.plot([], [], "o", color="crimson", ms=6, alpha=0.9)
        self.peak_texts = []
        self.max_peak_labels = 5

        self.ax_time.set_title("Time Domain (ADC Counts)")
        self.ax_time.set_xlabel("Sample")
        self.ax_time.set_ylabel("ADC")

        self.ax_freq.set_title("Frequency Domain")
        self.ax_freq.set_xlabel("Frequency (Hz)")
        self.ax_freq.set_ylabel("Magnitude")

        self.info_text = self.fig.text(0.02, 0.97, "", va="top", family="monospace")

        self.ani = FuncAnimation(self.fig, self.update_plot, interval=50, cache_frame_data=False)

    def find_peak_indices(self, x: np.ndarray, y: np.ndarray, max_labels: int) -> np.ndarray:
        if len(y) < 3:
            return np.array([], dtype=int)

        # Skip DC component and find simple local maxima.
        y_work = y.copy()
        y_work[0] = 0.0
        is_peak = (y_work[1:-1] > y_work[:-2]) & (y_work[1:-1] >= y_work[2:])
        candidates = np.where(is_peak)[0] + 1
        if len(candidates) == 0:
            return np.array([], dtype=int)

        threshold = max(float(np.max(y_work)) * 0.12, 1e-9)
        candidates = candidates[y_work[candidates] >= threshold]
        if len(candidates) == 0:
            return np.array([], dtype=int)

        top = candidates[np.argsort(y_work[candidates])[-max_labels:]]
        top = top[np.argsort(x[top])]
        return top

    def read_exact(self, n: int) -> bytes:
        buf = bytearray()
        while len(buf) < n and self.running:
            chunk = self.ser.read(n - len(buf))
            if not chunk:
                continue
            buf.extend(chunk)
        return bytes(buf)

    def sync_to_magic(self):
        while self.running:
            b0 = self.ser.read(1)
            if not b0:
                continue
            if b0[0] != (MAGIC & 0xFF):
                continue
            b1 = self.ser.read(1)
            if not b1:
                continue
            if b1[0] == ((MAGIC >> 8) & 0xFF):
                return b0 + b1

    def reader_loop(self):
        while self.running:
            try:
                prefix = self.sync_to_magic()
                if not prefix:
                    continue

                rest = self.read_exact(HEADER_SIZE - 2)
                hdr_bytes = prefix + rest
                (
                    magic,
                    frame_id,
                    fs_hz,
                    dominant_hz,
                    adc_mean,
                    adc_min,
                    adc_max,
                    adc_span,
                    n_time,
                    n_freq,
                ) = struct.unpack(HEADER_FMT, hdr_bytes)

                if magic != MAGIC:
                    continue

                time_bytes = self.read_exact(n_time * 2)
                freq_bytes = self.read_exact(n_freq * 4)

                time_data = np.frombuffer(time_bytes, dtype="<u2").copy()
                freq_data = np.frombuffer(freq_bytes, dtype="<f4").copy()

                freq_axis = np.linspace(0.0, fs_hz / 2.0, n_freq)

                self.rx_queue.put({
                    "frame_id": frame_id,
                    "fs_hz": fs_hz,
                    "dominant_hz": dominant_hz,
                    "adc_mean": adc_mean,
                    "adc_min": adc_min,
                    "adc_max": adc_max,
                    "adc_span": adc_span,
                    "time_data": time_data,
                    "freq_data": freq_data,
                    "freq_axis": freq_axis,
                })

            except Exception as exc:
                print("Reader error:", exc)
                self.running = False
                break

    def update_plot(self, _frame):
        while not self.rx_queue.empty():
            pkt = self.rx_queue.get_nowait()
            self.frame_id = pkt["frame_id"]
            self.fs_hz = pkt["fs_hz"]
            self.dom_hz = pkt["dominant_hz"]
            self.adc_mean = pkt["adc_mean"]
            self.adc_min = pkt["adc_min"]
            self.adc_max = pkt["adc_max"]
            self.adc_span = pkt["adc_span"]
            self.time_data = pkt["time_data"]
            self.freq_data = pkt["freq_data"]
            self.freq_axis = pkt["freq_axis"]

        if self.time_data is None:
            return self.time_line, self.freq_line, self.peak_line

        self.time_line.set_data(np.arange(len(self.time_data)), self.time_data)
        self.ax_time.set_xlim(0, len(self.time_data) - 1)
        self.ax_time.set_ylim(max(0, int(self.adc_min) - 50), min(4095, int(self.adc_max) + 50))

        self.freq_line.set_data(self.freq_axis, self.freq_data)
        band_min_hz = 75.0
        band_max_hz = min(self.fs_hz / 2.0, 400.0)
        if band_max_hz <= band_min_hz:
            band_min_hz = 0.0

        self.ax_freq.set_xlim(band_min_hz, band_max_hz)
        band_for_ylim = (self.freq_axis >= band_min_hz) & (self.freq_axis <= band_max_hz)
        if np.any(band_for_ylim):
            ymax = float(np.max(self.freq_data[band_for_ylim]))
        else:
            ymax = float(np.max(self.freq_data))
        self.ax_freq.set_ylim(0, max(1.0, ymax * 1.1))

        for txt in self.peak_texts:
            txt.remove()
        self.peak_texts.clear()

        in_band = (self.freq_axis >= band_min_hz) & (self.freq_axis <= band_max_hz)
        freq_view = self.freq_axis[in_band]
        mag_view = self.freq_data[in_band]

        peak_idx_local = self.find_peak_indices(freq_view, mag_view, self.max_peak_labels)
        if len(peak_idx_local) > 0:
            peak_x = freq_view[peak_idx_local]
            peak_y = mag_view[peak_idx_local]
            self.peak_line.set_data(peak_x, peak_y)

            y_offset = max(0.03 * self.ax_freq.get_ylim()[1], 0.5)
            for px, py in zip(peak_x, peak_y):
                txt = self.ax_freq.text(
                    float(px),
                    float(py + y_offset),
                    f"{px:.1f} Hz\n{py:.1f}",
                    fontsize=8,
                    color="crimson",
                    ha="center",
                    va="bottom",
                )
                self.peak_texts.append(txt)
        else:
            self.peak_line.set_data([], [])

        self.info_text.set_text(
            f"frame={self.frame_id}  fs={self.fs_hz:.1f} Hz  dominant={self.dom_hz:.2f} Hz\n"
            f"adc_mean={self.adc_mean:.1f}  adc_min={self.adc_min}  adc_max={self.adc_max}  adc_span={self.adc_span}"
        )

        return self.time_line, self.freq_line, self.peak_line

    def close(self):
        self.running = False
        try:
            self.ser.close()
        except Exception:
            pass

def choose_port():
    ports = list(serial.tools.list_ports.comports())
    if not ports:
        raise RuntimeError("No serial ports found.")
    print("Available ports:")
    for i, p in enumerate(ports):
        print(f"[{i}] {p.device} - {p.description}")
    idx = int(input("Select port index: "))
    return ports[idx].device

def main():
    port = choose_port()
    viewer = SerialFFTViewer(port=port, baud=921600)
    try:
        plt.tight_layout(rect=[0, 0, 1, 0.93])
        plt.show()
    finally:
        viewer.close()

if __name__ == "__main__":
    main()