#include "main.h"

int main(void)
{
	xTaskCreate(Task_SysInit,
            "SysInit",
            300,
            NULL,
            3,
            NULL);

	vTaskStartScheduler();
	while(1);
}

