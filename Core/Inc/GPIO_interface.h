/**
 * @author: Omar Fathy
 * @date: 4/9/2024
 * @version: V1.0
 * @file: GPIO_interface.h
 */

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

/* -------------------- INCLUDES -------------------- */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/* -------------------- MACROS DEFINITIONS -------------------- */
/* GPIO PORTs Number */
#define GPIOA         0
#define GPIOB         1
#define GPIOC         2

/* GPIO PINs Numbers definition */
#define GPIO_PIN0     0
#define GPIO_PIN1     1
#define GPIO_PIN2     2
#define GPIO_PIN3     3
#define GPIO_PIN4     4
#define GPIO_PIN5     5
#define GPIO_PIN6     6
#define GPIO_PIN7     7
#define GPIO_PIN8     8
#define GPIO_PIN9     9
#define GPIO_PIN10    10
#define GPIO_PIN11    11
#define GPIO_PIN12    12
#define GPIO_PIN13    13
#define GPIO_PIN14    14
#define GPIO_PIN15    15

/* Value Options */
#define GPIO_LOW      0
#define GPIO_HIGH     1

/* Mode Options */
/* Input Opitons */
#define GPIO_INPUT_ANALOG        0b0000
#define GPIO_INPUT_FLOATING      0b0100
#define GPIO_INPUT_PULL_UP_DOWN  0b0100

/* Output General Purpose Opitons */
#define GPIO_OUTPUT_GP_PUSH_PULL_10MHz   0b0001
#define GPIO_OUTPUT_GP_OPEN_DRAIN_10MHz  0b0101
#define GPIO_OUTPUT_GP_PUSH_PULL_2MHz    0b0010
#define GPIO_OUTPUT_GP_OPEN_DRAIN_2MHz   0b0110
#define GPIO_OUTPUT_GP_PUSH_PULL_50MHz   0b0011
#define GPIO_OUTPUT_GP_OPEN_DRAIN_50MHz  0b0111

/* Output Alternative Function Opitons */
#define GPIO_OUTPUT_AF_PUSH_PULL_10MHz   0b1001
#define GPIO_OUTPUT_AF_OPEN_DRAIN_10MHz  0b1101
#define GPIO_OUTPUT_AF_PUSH_PULL_2MHz    0b1010
#define GPIO_OUTPUT_AF_OPEN_DRAIN_2MHz   0b1110
#define GPIO_OUTPUT_AF_PUSH_PULL_50MHz   0b1011
#define GPIO_OUTPUT_AF_OPEN_DRAIN_50MHz  0b1111

/* -------------------- INTERFACES DECLARATIONS -------------------- */
STD_ERR GPIO_SetPinMode(uint8 Port, uint8 Pin, uint8 Mode);
STD_ERR GPIO_SetPinValue(uint8 Port, uint8 Pin, uint8 Value);
STD_ERR GPIO_GetPinValue(uint8 Port, uint8 Pin, uint8 *Value);

#endif
