/*

 ******************************************************************************
 * @file           : Cortex_M4_Core_SCB.h
 * @author         : Samir Yousry
 * @brief          : standard types
 ******************************************************************************
*/

#ifndef CORTEX_M4_CORE_SCB_H_
#define CORTEX_M4_CORE_SCB_H_

/******************************* Includes********************************************************************/
#include"Common/Std_Types.H"
/******************************* Macro Declarations**********************************************************/

#define SCB_BASE          (0xE000ED00UL)
#define SCB	       		 ((SCB_Type*)SCB_BASE)
#define SCB_PRIORITY_0   0X00000007U
#define SCB_PRIORITY_1   0X00000006U
#define SCB_PRIORITY_2   0X00000005U
#define SCB_PRIORITY_3   0X00000004U
#define SCB_PRIORITY_4   0X00000003U
#define VECTKEY          (0X5FA <<16)
#define SCB_PRIORITY_SET( PRIO)          (VECTKEY|PRIO<<8)
/******************************* Data Type Declarations *****************************************************/
	typedef struct{
	volatile uint32_t CPUID ;
	volatile uint32_t ICSR ;
	volatile uint32_t VTOR ;
	volatile uint32_t AIRCR ;
	volatile uint32_t SCR ;
	volatile uint32_t CCR ;
	volatile uint32_t SHPR1 ;
	volatile uint32_t SHPR2 ;
	volatile uint32_t SHPR3 ;
	volatile uint32_t SHCSR ;
	volatile uint32_t CFSR ;
	volatile uint32_t HFSR ;
	volatile uint32_t MMAR ;
	volatile uint32_t BFAR ;
	volatile uint32_t AFSR ;

	}SCB_Type;
	/******************************* Software Interfaces Declarations *******************************************/
	void SCB_SetPriorityGrouping(uint32_t priority_group);



#endif /* CORTEX_M4_CORE_SCB_H_ */
