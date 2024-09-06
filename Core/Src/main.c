/**
  ******************************************************************************
  * @file           : main.c
  * @author         : Omar Fathy
  * @brief          : Main program body
  ******************************************************************************
*/

/* -------------------- INCLUDES -------------------- */
#include "main.h"

/* -------------------- VARIABLES -------------------- */
uint8 button_state = BUTTON_RELEASED, prev_state = BUTTON_RELEASED;

int main(void){

	/* Enable system clock and peripheral clocks */
	RCC_InitSysClk();
	RCC_EnablePeripheralClk(RCC_APB2_BUS, RCC_APB2_IOPAEN);
	RCC_EnablePeripheralClk(RCC_APB2_BUS, RCC_APB2_IOPBEN);

	/* Initializing pins direcion */
	GPIO_SetPinMode(GPIOA, GPIO_PIN1, GPIO_INPUT_PULL_UP_DOWN);
	GPIO_SetPinMode(GPIOB, GPIO_PIN0, GPIO_OUTPUT_GP_PUSH_PULL_2MHz);
	GPIO_SetPinMode(GPIOB, GPIO_PIN1, GPIO_OUTPUT_GP_PUSH_PULL_2MHz);
	GPIO_SetPinMode(GPIOB, GPIO_PIN2, GPIO_OUTPUT_GP_PUSH_PULL_2MHz);
	GPIO_SetPinMode(GPIOB, GPIO_PIN3, GPIO_OUTPUT_GP_PUSH_PULL_2MHz);

  while (1){
	  /* Read button status */
	  GPIO_GetPinValue(GPIOA, GPIO_PIN1, &button_state);

	  if(button_state == BUTTON_PRESSED){
		  /* Sequential LEDs ON */
		  GPIO_SetPinValue(GPIOB, GPIO_PIN0, GPIO_HIGH);
		  delay();
		  GPIO_SetPinValue(GPIOB, GPIO_PIN1, GPIO_HIGH);
		  delay();
		  GPIO_SetPinValue(GPIOB, GPIO_PIN2, GPIO_HIGH);
		  delay();
		  GPIO_SetPinValue(GPIOB, GPIO_PIN3, GPIO_HIGH);
		  prev_state = BUTTON_PRESSED;
	  }
	  else if((button_state == BUTTON_RELEASED) && (prev_state == BUTTON_PRESSED)){
		  /* Sequential LEDs OFF */
		  GPIO_SetPinValue(GPIOB, GPIO_PIN0, GPIO_LOW);
		  delay();
		  GPIO_SetPinValue(GPIOB, GPIO_PIN1, GPIO_LOW);
		  delay();
		  GPIO_SetPinValue(GPIOB, GPIO_PIN2, GPIO_LOW);
		  delay();
		  GPIO_SetPinValue(GPIOB, GPIO_PIN3, GPIO_LOW);
		  prev_state = BUTTON_RELEASED;
	  }
	  else{
		  /* Default LEDs OFF */
		  GPIO_SetPinValue(GPIOB, GPIO_PIN0, GPIO_LOW);
		  GPIO_SetPinValue(GPIOB, GPIO_PIN1, GPIO_LOW);
		  GPIO_SetPinValue(GPIOB, GPIO_PIN2, GPIO_LOW);
		  GPIO_SetPinValue(GPIOB, GPIO_PIN3, GPIO_LOW);
	  }
  }

  return 0;
}

void delay(void){
	uint32 counter1 = 0;
	for(counter1 = 0; counter1 < 25000; counter1++);
}
