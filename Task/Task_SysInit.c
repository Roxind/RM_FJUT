#include "Task_SysInit.h"

void Task_SysInit(void *Parameters)
{	
	RM_GPIO_Init();
	RM_TIM_Init();
	
	taskENTER_CRITICAL();   //进入临界区
	
	xTaskCreate(Task_Control,
              "Task_Control",
              250,
              NULL,
              4,
              NULL);
	vTaskDelete(NULL);
    taskEXIT_CRITICAL();    //退出临界区
}

