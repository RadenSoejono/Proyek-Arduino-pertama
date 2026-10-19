#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); 

void efek(String text, int kolom, int baris, int time){
  lcd.setCursor(kolom, baris);
  lcd.print(text);
  delay(time);
}

void setup() {
  lcd.init();                      
  lcd.backlight();                 
  delay(2000);

  efek("About You", 0, 0, 900);
  efek("~ The 1975 ~", 4, 1, 3000);
  lcd.clear();


  efek("something", 0, 0, 540);
  efek("about", 7, 1, 500);
  efek("you", 13, 1, 675);
  lcd.clear();

  efek("that", 0, 0, 480);
  efek("now", 5, 1, 500);
  lcd.clear();

  efek("i", 0, 0, 250);
  efek("can't", 2, 0, 500);
  efek("remember", 6, 1, 1040);
  lcd.clear();

  efek("it's", 0, 0, 250);
  efek("the", 5, 0, 250);
  efek("same", 9, 1, 550);
  lcd.clear();
  
  efek("damn", 0, 0, 550);
  efek("thing", 8, 1, 670);
  lcd.clear();
  
  efek("that", 6, 0, 250);
  efek("made", 7, 1, 550);
  lcd.clear();

  efek("my", 2, 0, 300);
  efek("heart", 10, 0, 470);
  efek("surrender", 3, 1, 1110);
  lcd.clear();
  
  efek("and", 5, 0, 250);
  efek("i", 10, 0, 200);
  efek("miss", 4, 1, 240);
  efek("you", 10, 1, 275);
  lcd.clear();
  
  efek("on", 0, 0, 250);
  efek("a", 4, 1, 250);
  efek("train",6, 1, 470);
  lcd.clear();
  
  efek("i'll", 6, 0, 430);
  efek("miss", 1, 1, 700);
  efek("you", 13, 1, 350);
  lcd.clear();

  efek("in", 4, 0, 350);
  efek("the", 8, 0, 350);
  efek("morning", 5, 1, 350);
  lcd.clear();

  efek("i", 0, 0, 1100);
  efek("never", 5, 0, 450);
  efek("know", 4, 1, 550);
  efek("what", 9, 1, 250);
  lcd.clear();
  
  efek("to", 1, 0, 350);
  efek("think", 5, 0, 450);
  efek("about", 2, 1, 1000);
  lcd.clear();
  delay(250);

  efek("i", 4, 0, 400);
  efek("think", 8, 0, 500);
  efek("about", 3, 1, 1110);
  efek("you", 9, 1, 1100);
  lcd.clear();
  delay(200);
  
  efek(".", 6, 0, 300);
  efek(".", 7, 0, 300);
  efek(".", 8, 0, 300);

}

void loop() {


}
