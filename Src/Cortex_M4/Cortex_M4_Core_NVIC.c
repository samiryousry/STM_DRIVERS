/**
 ***********************************************************************************************************
 * @file           : NVIC_driver
 * @author         : Samir Yousry
 * @brief          : Main program body
 ************************************************************************************************************
*/

/******************************* Includes********************************************************************/
#include"Cortex_M4/Cortex_M4_Core_NVIC.h"

/******************************* Macro Declarations**********************************************************/
void NVIC_EnableIRQ(IRQn_Type IRQN)
{ if((uint32_t)IRQN>=0){
	NVIC->ISER[(IRQN/32)]|=(1UL<<((uint32_t)IRQN%32));

}}
void NVIC_DisableIRQ(IRQn_Type IRQN)
{
	if((uint32_t)IRQN>=0){
		NVIC->ICER[(IRQN/32)]|=(1UL<<((uint32_t)IRQN%32));
	}
}
void NVIC_SetPendingIRQ(IRQn_Type IRQN){
	if((uint32_t)IRQN>=0){
			NVIC->ISPR[(IRQN/32)]|=(1UL<<((uint32_t)IRQN%32));
		}
}
void NVIC_ClearPendingIRQ(IRQn_Type IRQN){
	if((uint32_t)IRQN>=0){
			NVIC->ICPR[(IRQN/32)]|=(1UL<<((uint32_t)IRQN%32));
		}
}
uint8_t NVIC_GetActive(IRQn_Type IRQN){
	uint8_t var =0;

	if((uint32_t)IRQN>=0){
		var=NVIC->IABR[IRQN/32]&(1UL<<((uint32_t)IRQN%32));
			}
	return var ;
}
void NVIC_SetPriorityIRQ(IRQn_Type IRQN,uint32_t priority){
	if((uint32_t)IRQN>=0){
	NVIC->IPR[(uint32_t)IRQN]=((uint8_t)priority<<(8-NVIC_PRIORITY_BITS));

	}
	else {

	}
}
uint32_t NVIC_GetPriority(IRQn_Type IRQN){
	if((uint32_t)IRQN>=0){

	return(NVIC->IPR[(uint32_t)IRQN]>>(8-NVIC_PRIORITY_BITS));
		}
		else {
			return 0;
		}

}
