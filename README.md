# embedded-c-washing-machine-simulation

## Overview

The Embedded C Washing Machine Simulation is a microcontroller-based project developed to simulate the basic operations of an automatic washing machine.

The project demonstrates embedded programming concepts such as GPIO control, keypad interfacing, timers, interrupts, and state-based control. The washing cycle is controlled through programmed inputs and operates through different stages of the washing process.

## Features

* Washing machine operation simulation
* Keypad-based user input
* LED/status indication
* Timer-based operation
* Interrupt handling
* Multiple washing cycle stages
* Microcontroller-based control logic

## Technologies Used

* **Programming Language:** Embedded C
* **Microcontroller:** PIC16F877A
* **Development Environment:** MPLAB X IDE
* **Simulation:** PICSimLab

## Hardware / Peripherals

* PIC16F877A Microcontroller
* Keypad
* LEDs
* Timer
* Switches / Input controls
* LCD or display interface *(if used in the project)*

## Working

The user selects the required washing operation through the input interface. The microcontroller processes the input and controls the washing sequence according to the programmed logic.

The simulation represents different stages of a washing machine cycle, with timers and control logic used to manage each operation.

### Basic Workflow

```text
User Input
    ↓
Keypad / Switch
    ↓
PIC16F877A
    ↓
Control Logic
    ↓
Washing Cycle
    ↓
Timer / Interrupt
    ↓
Status Indication
```

## Embedded Concepts Demonstrated

* Embedded C programming
* GPIO configuration and control
* Digital input/output
* Timer programming
* Interrupt handling
* Keypad interfacing
* Microcontroller peripherals
* State-based control logic
* Hardware simulation and debugging

## Project Files

```text
Embedded-C-Washing-Machine-Simulation/
│
├── README.md
├── source/
│   └── washing_machine.c
│
├── simulation/
│   └── simulation_files
│
└── images/
    └── washing_machine_simulation.png
```

*Update the file names/folders according to the actual files in your project.*

## Simulation

The project was developed and tested in **PICSimLab** using the **PIC16F877A** microcontroller.

## Learning Outcome

This project provided practical experience in developing embedded firmware, interfacing microcontroller peripherals, handling timers and interrupts, and implementing control logic for a real-world embedded application.

## Author

**Abhishek Biradar**

Electronics & Communication Engineering
Embedded Systems | Firmware | Robotics | IoT
