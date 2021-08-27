/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

#ifndef JOYSTICK_H
#define JOYSTICK_H

#define _JOYPIN RE0
#endif 
#include <xc.h>

void initJoystick();
int readPositionJoy();
int JoyIsAvailable();

