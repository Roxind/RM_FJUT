#include "Bsp_gpio.h"


void RM_GPIO_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
    
    RCC_AHB1PeriphClockCmd( RCC_AHB1Periph_GPIOA | RCC_AHB1Periph_GPIOE | 
							RCC_AHB1Periph_GPIOF | RCC_AHB1Periph_GPIOB |
                            RCC_AHB1Periph_GPIOG | RCC_AHB1Periph_GPIOD |
							RCC_AHB1Periph_GPIOH | RCC_AHB1Periph_GPIOI, ENABLE); //Ê¹ÄÜGPIOÊ±ÖÓ
	//LED 
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 | GPIO_Pin_4 | 
								  GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7 | GPIO_Pin_8;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
    GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
    GPIO_Init(GPIOG, &GPIO_InitStructure);

    GPIO_SetBits(GPIOG,GPIO_Pin_1);
	GPIO_SetBits(GPIOG,GPIO_Pin_2);
	GPIO_SetBits(GPIOG,GPIO_Pin_3);
	GPIO_SetBits(GPIOG,GPIO_Pin_4);
	GPIO_SetBits(GPIOG,GPIO_Pin_5);
	GPIO_SetBits(GPIOG,GPIO_Pin_6);
	GPIO_SetBits(GPIOG,GPIO_Pin_7);
	GPIO_SetBits(GPIOG,GPIO_Pin_8);
	
	//Buzzer
	GPIO_PinAFConfig(GPIOH, GPIO_PinSource6, GPIO_AF_TIM12);
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
    GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
    GPIO_Init(GPIOH, &GPIO_InitStructure);
    

}

