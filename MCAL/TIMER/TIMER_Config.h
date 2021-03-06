/*
 * TIMER_Config.h
 *
 *  Created on: Nov 18, 2021
 *      Author: gerges
 */

#ifndef MCAL_TIMER_TIMER_CONFIG_H_
#define MCAL_TIMER_TIMER_CONFIG_H_

/*Timer Prescaler Options:
 * 0- TIMER_STOPPED
 * 1- TIMER_NO_PRESCALER
 * 2- TIMER_8_PRESCALER
 * 3- TIMER_64_PRESCALER
 * 4- TIMER_256_PRESCALER
 * 5- TIMER_1024_PRESCALER
 * 6- TIMER_EXTERNAL_CLOCK_SOURCE_FALLING_EDGE
 * 7- TIMER_EXTERNAL_CLOCK_SOURCE_RISING_EDGE
 */
#define TIMER0_SET_PRESCALER  TIMER_STOPPED
#define TIMER1_SET_PRESCALER   TIMER_NO_PRESCALER


/*TIMER0 Modes Options:
 * 1- TIMER0_NORMAL_MODE
 * 2- TIMER0_CTC_MODE
 * 3- TIMER0_PHASECORRECT_PWM_MODE
 * 4- TIMER0_FAST_PWM_MODE
 */

#define TIMER0_SET_MODE      TIMER0_NORMAL_MODE

/*Timer0 CTC Interrupt Options:
 * 1- TIMER0_CTC_INTERRUPT_ENABLED
 * 2- TIMER0_CTC_INTERRUPT_DISABLED
 */

#define TIMER0_SET_CTC_INTERRUPT   TIMER0_CTC_INTERRUPT_DISABLED

/*Timer0 CTC OC0 PIN Options:
 * 1- TIMER0_OC0_PIN_DISCONNECTED
 * 2- TIMER0_OC0_PIN_TOGGLE
 * 3- TIMER0_OC0_PIN_SET
 * 4- TIMER0_OC0_PIN_CLR
 */
#define TIMER0_SET_OC0_PIN_MODE  TIMER0_OC0_PIN_DISCONNECTED

/*Set Timer0 PWM Mode
 * 1-TIMER0_NUN_INVERTING_PWM
 * 2-TIMER0_INVERTING_PWM
 */
#define TIMER0_SET_PWM_MODE   TIMER0_NUN_INVERTING_PWM
/*Select Timer1 Modes options
 * 1- TIMER1_NORMAL_MODE
 * 2- TIMER1_PHASECORRECT_PWM_MODE_8BITS
 * 3- TIMER1_PHASECORRECT_PWM_MODE_9BITS
 * 4- TIMER1_PHASECORRECT_PWM_MODE_10BITS
 * 5- TIMER1_CTC_MODE_WITH_OCR1A
 * 6- TIMER1_FAST_PWM_MODE_8BITS
 * 7- TIMER1_FAST_PWM_MODE_9BITS
 * 8- TIMER1_FAST_PWM_MODE_10BITS
 * 9- TIMER1_PWM_PHASE_AND_FREQUANCY_CORRECT_WITH_ICR1
 * 10- TIMER1_PWM_PHASE_AND_FREQUANCY_CORRECT_WITH_OCR1A
 * 11- TIMER1_PHASECORRECT_PWM_MODE_WITH_ICR1
 * 12- TIMER1_PHASECORRECT_PWM_MODE_WITH_OCR1A
 * 13- TIMER1_CTC_MODE_WITH_ICR1
 * 14- TIMER1_FAST_PWM_MODE_WITH_ICR1
 * 15-  TIMER1_FAST_PWM_MODE_WITH_OCR1A
 */
#define TIMER1_SET_MODE     TIMER1_CTC_MODE_WITH_OCR1A
/*Timer1  set   normal or  CTC mode OC1A \ OC1B PIN Options:
 * 1- TIMER1_OC1A_OR_OC1B_PIN_DISCONNECTED
 * 2- TIMER1_OC1A_OR_OC1B_PIN_TOGGLE
 * 3- TIMER1_OC1A_OR_OC1B_PIN_CLR
 * 4- TIMER1_OC1A_OR_OC1B_PIN_SET
 */
#define TIMER1_SET_OC1A_OR_OC1B_PIN_MODE   TIMER1_OC1A_OR_OC1B_PIN_DISCONNECTED

/*timer1 channel options:
 * 1- CHANNELA
 * 2- CHANNELB
 */
#define CHANNEL_MODE          CHANNELA

/*Select ICU Edge
 * 1-RISING_EDGE
 * 2-FALLING_EDGE
 */
#define ICU_Edge_Select   RISING_EDGE
/*Timer1 CTC Interrupt Options:
 * 1- TIMER1_CTC_INTERRUPT_ENABLED
 * 2- TIMER1_CTC_INTERRUPT_DISABLED
 */

#define TIMER1_SET_CTC_INTERRUPT   TIMER1_CTC_INTERRUPT_ENABLED
#endif /* MCAL_TIMER_TIMER_CONFIG_H_ */
