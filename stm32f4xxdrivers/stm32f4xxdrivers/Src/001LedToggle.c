/*
 * 001LedToggle.c
 *
 *  Created on: Nov 14, 2020
 *      Author: JSnyder
 */

#include "stm32f407xx.h"

void delay(void)
{
	for(uint32_t i=0; i < 50000; i ++);
}

void delay2(void)
{
	for(uint32_t i=0; i < 250000; i ++);
}


int main(void)
{
	GPIO_Handle_t GpioLed1;

	GpioLed1.pGPIOx = GPIOD;
	GpioLed1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioLed1.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	GPIO_Handle_t GpioLed2;

	GpioLed2.pGPIOx = GPIOD;
	GpioLed2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioLed2.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	GPIO_Handle_t GpioLed3;

	GpioLed3.pGPIOx = GPIOD;
	GpioLed3.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	GpioLed3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioLed3.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	GPIO_Handle_t GpioLed4;

	GpioLed4.pGPIOx = GPIOD;
	GpioLed4.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
	GpioLed4.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed4.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed4.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioLed4.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	GPIO_PeriClockControl(GPIOD, ENABLE);

	GPIO_Init(&GpioLed1);
	GPIO_Init(&GpioLed2);
	GPIO_Init(&GpioLed3);
	GPIO_Init(&GpioLed4);

	while(1)
	{
		GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
		delay();
		GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
		delay();
		GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
		delay();
		GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
		delay();

	}

	return 0;
}

