/**
 * @author: Omar Fathy
 * @date: 1/9/2024
 * @version: V1.0
 * @file: RCC_private.h
 */

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

/* -------------------- MACROS DEFINITIONS -------------------- */
/* RCC Base Address */
#define RCC_BASE_ADDRESS    0x40021000

/* RCC Registers */
#define RCC_CR_REG         *((volatile uint32 *)(RCC_BASE_ADDRESS + 0x00)) /* Clock control register */
#define RCC_CFGR_REG       *((volatile uint32 *)(RCC_BASE_ADDRESS + 0x04)) /* Clock configuration register */
#define RCC_CIR            *((volatile uint32 *)(RCC_BASE_ADDRESS + 0x08))
#define RCC_APB2RSTR       *((volatile uint32 *)(RCC_BASE_ADDRESS + 0x0C))
#define RCC_APB1RSTR       *((volatile uint32 *)(RCC_BASE_ADDRESS + 0x10))
#define RCC_AHBENR_REG     *((volatile uint32 *)(RCC_BASE_ADDRESS + 0x14))  /* AHB  enable register */
#define RCC_APB2ENR_REG    *((volatile uint32 *)(RCC_BASE_ADDRESS + 0x18)) /* APB2 enable register */
#define RCC_APB1ENR_REG    *((volatile uint32 *)(RCC_BASE_ADDRESS + 0x1C)) /* APB1 enable register */
#define RCC_BDCR           *((volatile uint32 *)(RCC_BASE_ADDRESS + 0x20))
#define RCC_CSR            *((volatile uint32 *)(RCC_BASE_ADDRESS + 0x24))

/* Clock Sources */
#define HSI_CLK_SRC       0
#define HSE_RC_CLK_SRC    1
#define HSE_CRY_CLK_SRC   2
#define PLL_CLK_SRC       3

/* PLL Input Options */
#define RCC_PLL_HSE_DIV_2                  0
#define RCC_PLL_HSI_DIV_2                  1
#define RCC_PLL_HSE                        2

/* RCC_CR_REG bits */
#define RCC_CR_HSION                       0
#define RCC_CR_HSIRDY                      1
#define RCC_CR_HSEON                       16
#define RCC_CR_HSERDY                      17
#define RCC_CR_HSEBYP                      18
#define RCC_CR_PLLON                       24
#define RCC_CR_PLLRDY                      25

#endif