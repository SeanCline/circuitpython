// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2016 Glenn Ruben Bakke
// SPDX-FileCopyrightText: Copyright (c) 2018 Dan Halbert for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

#include "nrfx/hal/nrf_gpio.h"

#define MICROPY_HW_BOARD_NAME       "micro:bit v2"
#define MICROPY_HW_MCU_NAME         "nRF52833"

#define CIRCUITPY_INTERNAL_NVM_SIZE 0
#define CIRCUITPY_INTERNAL_FLASH_FILESYSTEM_SIZE (60 * 1024)

#define CIRCUITPY_BLE_CONFIG_SIZE       (12 * 1024)

// The RUN_MIC pin
#define MICROPY_HW_LED_STATUS          (&pin_P0_20)

// Reduce nRF SoftRadio memory usage
#define BLEIO_VS_UUID_COUNT 10
#define BLEIO_HVN_TX_QUEUE_SIZE 2
#define BLEIO_CENTRAL_ROLE_COUNT 2
#define BLEIO_PERIPH_ROLE_COUNT 2
#define BLEIO_TOTAL_CONNECTION_COUNT 2
#define BLEIO_ATTR_TAB_SIZE (BLE_GATTS_ATTR_TAB_SIZE_DEFAULT * 2)

#define SOFTDEVICE_RAM_SIZE (32 * 1024)

#define BOOTLOADER_SIZE (0)
#define BOOTLOADER_SETTING_SIZE (0)

#define BOARD_HAS_32KHZ_XTAL (0)

#define CIRCUITPY_CONSOLE_UART_TX (&pin_P0_06)
#define CIRCUITPY_CONSOLE_UART_RX (&pin_P1_08)
