/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */
#include <xc.h> // include processor files - each processor file is guarded. 

#define LED01 LATD7
#define LED02 LATD6
#define LED03 LATD5
#define LED04 LATD4
#define LED05 LATD3

typedef enum {
    L1 = 1,
    L2,
    L3,
    L4,
    L5
} enum_LEDID;


void initLED();
void setLEDMask(char mask);
void setLEDId(enum_LEDID id, int value);
void toggleLEDId(enum_LEDID id);
