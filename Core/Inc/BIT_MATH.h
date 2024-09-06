/**
 * @author: Omar Fathy
 * @date: 29/8/2024
 * @version: V1.0
 * @file: BIT_MATH.h
 */

#ifndef BIT_MATH_H
#define BIT_MATH_H

/* -------------------- MACROS DEFINITIONS -------------------- */
#define BIT_MASK (uint8)1
#define SET_BIT(REG, BIT_POSN)     (REG |= (BIT_MASK << BIT_POSN))
#define CLR_BIT(REG, BIT_POSN)     (REG &= ~(BIT_MASK << BIT_POSN))
#define TOGGLE_BIT(REG, BIT_POSN)  (REG ^= (BIT_MASK << BIT_POSN))
#define GET_BIT(REG, BIT_POSN)     ((REG >> BIT_POSN) & BIT_MASK)

#endif