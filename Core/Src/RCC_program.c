/**
 * @author: Omar Fathy
 * @date: 1/9/2024
 * @version: V1.0
 * @file: RCC_config.h
 */

/* -------------------- INCLUDES -------------------- */
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

/* -------------------- IMPLEMENTATIONS -------------------- */
STD_ERR RCC_InitSysClk(void){
    STD_ERR ret = ERR;
#if RCC_SYSCLK_SRC == HSI_CLK_SRC
    SET_BIT(RCC_CR_REG, RCC_CR_HSION);          // Enable HSI
    while(!GET_BIT(RCC_CR_REG, RCC_CR_HSIRDY)); // Check if it is working
    // Select HSI as clock source
    CLR_BIT(RCC_CFGR_REG, 0);
    CLR_BIT(RCC_CFGR_REG, 1);
    // RCC_CFGR = 0x00000000;       // Select HSI as clock source
    ret = N_ERR;

#elif RCC_SYSCLK_SRC == HSE_RC_CLK_SRC
    SET_BIT(RCC_CR_REG, RCC_CR_HSEON);          // Enable HSE
    while(!GET_BIT(RCC_CR_REG, RCC_CR_HSERDY)); // Check if it is working
    SET_BIT(RCC_CR_REG, RCC_CR_HSEBYP);          // HSE bypass
    // Select HSE as clock source
    SET_BIT(RCC_CFGR_REG, 0);
    CLR_BIT(RCC_CFGR_REG, 1);
    // RCC_CFGR = 0x00000001;        // Select HSE as clock source
    ret = N_ERR;

#elif RCC_SYSCLK_SRC == HSE_CRY_CLK_SRC
    SET_BIT(RCC_CR_REG, RCC_CR_HSEON);          // Enable HSE
    while(!GET_BIT(RCC_CR_REG, RCC_CR_HSERDY)); // Check if it is working
    // Select HSE as clock source
    SET_BIT(RCC_CFGR_REG, 0);
    CLR_BIT(RCC_CFGR_REG, 1);
    // RCC_CFGR = 0x00000001;        // Select HSE as clock source
    ret = N_ERR;

#elif RCC_SYSCLK_SRC == PLL_CLK_SRC
    SET_BIT(RCC_CR_REG, RCC_CR_PLLON);          // Enable PLL
    while(!GET_BIT(RCC_CR_REG, RCC_CR_PLLRDY)); // Check if it is working
    // Select PLL as clock source
    SET_BIT(RCC_CFGR_REG, 0);
    SET_BIT(RCC_CFGR_REG, 1);
    #if RCC_PLL_INPUT == RCC_PLL_HSE

    #elif RCC_PLL_INPUT == RCC_PLL_HSE_DIV_2

    #elif RCC_PLL_INPUT == RCC_PLL_HSI_DIV_2

    #endif
    // RCC_CFGR = 0x00000010;        // Select PLL as clock source
    ret = N_ERR;

#else
    #error "ERROR! NO SYSTEM SOURCE EXISTS."
    ret = ERR;

#endif

    return ret;
}

STD_ERR RCC_EnablePeripheralClk(const uint8 BusId, const uint8 PeripheralId)
{
    STD_ERR ret = ERR;
    if (PeripheralId < 32)
    {
        switch (BusId)
        {
        case RCC_AHB_BUS:
            SET_BIT(RCC_AHBENR_REG, PeripheralId);
            ret =  N_ERR;
            break;
        case RCC_APB1_BUS:
            SET_BIT(RCC_APB1ENR_REG, PeripheralId);
            ret =  N_ERR;
            break;
        case RCC_APB2_BUS:
            SET_BIT(RCC_APB2ENR_REG, PeripheralId);
            ret =  N_ERR;
            break;
        default:
            ret =  ERR;
        }
    }

    return ret;
}

STD_ERR RCC_DisablePeripheralClk(const uint8 BusId, const uint8 PeripheralId)
{
    STD_ERR ret = ERR;
    if (PeripheralId < 32)
    {
        switch (BusId)
        {
        case RCC_AHB_BUS:
            CLR_BIT(RCC_AHBENR_REG, PeripheralId);
            ret =  N_ERR;
            break;
        case RCC_APB1_BUS:
            CLR_BIT(RCC_APB1ENR_REG, PeripheralId);
            ret =  N_ERR;
            break;
        case RCC_APB2_BUS:
            CLR_BIT(RCC_APB2ENR_REG, PeripheralId);
            ret =  N_ERR;
            break;
        default:
            ret =  ERR;
        }
    }

    return ret;
}
