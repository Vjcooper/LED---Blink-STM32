#include<stdint.h>

void LED_init(void);
void LED_blink (void);
void LED_Set (void);
void LED_reset (void);
void delay (void);

#define RCC_CR		(0x40023800 + 0x00)
#define RCC_AHB1	(0x40023800 + 0x30)
#define GPIOG_MODER ( 0x40021800  + 0x00)
#define GPIOG_OSPEEDR (0x40021800 + 0x08)
#define GPIOG_BSRR (0x40021800 + 0x18)
