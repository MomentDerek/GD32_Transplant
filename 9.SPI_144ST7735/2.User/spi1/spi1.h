/**
  ******************************************************************************
  * @author  
  * @version V1.0.0
  * @date    2020/07/02
  ******************************************************************************
	* @attention 
  ******************************************************************************
  */

#ifndef __SPI1_H
#define __SPI1_H

#include "gd32e10x.h"


/* 外部调用函数 --------------------------------------------------------------*/
void SPI1_Init(void);						 //初始化SPI口
void SPI1_SetSpeed(u8 SpeedSet); //设置SPI速度
u8 SPI1_ReadWriteByte(u8 TxData);//SPI总线读写一个字节

#endif
