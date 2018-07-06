#include "Bsp_tim.h"

void RM_TIM_Init(void)
{
	TIM_TimeBaseInitTypeDef     TIM_TimeBaseInitStructure;
    TIM_OCInitTypeDef           TIM_OCInitStructure;
    TIM_ICInitTypeDef           TIM_ICInitStructure;
    
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3 | RCC_APB1Periph_TIM7 |
						   RCC_APB1Periph_TIM12 | RCC_APB1Periph_TIM5, ENABLE); //Ê¹ÄÜTIMÊ±ÖÓ
	
	//TIM12  Friction
    TIM_TimeBaseInitStructure.TIM_Prescaler = 83;
	TIM_TimeBaseInitStructure.TIM_CounterMode = TIM_CounterMode_Up;
	TIM_TimeBaseInitStructure.TIM_Period = 300;   //2.5ms
	TIM_TimeBaseInitStructure.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_TimeBaseInit(TIM12,&TIM_TimeBaseInitStructure);
    TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM2;
	TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OCInitStructure.TIM_OutputNState = TIM_OutputState_Disable;
	TIM_OCInitStructure.TIM_Pulse = 0;   //Ä¦²ÁÂÖÆôÊ¾×´Ì¬
	TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_Low;
	TIM_OCInitStructure.TIM_OCNPolarity = TIM_OCPolarity_High;
	TIM_OCInitStructure.TIM_OCIdleState = TIM_OCIdleState_Reset;
	TIM_OCInitStructure.TIM_OCNIdleState = TIM_OCIdleState_Set;
	TIM_OC1Init(TIM12,&TIM_OCInitStructure);
    TIM_OC1PreloadConfig(TIM12,TIM_OCPreload_Enable);
	TIM_ARRPreloadConfig(TIM12,ENABLE);
	TIM_Cmd(TIM12,ENABLE);
	
}

