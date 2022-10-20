#ifndef TIMER0_INTERFACE_H
#define TIMER0_INTERFACE_H
//*****************************************************************************
//
// INCLUDES
//
//*****************************************************************************
#include "stdint.h"
#include "TIMER0_Private.h"


//*****************************************************************************
//
// DRIVER PROTOTYPES
//
//*****************************************************************************

void TIMER0_Callback(void (*ptrF) (void));
void TIMER0_O_P_Init(Timer0_ConfigType TimerConfig);
void TIMER0_Delay_uS(Timer0_DelayType Delay_uS);
void Timer0_Start(void);

#endif /*SYSTICK_INTERFACE_H */
