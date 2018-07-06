#include "Driver_Buzzer.h"
 

const uint16_t tone_tab[] = 
{
  3822,  3405, 3033, 2863, 2551, 2272, 2024,	//bass 1~7
  1911,  1702, 1526, 1431, 1275, 1136, 1012,	//mid 1~7
  955,   851,  758,  715,   637, 568,   506,	//treble 1~7
};

const Sound_tone_e Mavic_Startup_music[Startup_Success_music_len] = 
{
  M3,H7,M3,L5,M3,L3,M1,L2,M3,Silent,M5,Silent,M5,Silent,M6,L3,L6,L3,L3,M6,M3,L3,L3,L5,Silent
};

//
void Sing(Sound_tone_e tone)
{
  if(Silent == tone)
    BEEP_CH = 0;
  else 
  {
    BEEP_ARR = tone_tab[tone];
    BEEP_CH = tone_tab[tone] / 2;
  }
}

//play the start up music
void Sing_Startup_music(uint32_t index)
{
  if(index < Startup_Success_music_len)
    Sing(Mavic_Startup_music[index]);
}






