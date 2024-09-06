/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  */
#ifndef __MAIN_H
#define __MAIN_H

/* -------------------- INCLUDES -------------------- */
#include "RCC_interface.h"
#include "GPIO_interface.h"

/* -------------------- MACROS DEFINITIONS -------------------- */
#define BUTTON_RELEASED		0
#define BUTTON_PRESSED		1

/* -------------------- FUNCTIONS PROTOTYPE -------------------- */
void delay(void);

#endif /* __MAIN_H */
