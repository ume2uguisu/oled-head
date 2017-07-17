
#include "SSD1306_minimal.h"
#include <avr/pgmspace.h>

SSD1306_Mini oled;

const unsigned char face1 [] PROGMEM = {
};

void setup(){
  pinMode(3, INPUT);   
  oled.init(0x3c);
  oled.clear(); 
}    

 
void loop(){
    oled.drawImage( face1, 0,0, 128, 8 );
     delay(500); 
} 


