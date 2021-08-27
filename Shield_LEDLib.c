/*
 * File:   Shield_LEDLib.c
 * Author: rafae
 *
 * Created on 26 de Agosto de 2021, 17:47
 */

#include <xc.h>
#include "Shield_LEDLib.h"


void initLED()
{
    
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD4 = 0;
    TRISDbits.TRISD3 = 0;
    
    LATDbits.LED01 = 0;
    LATDbits.LED02 = 0;
    LATDbits.LED03 = 0;
    LATDbits.LED04 = 0;
    LATDbits.LED05 = 0;
    
    return;    
}

void setLEDMask(char mask)
{
    return;
}

void setLEDId(enum_LEDID id)
{
    if(id > 5 || id < 1)
        return;
    
    switch(id)
    {
        case L1:
            LATDbits.LED01 = ~LATDbits.LED01;
            break;
        case L2:
            LATDbits.LED02 = ~LATDbits.LED02;
            break;
        case L3:
            LATDbits.LED03 = ~LATDbits.LED03;
            break;
        case L4:
            LATDbits.LED04 = ~LATDbits.LED04;
            break;
        case L5:
            LATDbits.LED05 = ~LATDbits.LED05;
            break;
    }
    
}       

