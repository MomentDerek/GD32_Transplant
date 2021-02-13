#include "timer.h"

/**
	* @brief	��ʼ��TIMER
	* @param  None
	* @retval None
	*/
void TIMER_Init(void)
{
	timer_parameter_struct timer_initpara;

	/* NVIC Init */
	nvic_irq_enable(INT_TIMER_IRQn, 1, 1);
	/* TIMER Init */
	rcu_periph_clock_enable(INT_TIMER_CLK);
	//timer_deinit(INT_TIMER);
	timer_initpara.prescaler         = INT_TIMER_PREACALER;
	timer_initpara.alignedmode       = TIMER_COUNTER_EDGE;//���ļ���ģʽʹ����ѡ��
	timer_initpara.counterdirection  = TIMER_COUNTER_UP;
	timer_initpara.period            = INT_TIMER_RELOAD;
	timer_initpara.clockdivision     = TIMER_CKDIV_DIV1;
	timer_initpara.repetitioncounter = 0U;//n+1���������ڴ���һ���ж�
	timer_init(INT_TIMER, &timer_initpara);

	//timer_interrupt_flag_clear(INT_TIMER, TIMER_INT_FLAG_UP);
	timer_interrupt_enable(INT_TIMER, TIMER_INT_UP);
	timer_enable(INT_TIMER);
}

/**
	* @brief	TIMER�ж�ִ�к���
	* @param  None
	* @retval None
	*/
void INT_TIMER_IRQH(void)
{
	if(timer_interrupt_flag_get(INT_TIMER, TIMER_INT_FLAG_UP) == SET)
	{
		/* clear update interrupt bit */
		timer_interrupt_flag_clear(INT_TIMER, TIMER_INT_FLAG_UP);
		SYSTEM_LED = !SYSTEM_LED;
	}
}
