// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2019 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

// Micropython setup

#define MICROPY_HW_BOARD_NAME       "ESP32-C6-DevKitC-1-N8"
#define MICROPY_HW_MCU_NAME         "ESP32C6"

#define MICROPY_HW_NEOPIXEL         (&pin_GPIO8)

#define DEFAULT_UART_BUS_RX         (&pin_GPIO17)
#define DEFAULT_UART_BUS_TX         (&pin_GPIO16)
