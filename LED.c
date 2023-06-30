#include"LED.h"
#include<intctypes.h>

uint32_t R_C,R_A,G_M,G_O,G_B;
volatile uint32_t *R_C = (Uint32_t *) RCC_CR;
volatile uint32_t *R_A = (uint32_t *) RCC_AHB1;
volatile uint32_t *G_M = (uint32_t *) GPIOG_MODER;
volatile uint32_t *G_O = (uint32_t *) GPIOG_OSPEEDR;
volatile uint32_t *G_B = (uint32_t *) GPIOG_BSRR;

void main()
{
	 LED_init();
  while(1)
	{
		LED_Set();
		LED_reset();
		delay();
	}
}