/******************************************************************************************
ATmega32u4 breakout board pins include file

This is a headerfile based of the atmega32u4 breakout board manufactured by Adafruit  
pins mapped to Arduino Leonardo board to programing with the Arduino IDE easier.
It defines the pins labled on the silkscreen to it's corresponding Arduino Leonardo
pin name.

The analog pins on the breakout board are: F0, F1, F4, F5, F6, F7, B4, B5, B6, D4, D6 & D7
These are refered by appending a 'A' in front of the labled pin ex: AF0, AF1, AB6, ... 

I (the creator of this file) is not connected to Adafruit or Arduino.

Created by:      The Swedish Hobbyist  www.thehobbyist.se   2015-07-14
Last edited by:  The Swedish Hobbyist  www.thehobbyist.se   2015-07-18

*****************************************************************************************/


#ifndef m32u4_breakout_pins.h
#define m32u4_breakout_pins.h
  
  //Digital pins
  #define  B0  17
  #define  B1  15
  #define  B2  16
  #define  B3  14
  #define  B4  8
  #define  B5  9
  #define  B6  10
  #define  B7  11
  
  #define  C6  5
  #define  C7  13
  
  #define  D0  3
  #define  D1  2
  #define  D2  0
  #define  D3  1
  #define  D4  4
  #define  D6  12
  #define  D7  6
  
  #define  E6  7
  
  #define  F0  23
  #define  F1  22
  #define  F4  21
  #define  F5  20
  #define  F6  19
  #define  F7  18
  
  //Analog pins
  #define  AF0  A5
  #define  AF1  A4
  #define  AF4  A3
  #define  AF5  A2
  #define  AF6  A1
  #define  AF7  A0
  
  #define  AD4  A6
  #define  AD6  A11
  #define  AD7  A7
  
  #define  AB4  A8
  #define  AB5  A9
  #define  AB6  A10
  
  
#endif
