/*
 * NOTE: Autogenerated file using gd32headers.py
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#define GPIO_REG(x) ((volatile gpio_type *)(x))
#define GPIO_MODE_SET(n, mode) ((uint32_t)((uint32_t)(mode) << (4U * (n))))
#define GPIO_MODE_MASK(n) (0xFU << (4U * (n)))

#if defined(CONFIG_SOC_SERIES_AT32F403A_407)
#include <at32f403a_407_gpio.h>
#endif
