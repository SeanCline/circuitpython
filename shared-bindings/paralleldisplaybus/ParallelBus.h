// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2019 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

#include "common-hal/paralleldisplaybus/ParallelBus.h"

#include "common-hal/microcontroller/Pin.h"
#include "shared-bindings/displayio/__init__.h"
#include "shared-module/displayio/Group.h"

extern const mp_obj_type_t paralleldisplaybus_parallelbus_type;

void common_hal_paralleldisplaybus_parallelbus_construct(paralleldisplaybus_parallelbus_obj_t *self,
    const mcu_pin_obj_t *data0, const mcu_pin_obj_t *command, const mcu_pin_obj_t *chip_select,
    const mcu_pin_obj_t *write, const mcu_pin_obj_t *read, const mcu_pin_obj_t *reset, uint32_t frequency);

void common_hal_paralleldisplaybus_parallelbus_construct_nonsequential(paralleldisplaybus_parallelbus_obj_t *self,
    uint8_t n_pins, const mcu_pin_obj_t **data_pins, const mcu_pin_obj_t *command, const mcu_pin_obj_t *chip_select,
    const mcu_pin_obj_t *write, const mcu_pin_obj_t *read, const mcu_pin_obj_t *reset, uint32_t frequency);

void common_hal_paralleldisplaybus_parallelbus_deinit(paralleldisplaybus_parallelbus_obj_t *self);

bool common_hal_paralleldisplaybus_parallelbus_reset(mp_obj_t self);
bool common_hal_paralleldisplaybus_parallelbus_bus_free(mp_obj_t self);

bool common_hal_paralleldisplaybus_parallelbus_begin_transaction(mp_obj_t self);

void common_hal_paralleldisplaybus_parallelbus_send(mp_obj_t self, display_byte_type_t byte_type,
    display_chip_select_behavior_t chip_select, const uint8_t *data, uint32_t data_length);

void common_hal_paralleldisplaybus_parallelbus_end_transaction(mp_obj_t self);

// The ParallelBus object always lives off the MP heap. So, code must collect any pointers
// back to the MP heap manually. Otherwise they'll get freed.
void common_hal_paralleldisplaybus_parallelbus_collect_ptrs(mp_obj_t self);
