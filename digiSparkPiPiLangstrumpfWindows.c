#include "DigiKeyboardDe.h"

void setup() 
{
  pinMode(1, OUTPUT); //LED on Model A 

  //Digispark Tastatur einmalige ausgabe:
  DigiKeyboardDe.update();
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_M, MOD_GUI_LEFT); //minimize all windows
  DigiKeyboardDe.delay(2000);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboardDe.delay(500);
  DigiKeyboardDe.println("c:\\Program Files (x86)\\Internet Explorer\\iexplore.exe -K https://www.youtube.com/watch?v=vS4DNnp8ZhMexit");
}

void loop() 
{ 
  //LED blinken wenn fertig...
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(200);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(200);
}
