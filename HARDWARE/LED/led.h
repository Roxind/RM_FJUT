#ifndef __LED_H
#define __LED_H
#include "main.h"
//LED端口定义
#define LED1 PFout(14)	// DS0
#define LED2 PEout(7)	// DS1	 

void LED_Init(void);//初始化	

#endif
