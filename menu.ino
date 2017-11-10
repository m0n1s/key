#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2

#define LOGO16_GLCD_HEIGHT 16 
#define LOGO16_GLCD_WIDTH  16 

struct key_list_t {
  uint8_t** keys;
  uint8_t len;
};

// SSD1306_LCDHEIGHT * SSD1306_LCDWIDTH / 8

void menu_init(){
  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 128x32)
  // init done
  
  // Clear the buffer.
  //display.clearDisplay();
  
  //display.drawRect(0, 0, display.width(), 8, WHITE);
  //display.drawRect(0, 9, display.width(), 23, WHITE);
  
  display.display();
  delay(1000);
  //display.clearDisplay();
}
void show_list(struct key_list_t* list){
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(2,1);
  
  
  //display.write(i);
  display.println("Dasdf");
  display.display();
  return; 
}

