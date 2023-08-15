
/**
 ******************************************************************************
 * @file           :  Cortex_M4_Core_NVIC.h
 * @author         : Samir Yousry
 * @brief          : standard types
 ******************************************************************************
*/

#ifndef CORTEX_M4_CORE_NVIC_H_
#define CORTEX_M4_CORE_NVIC_H_

/******************************* Includes********************************************************************/
#include"Common/Std_Types.H"
/******************************* Macro Declarations**********************************************************/
#define NVIC_BASE      (0XE00E100UL)
#define NVIC           ((NVIC_Type*)NVIC_BASE)
/******************************* Macro Function Declarations*************************************************/
/******************************* Data Type Declarations *****************************************************/
typedef struct{
	volatile uint32_t ISER[8U];
	 uint32_t reserved_1[24U];
	 volatile uint32_t ICER[8U];
	 uint32_t reserved_2[24U];
	 volatile uint32_t ISPR[8U];
	 uint32_t reserved_3[24U];
	 volatile uint32_t ICPR[8U];
	 uint32_t reserved_4[24U];
	 volatile uint32_t IABR[8U];
	 uint32_t reserved_5[56U];
	 volatile uint8_t IPR[240U];
	 uint32_t reserved_7[644U];
	 volatile uint8_t STIR;

}NVIC_Type;
typedef enum{ /************ Cortex M4 Exceptions ************/
	NonMaskableInterrupt_IRQN  =-14,
MemManage_IRQN  =-12,
BusFault_IRQN  =-11,
UsageFault_IRQN  =-10,
SVCall_IRQN  =-5,
DebugMonitor_IRQN  =-4,
PendSV_IRQN  =-2,
SysTick_IRQN  =-1,
               /************ STM32 SPECFIC  Exceptions ************/
WWDG_IRQN =0,
PVD_IRQN  =1,
TAMP_STAMP_IRQN  =2,
RTC_WKUP_IRQN =3,
FLASH_IRQN  =4,
RCC_STAMP_IRQN  =5,
EXTI0_IRQN =6,
EXTI1_IRQN =7,
EXTI2_IRQN =8,
EXTI3_IRQN =9,
EXTI4_IRQN =10,
DMA1_Stream0_IRQN  =11,
DMA1_Stream1_IRQN  =12,
DMA1_Stream2_IRQN  =13,
DMA1_Stream3_IRQN  =14,
DMA1_Stream4_IRQN  =15,
DMA1_Stream5_IRQN  =16,
DMA1_Stream6_IRQN  =17,
ADC_IRQN =18,
CAN1_TX_IRQN  =19,
CAN1_RX0_IRQN  =20,
CAN1_RX1_IRQN =21,
CAN1_SCE_IRQN  =22,
EXTI9_5_IRQN  =23,
TIM1_BRK_TIM9_IRQN =24,
TIM1_UP_TIM10_IRQN =25,
TIM1_TRG_COM_TIM11_IRQN  =26,
TIM1_CC_IRQN  =27,
TIM2_IRQN  =28,
TIM3_IRQN  =29,
TIM4_IRQN  =30,
I2C1_EV_IRQN  =31,
I2C1_ER_IRQN  =32,
I2C2_EV_IRQN  =33,
I2C2_ER_IRQN  =34,
SPI1_IRQN  =35,
SPI2_IRQN  =36,
USART1_IRQN  =37,
USART2_IRQN  =38,
USART3_IRQN  =39,
EXTI15_10_IRQN  =40,
RTC_Alarm_IRQN  =41,
OTG_FS_WKUP_IRQN  =42,
TIM8_BRK_TIM12_IRQN  =43,
TIM8_UP_TIM13_IRQN  =44,
TIM8_TRG_COM_TIM14_IRQN  =45,
TIM8_CC_IRQN  =46,
DMA1_Stream7_IRQN  =47,
FSMC_IRQN  =48,
SDIO_IRQN  =49	,
TIM5_IRQN  =50,
SPI3_IRQN  =51,
UART4_IRQN  =52,
UART5_IRQN  =53,
TIM6_DAC_IRQN  =54,
TIM7_IRQN  =55,
DMA2_Stream0_IRQN  =56,
DMA2_Stream1_IRQN  =57,
DMA2_Stream2_IRQN  =58,
DMA2_Stream3_IRQN  =59,
DMA2_Stream4_IRQN  =60,
ETH_IRQN  =61,
ETH_WKUP_IRQN  =62,
CAN2_TX_IRQN  =63,
CAN2_RX0_IRQN  =64,
CAN2_RX1_IRQN  =65,
CAN2_SCE_IRQN  =66,
OTG_FS_IRQN  =67,
DMA2_Stream5_IRQN  =68,
DMA2_Stream6_IRQN  =69,
DMA2_Stream7_IRQN  =70,
USART6_IRQN  =71,
I2C3_EV_IRQN  =72,
I2C3_ER_IRQN  =73,
OTG_HS_EP1_OUT_IRQN  =74,
OTG_HS_EP1_IN_IRQN  =75,
OTG_HS_WKUP_IRQN  =76,
OTG_HS_IRQN  =77,
DCMI_IRQN  =78,
CRYP_IRQN  =79,
HASH_RNG_IRQN  =80,
FPU_IRQN  =81,
}IRQn_Type;
/******************************* Software Interfaces Declarations *******************************************/
void NVIC_EnableIRQ(IRQn_Type IRQN);
void NVIC_DisableIRQ(IRQn_Type IRQN);
void NVIC_SetPendingIRQ(IRQn_Type IRQN);
void NVIC_ClearPendingIRQ(IRQn_Type IRQN);
uint8_t NVIC_GetActive(IRQn_Type IRQN);
uint8_t NVIC_GetActive_Test(IRQn_Type IRQN);
#endif /* CORTEX_M4_CORE_NVIC_H_ */
