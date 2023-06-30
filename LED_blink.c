#include"LED_Blink.h"
#include<stdint.h>
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
		uint32_t i;
		for (i=0;i<=1000;i++)
		{
			for(i=0;i<=1000;i++);
		}
	