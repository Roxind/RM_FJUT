#include "Task_Control.h"

int a=0;

void Task_Control(void *Parameters)
{
	portTickType CurrentControlTick = 0;                //当前系统时间
	while(1)
	{
		CurrentControlTick = xTaskGetTickCount(); //获取当前时间
		
		a++;
		Sing_Startup_music(a);

		vTaskDelayUntil(&CurrentControlTick, 100 / portTICK_RATE_MS); //控制任务运行周期 
	}
}
