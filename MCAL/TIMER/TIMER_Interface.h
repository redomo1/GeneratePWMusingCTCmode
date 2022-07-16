/*
 * TIMER_Interface.h
 *
 *  Created on: Nov 18, 2021
 *      Author: gerges
 */

#ifndef MCAL_TIMER_TIMER_INTERFACE_H_
#define MCAL_TIMER_TIMER_INTERFACE_H_

/*Timer0 Initialization*/
void TIMER0_VidInit(void);
/*Set Preload Function*/
void TIMER0_VidSetPreload(u8 Copy_u8Preload);
/*Set CTC Value Function*/
void TIMER0_VidSetCTCValue(u8 Copy_u8CTCValue);

void TIMER0_VidOVF_SetCallBack(void(*Copy_VidCallBack)(void));
void TIMER1_VidInit(void);
void TIMER1_VidSetTopValue(u16 Copy_u16TopValue);
void TIMER1_VidSetCTCValueCHA(u16 Copy_u16CTCValue);
void TIMER1_VidSetCTCValueCHB(u16 Copy_u16CTCValue);
void TIMER1_VidSetPreload(u16 Copy_u16Preload);
void TIMER_VidCompute_Freq_And_Duty(u32 *Copy_u32Freq,u8 *Copy_u8DutyCycle,u16 T1,u16 T2,u16 T3);
u8 TIMER0_TCNT0_VALUE(void);
u16 TIMER1_TCNT1_VALUE(void);
void TIMER1_VidOVF_SetCallBack(void(*Copy_VidCallBack)(void));
void TIMER1_VidCTC_SetCallBack(void(*Copy_VidCallBack)(void));
#endif /* MCAL_TIMER_TIMER_INTERFACE_H_ */
