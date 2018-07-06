#ifndef __MAIN_H__
#define __MAIN_H__
#include "stm32f4xx.h"
#include <stdio.h>
#include "stdlib.h"
#include "stdbool.h"
#include <math.h>
#include <string.h>
#include <stdarg.h>

//FreeRTOS
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"  
#include "croutine.h"

//Bsp
#include "Bsp_gpio.h"
#include "Bsp_tim.h"

//Driver
#include "Driver_Buzzer.h"

//Task
#include "Task_SysInit.h"
#include "Task_Control.h"


#endif
