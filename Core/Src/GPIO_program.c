/**
 * @author: Omar Fathy
 * @date: 4/9/2024
 * @version: V1.0
 * @file: GPIO_config.h
 */

/* -------------------- INCLUDES -------------------- */
#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"

/* -------------------- IMPLEMENTATIONS -------------------- */
STD_ERR GPIO_SetPinMode(uint8 Port, uint8 Pin, uint8 Mode){
    STD_ERR ret = ERR;

    switch(Port){
        case GPIOA:
            if(Pin < 8){
                /* Clear mode bits */
                GPIOA_CRL_REG &= ~(0b1111 << (Pin * 4));
                /* Set mode bits */
                GPIOA_CRL_REG |= (Mode << (Pin * 4));
            }
            else if(Pin < 16){
                /* minus 8 to return to bit 0 not 8 */
                Pin -= 8;
                /* Clear mode bits */
                GPIOA_CRL_REG &= ~(0b1111 << (Pin * 4));
                /* Set mode bits */
                GPIOA_CRL_REG |= (Mode << (Pin * 4));
            }
            ret = N_ERR;
            break;
        case GPIOB:
            if(Pin < 8){
                /* Clear mode bits */
                GPIOB_CRL_REG &= ~(0b1111 << (Pin * 4));
                /* Set mode bits */
                GPIOB_CRL_REG |= (Mode << (Pin * 4));
            }
            else if(Pin < 16){
                /* minus 8 to return to bit 0 not 8 */
                Pin -= 8;
                /* Clear mode bits */
                GPIOB_CRL_REG &= ~(0b1111 << (Pin * 4));
                /* Set mode bits */
                GPIOB_CRL_REG |= (Mode << (Pin * 4));
            }
            ret = N_ERR;
            break;
        case GPIOC:
            if(Pin < 8){
                /* Clear mode bits */
                GPIOC_CRL_REG &= ~(0b1111 << (Pin * 4));
                /* Set mode bits */
                GPIOC_CRL_REG |= (Mode << (Pin * 4));
            }
            else if(Pin < 16){
                /* minus 8 to return to bit 0 not 8 */
                Pin -= 8;
                /* Clear mode bits */
                GPIOC_CRL_REG &= ~(0b1111 << (Pin * 4));
                /* Set mode bits */
                GPIOC_CRL_REG |= (Mode << (Pin * 4));
            }
            ret = N_ERR;
            break;
        default:
            ret = ERR;
    }

    return ret;
}

STD_ERR GPIO_SetPinValue(uint8 Port, uint8 Pin, uint8 Value){
    STD_ERR ret = ERR;

    switch(Port){
        case GPIOA:
            if(Value == GPIO_HIGH){
                SET_BIT(GPIOA_ODR_REG, Pin);
                ret = N_ERR;
            }
            else if(Value == GPIO_LOW){
                CLR_BIT(GPIOA_ODR_REG, Pin);
                ret = N_ERR;
            }
            else{
                ret = ERR;
            }
            break;
        case GPIOB:
            if(Value == GPIO_HIGH){
                SET_BIT(GPIOB_ODR_REG, Pin);
                ret = N_ERR;
            }
            else if(Value == GPIO_LOW){
                CLR_BIT(GPIOB_ODR_REG, Pin);
                ret = N_ERR;
            }
            else{
                ret = ERR;
            }
            break;
        case GPIOC:
            if(Value == GPIO_HIGH){
                SET_BIT(GPIOC_ODR_REG, Pin);
                ret = N_ERR;
            }
            else if(Value == GPIO_LOW){
                CLR_BIT(GPIOC_ODR_REG, Pin);
                ret = N_ERR;
            }
            else{
                ret = ERR;
            }
            break;
    }

    return ret;
}

STD_ERR GPIO_GetPinValue(uint8 Port, uint8 Pin, uint8 *Value){
    STD_ERR ret = ERR;

    switch(Port){
        case GPIOA:
            *Value = GET_BIT(GPIOA_IDR_REG, Pin);
            ret = N_ERR;
            break;
        case GPIOB:
            *Value = GET_BIT(GPIOB_IDR_REG, Pin);
            ret = N_ERR;
            break;
        case GPIOC:
            *Value = GET_BIT(GPIOC_IDR_REG, Pin);
            ret = N_ERR;
            break;
        default:
            ret = ERR;
    }

    return ret;
}
