/**
 * @author: Omar Fathy
 * @date: 1/9/2024
 * @version: V1.0
 * @file: RCC_config.h
 */

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

/* -------------------- MACROS DEFINITIONS -------------------- */
/* Configure system cock source */
/* Options:
    1. HSI_CLK_SRC
    2. HSE_RC_CLK_SRC
    3. HSE_CRY_CLK_SRC
    4. PLL_CLK_SRC
*/
#define RCC_SYSCLK_SRC    HSI_CLK_SRC

/* Choose PLL input */
/* Options:
    1. RCC_PLL_HSE_DIV_2
    2. RCC_PLL_HSI_DIV_2
    3. RCC_PLL_HSE
*/
#if RCC_CLK_SRC == RCC_CLKSRC_PLL
#define RCC_PLL_INPUT    RCC_PLL_HSE
#endif

#endif