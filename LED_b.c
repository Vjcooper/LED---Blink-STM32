#include"LED.h"
#include<stdint.h>

volatile uint32_t *R_C;
volatile uint32_t *R_A;
volatile uint32_t *G_M;
volatile uint32_t *G_O;
volatile uint32_t *G_B;



void LED_init(void)
{
	*RCC_CR |=(1<<0);
	*RCC_ABH1 |=(1<<6);
	LED_blink();
}

void LED_blink (void)
{
	G_M |= (1<<27);
	G_M &= ~(1<<26);
	G_M |= (1<<29);
	G_M &= ~(1<<28);
	G_O |= (1<<27);
	G_O &= ~(1<<26);
  G_O |= (1<<29);
	G_O &= ~(1<<28);
}
	
void LED_Set (void)
{
	G_B |=(1<<13);
}
void LED_reset (void)
{
	G_B &=~(1<<29);
}
void delay (void)
{
	uint32_t i,j;
	for (i=0;i<=1000;i++)
	{
		for(j=0;j<1000;j++);
	}
	
}