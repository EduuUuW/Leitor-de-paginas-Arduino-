byte x=200;

#include <LiquidCrystal.h>

LiquidCrystal lcd(0,1,8,9,10,11);

int pino_botao = 7;
int pino_led = 12;
int pino_sensor = 3;
int numero_pagina = 0;

void setup()
{
  lcd.begin(16, 2);
  
  pinMode(pino_led, OUTPUT);
  pinMode(pino_sensor, INPUT);
  pinMode(pino_botao, INPUT);
  
  lcd.setCursor(5, 0);
  lcd.print("Pagina");
}

void loop()
{
  delay(1010);
  if(digitalRead(pino_sensor) == HIGH){
    
  digitalWrite(pino_led, HIGH);
  numero_pagina = numero_pagina + 1;
  lcd.setCursor(6, 1);
  lcd.print(numero_pagina);
}
  else{
    digitalWrite(pino_led, 	LOW);
}
  
  if(digitalRead(pino_botao) == HIGH){
    
   numero_pagina = numero_pagina - 1;
   lcd.setCursor(6, 1);
   lcd.print(numero_pagina);
  }
  
}