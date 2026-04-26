# EECS 373 Final Project: Embedded Guitar Tutor System

This project is an embedded Guitar Tutor system built around an STM32 MCU.
It combines real-time audio/chord recognition, an LVGL-based touchscreen UI,
and custom hardware (PCB + laser-cut enclosure) to guide users through chord
practice and feedback workflows.

## Project poster

- [Poster & Pics/poster_inPDF.pdf](Poster%20%26%20Pics/poster_inPDF.pdf)

## Folder overview

- `MCU Code/`: Main firmware project (STM32CubeMX/C HAL + LVGL UI + app logic).
- `FFT visualizer/`: Python utility for FFT/signal visualization during development.
- `Poster & Pics/`: Final poster assets (HTML/PDF) and project screenshots.
- `PCB Design/`: PCB source/outputs (Gerbers, drill files, design reports).
- `Laser Cutting/`: Enclosure/mechanical assets for laser-cut parts.

## Hardware pinout

### Keypad pinout (Port 1 leftmost)

| MCU Pin | Port | Keypad Signal |
| --- | --- | --- |
| PC8 | Port 1 | ROW 2 |
| PC9 | Port 2 | ROW 3 |
| PC10 | Port 3 | COL 1 |
| PC11 | Port 4 | ROW 4 |
| PC12 | Port 5 | COL 2 |
| PD2 | Port 6 | COL 3 |
| PF3 | Port 7 | COL 4 |
| PF5 | Port 8 | ROW 1 |

### TFT screen pinout

| Signal | MCU Pin |
| --- | --- |
| SCK | PA5 |
| MISO | PA6 |
| MOSI | PA7 |
| CS | PD14 |
| DC | PD15 |
| RESET | PF12 |
| LED | PF13 |

### LED strip pinout

| Signal | MCU Pin |
| --- | --- |
| Data | PA0 |

### ADC input

| Signal | MCU Pin |
| --- | --- |
| Data | PC0 |
