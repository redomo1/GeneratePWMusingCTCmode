/*
 * main.c
 *
 *  Created on: Mar 5, 2022
 *      Author: Eng-Rehab Soliman
 */

#include"LIB\LSTD_TYPES.h"
#include"LIB\LBIT_MATH.h"
#include"MCAL\MDIO\MDIO_Interface.h"
#include"MCAL\TIMER\TIMER_Interface.h"
#include"MCAL\MGIE\MGIE_Interface.h"
#include"HAL\HCLCD\HCLCD_Interface.h"
#include<util\delay.h>

volatile u8 flag=0;
void isr_tov_app(void)
{
	if(flag)
	{
		flag=0;
		MDIO_Error_State_SetPinValue(PIN6,MDIO_PORTB,PIN_HIGH);
		TIMER1_VidSetCTCValueCHA(4999);
	}
	else
	{
		flag=1;
		MDIO_Error_State_SetPinValue(PIN6,MDIO_PORTB,PIN_LOW);
		TIMER1_VidSetCTCValueCHA(14999);
	}
}


int main(void)
{

	MDIO_Error_State_SetPinDirection(PIN6,MDIO_PORTB,PIN_OUTPUT);

	TIMER1_VidCTC_SetCallBack(isr_tov_app);
    TIMER1_VidSetCTCValueCHA(19998);
	TIMER1_VidInit();
	MGIE_VidEnable();


	while(1)
	{

	}
	return 0;
}
