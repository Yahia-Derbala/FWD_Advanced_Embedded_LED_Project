#include "stdint.h"
#include "../HAL/LED/LED_Interface.h"
void LED_Toggle(void);

int main(void)
{
	LED_ControlType LED_Controls;
	LED_Controls.LED_Pin=PF2;
	LED_Controls.LED_SW1=PF4;
	LED_Controls.LED_SW2=PF0;
	LED_Init(LED_Controls, LED_Toggle,	LED_SysTick);
	uint16_t ON_Time=0;
	uint16_t OFF_Time=0;
	LED_Blink(ON_Time,OFF_Time,LED_SysTick);
	while(1)
	{
		
	}
}


