#include "Task_SysInit.h"

void Task_SysInit(void *Parameters)
{	
	RM_GPIO_Init();
	RM_TIM_Init();
	
	taskENTER_CRITICAL();   //�����ٽ���
	
	xTaskCreate(Task_Control,
              "Task_Control",
              250,
              NULL,
              4,
              NULL);
	vTaskDelete(NULL);
    taskEXIT_CRITICAL();    //�˳��ٽ���
}

