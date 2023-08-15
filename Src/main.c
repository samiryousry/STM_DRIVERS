/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Samir Yousry
 * @brief          : Main program body
 ******************************************************************************
*/

#include "Cortex_M4/Cortex_M4_Core_SCB.h"
#include "Cortex_M4/Cortex_M4_Core_NVIC.h"
int main(void)
{
    /* Loop forever */
	NVIC_EnableIRQ(USART3_IRQN);
	NVIC_EnableIRQ(EXTI15_10_IRQN);
	NVIC_EnableIRQ(RTC_Alarm_IRQN);

	for(;;);
}
