#include "Task_Control.h"

int a=0;

void Task_Control(void *Parameters)
{
	portTickType CurrentControlTick = 0;                //��ǰϵͳʱ��
	while(1)
	{
		CurrentControlTick = xTaskGetTickCount(); //��ȡ��ǰʱ��
		
		a++;
		Sing_Startup_music(a);

		vTaskDelayUntil(&CurrentControlTick, 100 / portTICK_RATE_MS); //���������������� 
	}
}
