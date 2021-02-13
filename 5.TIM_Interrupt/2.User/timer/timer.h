/**
  ******************************************************************************
  * @author  Nydxsst
  * @version V1.0.0
  * @date    2020/02/06
  ******************************************************************************
	* @attention 
  ******************************************************************************
  */

#ifndef __TIMER_H
#define __TIMER_H

#include "gd32e10x.h"


/* TIMER���ò��� -------------------------------------------------------------*/
//TIM����Ƶ�� = 120M/prescaler, ���� = LOAD/����Ƶ��
#define INT_TIMER_PREACALER		11999U
#define INT_TIMER_RELOAD			9999U
/* TIMER������ ---------------------------------------------------------------*/
#define INT_TIMER							TIMER2
#define INT_TIMER_IRQn				TIMER2_IRQn
#define INT_TIMER_CLK					RCU_TIMER2
#define INT_TIMER_IRQH				TIMER2_IRQHandler

/* �ⲿ���ú��� --------------------------------------------------------------*/
void TIMER_Init(void);

#endif
