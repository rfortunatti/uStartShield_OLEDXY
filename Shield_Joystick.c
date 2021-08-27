/*
 * File:   Shield_Joystick.c
 * Author: rafae
 *
 * Created on 26 de Agosto de 2021, 22:46
 */

#ifndef _XTAL_FREQ
#define _XTAL_FREQ 8000000
#endif

#include <xc.h>
#include "Shield_Joystick.h"

void initJoystick()
{
   
    TRISEbits.TRISE0 = 1;
    ADCS0 = 1;
    ADCS1 = 1;
    ADCS1 = 0;
    
    ADCON0 = 0b10001010; //AN5 + ADC Enabled
}

int readPositionJoy()
{
    __delay_ms(2);
    GO_nDONE = 1; //Start ADC conversion
    while(GO_nDONE); //Wait for it PauseChamp
    int joyResult = 0;
    int joyRaw = ((ADRESH<<8)+ADRESL);
    
    if(joyRaw < 100)
      joyResult = 1;  //LEFT
  else if(100 <= joyRaw&&joyRaw < 250)
      joyResult = 5;  //PUSH
  else if(250 <= joyRaw&&joyRaw < 450)
      joyResult = 2;  //UP
  else if(450 <= joyRaw&&joyRaw < 700)
      joyResult = 3;  //RIGHT
  else if(700 <= joyRaw&&joyRaw < 900)
      joyResult = 4;  //DOWN
  else
      joyResult=0;    //MID
  
  return joyResult;
}


