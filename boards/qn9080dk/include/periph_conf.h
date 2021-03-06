/*
 * Copyright (C) 2020 iosabi
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_qn9080dk
 * @{
 *
 * @file
 * @brief       Configuration of CPU peripherals for QN9080DK base board board
 *
 * @author      iosabi <iosabi@protonmail.com>
 */

#ifndef PERIPH_CONF_H
#define PERIPH_CONF_H

#include <stdint.h>

#include "cpu.h"
#include "periph_cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name   UART configuration
 * @{
 */
static const uart_conf_t uart_config[] = {
    {
        .dev          = USART0,
        .rx_pin       = GPIO_PIN(PORT_A, 17),
        .tx_pin       = GPIO_PIN(PORT_A, 16),
    },
};

#define UART_NUMOF          ARRAY_SIZE(uart_config)
/** @} */

/**
 * @name   Timer configuration
 * @{
 */
#define TIMER_NUMOF           4
/** @} */

/* put here the board peripherals definitions:
   - Available clocks
   - PWMs
   - SPIs
   - I2C
   - ADC
   - RTC
   - RTT
   etc
 */

#ifdef __cplusplus
}
#endif

#endif /* PERIPH_CONF_H */
/** @} */
