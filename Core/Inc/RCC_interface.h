/**
 * @author: Omar Fathy
 * @date: 1/9/2024
 * @version: V1.0
 * @file: RCC_interface.h
 */

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

/* -------------------- INCLUDES -------------------- */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/* -------------------- MACROS DEFINITIONS -------------------- */
/* RCC Buses */
#define RCC_AHB_BUS       1
#define RCC_APB1_BUS      2
#define RCC_APB2_BUS      3

/* AHB Bus Peripherals */
#define RCC_AHBENR_OTGHSEN       29
#define RCC_AHBENR_ETHMACPTPEN   17
#define RCC_AHBENR_ETHMACRXEN    16
#define RCC_AHBENR_ETHMACTXEN    15
#define RCC_AHBENR_ETHMACEN      14
#define RCC_AHBENR_OTGFSEN       12
#define RCC_AHBENR_CRCEN         6
#define RCC_AHBENR_FLITFEN       4
#define RCC_AHBENR_SRAMEN        2
#define RCC_AHBENR_DMA2EN        1
#define RCC_AHBENR_DMA1EN        0

/* APB2 Bus Peripherals */
#define RCC_APB2_TIM11EN   21  /* TIM11 timer clock enable */
#define RCC_APB2_TIM10EN   20  /* TIM10 timer clock enable */
#define RCC_APB2_TIM9EN    19  /* TIM9 timer clock enable */
#define RCC_APB2_ADC3EN    15  /* ADC3 interface clock enable */
#define RCC_APB2_USART1EN  14  /* USART1 clock enable */
#define RCC_APB2_TIM8EN    13  /* TIM8 timer clock enable */
#define RCC_APB2_SPI1EN    12  /* SPI1 clock enable */
#define RCC_APB2_TIM1EN    11  /* TIM1 timer clock enable */
#define RCC_APB2_ADC2EN    10  /* ADC2 interface clock enable */
#define RCC_APB2_ADC1EN     9  /* ADC1 interface clock enable */
#define RCC_APB2_IOPGEN     8  /* IO port G clock enable */
#define RCC_APB2_IOPFEN     7  /* IO port F clock enable */
#define RCC_APB2_IOPEEN     6  /* IO port E clock enable */
#define RCC_APB2_IOPDEN     5  /* IO port D clock enable */
#define RCC_APB2_IOPCEN     4  /* IO port C clock enable */
#define RCC_APB2_IOPBEN     3  /* IO port B clock enable */
#define RCC_APB2_IOPAEN     2  /* IO port A clock enable */
#define RCC_APB2_AFIOEN     0  /* Alternate Function IO clock enable */

/* APB1 Bus Peripherals */
#define RCC_APB1_DACEN    29  /* DAC interface clock enable */
#define RCC_APB1_PWREN    28  /* Power interface clock enable */
#define RCC_APB1_BKPEN    27  /* Backup interface clock enable */
#define RCC_APB1_CANEN    25  /* CAN clock enable */
#define RCC_APB1_USBEN    23  /* USB clock enable */
#define RCC_APB1_I2C2EN   22  /* I2C2 clock enable */
#define RCC_APB1_I2C1EN   21  /* I2C1 clock enable */
#define RCC_APB1_UART5EN  20  /* USART5 clock enable */
#define RCC_APB1_UART4EN  19  /* USART4 clock enable */
#define RCC_APB1_USART3EN 18  /* USART3 clock enable */
#define RCC_APB1_USART2EN 17  /* USART2 clock enable */
#define RCC_APB1_SPI3EN   15  /* SPI3 clock enable */
#define RCC_APB1_SPI2EN   14  /* SPI2 clock enable */
#define RCC_APB1_WWDGEN   11  /* Window Watchdog clock enable */
#define RCC_APB1_TIM14EN  8   /* TIM14 timer clock enable */
#define RCC_APB1_TIM13EN  7   /* TIM13 timer clock enable */
#define RCC_APB1_TIM12EN  6   /* TIM12 timer clock enable */
#define RCC_APB1_TIM7EN   5   /* TIM7 timer clock enable */
#define RCC_APB1_TIM6EN   4   /* TIM6 timer clock enable */
#define RCC_APB1_TIM5EN   3   /* TIM5 timer clock enable */
#define RCC_APB1_TIM4EN   2   /* TIM4 timer clock enable */
#define RCC_APB1_TIM3EN   1   /* TIM3 timer clock enable */
#define RCC_APB1_TIM2EN   0   /* TIM2 timer clock enable */

/* -------------------- INTERFACES DECLARATIONS -------------------- */
STD_ERR RCC_InitSysClk(void);
STD_ERR RCC_EnablePeripheralClk  (const uint8 BusId, const uint8 PeripheralId);
STD_ERR RCC_DisablePeripheralClk (const uint8 BusId, const uint8 PeripheralId);

#endif
