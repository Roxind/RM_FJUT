#ifndef __DRIVER_BUZZER_H
#define __DRIVER_BUZZER_H

#include "main.h"

#define Startup_Success_music_len 25

#define BEEP_ON     (TIM12->CRR1 = 599)
#define BEEP_OFF    (TIM12->CCR1 = 0)

#define BEEP_ARR    (TIM12->ARR)
#define BEEP_CH     (TIM12->CCR1)


typedef enum
{
  L1 = 0, ///*261.63Hz*/    3822us
  L2,     ///*293.66Hz*/    3405us
  L3,     ///*329.63Hz*/    3034us
  L4,     ///*349.23Hz*/    2863us
  L5,     ///*392.00Hz*/    2551us
  L6,     ///*440.00Hz*/    2272us
  L7,     ///*493.88Hz*/    2052us

  M1,     ///*523.25Hz*/    1911us
  M2,     ///*587.33Hz*/    1703us
  M3,     ///*659.26Hz*/    1517us
  M4,     ///*698.46Hz*/    1432us
  M5,     ///*784.00Hz*/    1276us
  M6,     ///*880.00Hz*/    1136us
  M7,     ///*987.77Hz*/    1012us

  H1,     ///*1046.50Hz*/   956us
  H2,     ///*1174.66Hz*/   851us
  H3,     ///*1318.51Hz*/   758us
  H4,     ///*1396.91Hz*/   716us
  H5,     ///*1567.98Hz*/   638us
  H6,     ///*1760.00Hz*/   568us
  H7,     ///*1975.53Hz*/   506us
  
  Silent,
}Sound_tone_e;

void Sing_Startup_music(uint32_t index);

#endif
