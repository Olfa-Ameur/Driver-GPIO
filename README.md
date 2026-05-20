# STM32 Bare-Metal GPIO Driver

## 📌 Overview

This project implements a custom GPIO driver for STM32 microcontrollers using **bare-metal Embedded C programming**.

It is designed to provide a low-level abstraction over GPIO peripheral registers, without relying on HAL or LL libraries, in order to ensure direct control over hardware behavior and better understanding of STM32 internal architecture.

The driver is validated through an application that performs LED sequencing on a STM32 development board.

---

## ⚙️ Features

* GPIO clock management via RCC registers
* GPIO peripheral reset and initialization
* Configurable GPIO modes:

  * Input
  * Output
  * Analog
  * Alternate Function
* Output type selection (Push-Pull / Open-Drain)
* Direct bit manipulation for pin control
* Read/write access to GPIO input/output data registers
* LED sequencing demonstration on GPIO pins

---

## 🧠 Technical Highlights

* Memory-mapped peripheral access
* Direct register-level programming
* Bitwise operations for hardware control
* STM32F4 GPIO peripheral architecture
* RCC clock system handling
* Bare-metal embedded development (no HAL abstraction layer)

---

## 📁 Project Structure

* `gpio.c` → GPIO driver implementation (register-level API)
* `gpio.h` → GPIO definitions, macros, and function prototypes
* `main.c` → Application layer (LED sequence test)
* `Core/` → STM32CubeIDE generated application structure
* `Drivers/` → CMSIS and MCU support package

---

## 🔄 Functional Description

The application configures GPIO pins:

* PD12
* PD13
* PD14
* PD15

as output push-pull pins, and executes a sequential LED toggling pattern using the custom GPIO driver.

---

## 🛠️ Tools & Environment

* STM32CubeIDE
* STM32F4 Series MCU
* Embedded C (bare-metal)
* CMSIS standard

---

## 🎯 Engineering Outcomes

This implementation demonstrates:

* Design of a lightweight GPIO driver from scratch
* Understanding of STM32 peripheral register mapping
* Control of hardware without abstraction layers
* Structuring embedded software into reusable modules
* Low-level debugging and hardware validation

---


## 👩‍💻 Author

Embedded Systems Engineer – STM32 low-level driver development and hardware-oriented software design.
