/**
 * @author:   Omar Fathy
 * @date:     29/8/2024
 * @version:  V1.0
 * @file:     STD_TYPES.h
 */

#ifndef STD_TYPES_H
#define STD_TYPES_H

/* -------------------- MACROS DEFINITIONS -------------------- */

/* -------------------- DATA TYPES DECLARATIONS -------------------- */
/* Data Types */
typedef unsigned char        boolean;
typedef unsigned char        uint8;
typedef signed char          sint8;
typedef unsigned short       uint16;
typedef signed short         sint16;
typedef unsigned int         uint32;
typedef signed int           sint32;
typedef unsigned long long   uint64;
typedef signed long long     sint64;
typedef float                float32;
typedef double               float64;

/* Standard Return */
typedef enum{
    ERR,
    N_ERR
}STD_ERR;

#endif