/*
/**
 ******************************************************************************
 * @file           : Cortex_M4_Core_SCB.c
 * @author         : Samir Yousry
 * @brief          : standard types
 ******************************************************************************
*/
#include"Cortex_M4_Core_SCB.h"
void SCB_SetPriorityGrouping(uint32_t priority_group)
{


	uint32_t register_data =SCB->AIRCR;
	register_data&=(~((uint32_t)0xffff0007UL));
	register_data|=SCB_PRIORITY_SET(priority_group);
	SCB->AIRCR=register_data;
}
uint32_t SCB_GetPriorityGrouping(){
	uint32_t register_data =SCB->AIRCR;
	register_data&=((uint32_t)0x07<<8);
	register_data>>8;
	return register_data ;

}
