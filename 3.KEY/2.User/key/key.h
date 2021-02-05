/**
  ******************************************************************************
  * @author  Nydxsst
  * @version V1.0.0
  * @date    2020/02/05
  ******************************************************************************
	* @attention ֻ��һ������ֻ��Ҫ������KEY�����߶���Ϊͬһ��IO����
  ******************************************************************************
  */
	
#ifndef __KEY_H
#define __KEY_H 

#include "gd32e10x.h"


/* �ⲿ���ã���Ķ���---------------------------------------------------------*/
#define KEY1_PRES 	1	//KEY0����
#define KEY2_PRES		2	//KEY1����
#define KEY3_PRES		3	//KEY2����

/* KEY������ -----------------------------------------------------------------*/
/* IO���Ŷ��� */
#define KEY1_CLK		RCU_GPIOA
#define KEY1_PORT		GPIOA
#define KEY1_PIN		GPIO_PIN_4
#define KEY1_MODE		GPIO_MODE_IPU

#define KEY2_CLK		RCU_GPIOA
#define KEY2_PORT		GPIOA
#define KEY2_PIN		GPIO_PIN_0
#define KEY2_MODE		GPIO_MODE_IPU

#define KEY3_CLK		RCU_GPIOC
#define KEY3_PORT		GPIOC
#define KEY3_PIN		GPIO_PIN_13
#define KEY3_MODE		GPIO_MODE_IPU

#define KEY1_READ		gpio_input_bit_get(KEY1_PORT, KEY1_PIN)
#define KEY2_READ		gpio_input_bit_get(KEY2_PORT, KEY2_PIN)
#define KEY3_READ		gpio_input_bit_get(KEY3_PORT, KEY3_PIN)


/* �ⲿ���ú��� --------------------------------------------------------------*/
void Key_Init(void);
u8 KEY_Scan(void);

#endif
