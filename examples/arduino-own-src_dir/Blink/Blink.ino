/*******************************************************************************
****版本：V1.0.4
****平台：P17
****日期：2021-02-03
****作者：Qitas
****版权：OS-Q
*******************************************************************************/
#include <Arduino.h>

#ifndef LED_PIN
#define LED_PIN 13  // Most Arduino boards already have a LED attached to pin 13 on the board itself
#endif


void setup()
{
  pinMode(LED_PIN, OUTPUT);     // set pin as output
}

void loop()
{
  digitalWrite(LED_PIN, HIGH);  // set the LED on
  delay(1000);                  // wait for a second
  digitalWrite(LED_PIN, LOW);   // set the LED off
  delay(1000);                  // wait for a second
}

/*---------------------------(C) COPYRIGHT 2021 OS-Q -------------------------*/
