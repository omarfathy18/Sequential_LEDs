/**
 * @author: Omar Fathy
 * @date: 4/9/2024
 * @version: V1.0
 * @file: GPIO_private.h
 */

#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

/* -------------------- MACROS DEFINITIONS -------------------- */
/* GPIO Base Address */
#define GPIOA_BASE_ADDRESS   0x40010800
#define GPIOB_BASE_ADDRESS   0x40010C00
#define GPIOC_BASE_ADDRESS   0x40011000

/* GPIO PORTA Registers */
#define GPIOA_CRL_REG        *((volatile uint32*)(GPIOA_BASE_ADDRESS + 0x00))
#define GPIOA_CRH_REG        *((volatile uint32*)(GPIOA_BASE_ADDRESS + 0x04))
#define GPIOA_IDR_REG        *((volatile uint32*)(GPIOA_BASE_ADDRESS + 0x08))
#define GPIOA_ODR_REG        *((volatile uint32*)(GPIOA_BASE_ADDRESS + 0x0C))

/* GPIO PORTB Registers */
#define GPIOB_CRL_REG        *((volatile uint32*)(GPIOB_BASE_ADDRESS + 0x00))
#define GPIOB_CRH_REG        *((volatile uint32*)(GPIOB_BASE_ADDRESS + 0x04))
#define GPIOB_IDR_REG        *((volatile uint32*)(GPIOB_BASE_ADDRESS + 0x08))
#define GPIOB_ODR_REG        *((volatile uint32*)(GPIOB_BASE_ADDRESS + 0x0C))

/* GPIO PORTC Registers */
#define GPIOC_CRL_REG        *((volatile uint32*)(GPIOC_BASE_ADDRESS + 0x00))
#define GPIOC_CRH_REG        *((volatile uint32*)(GPIOC_BASE_ADDRESS + 0x04))
#define GPIOC_IDR_REG        *((volatile uint32*)(GPIOC_BASE_ADDRESS + 0x08))
#define GPIOC_ODR_REG        *((volatile uint32*)(GPIOC_BASE_ADDRESS + 0x0C))

#endif