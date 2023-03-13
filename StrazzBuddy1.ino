#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>
//Make Sure Address is Correct
#define OLED_ADDRESS 0x3c
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET -1   //   QT-PY / XIAO
Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_ADDRESS);

void setup() {
  delay(250); // wait for the OLED to power up
  display.begin(OLED_ADDRESS, true); // Address 0x3C default
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SH110X_WHITE);
  display.display();
  delay(2000);

  // Clear the buffer.
  display.clearDisplay();

  // draw a single pixel
  display.drawPixel(10, 10, SH110X_WHITE);
  // Show the display buffer on the hardware.
  // NOTE: You _must_ call display after making any drawing commands
  // to make them visible on the display hardware!
  display.display();
  delay(2000);
  display.clearDisplay();
  wtf();
  sleep();
  wakeUp();
}

void loop() {

  int randomNum = random(6);

  if (randomNum == 1) {
    regEyes();
    sleep();
    randomNum = random(5);
  }
  if (randomNum == 2) {
    heart();
    randomNum = random(5);
  }
  if (randomNum == 3) {
    carrotEyes();
    randomNum = random(5);
  }
  if (randomNum == 4) {
    sideEye();
    randomNum = random(5);
  }
  if (randomNum == 5) {
    sideEye();
    sleep();
    randomNum = random(5);
  }
    if (randomNum == 6) {
    wtf();
    randomNum = random(5);
  }
}

void wtf() {
  // display.clearDisplay();
  // display.setTextSize(1);      // Normal 1:1 pixel scale
  // display.setTextColor(SH110X_WHITE); // Draw white text
  // display.setCursor(32, 16);     // Start at top-left corner
  // display.cp437(true); 
  // display.write("WTF");
  // delay(20000);
  // display.clearDisplay();
  display.clearDisplay();

  display.setTextSize(5);             // Normal 1:1 pixel scale
  display.setTextColor(SH110X_WHITE);        // Draw white text
  display.setCursor(24,16);             // Start at top-left corner
  display.println(F("WTF"));

  display.display();
  delay(2000);
}

void sleep() {
  display.clearDisplay();
  //blink
  display.fillRect(36, 28, 20, 8, SH110X_WHITE);
  display.fillRect(76, 28, 20, 8, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 45, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 48, 3, SH110X_WHITE);
  display.fillCircle(80, 48, 3, SH110X_WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();


  //yawn
  //blink
  display.fillRect(36, 28, 20, 8, SH110X_WHITE);
  display.fillRect(76, 28, 20, 8, SH110X_WHITE);

  display.fillCircle(64, 50, 8, SH110X_WHITE);
  display.display();
  delay(2000);
  display.clearDisplay();
  //blink
  display.fillRect(36, 28, 20, 8, SH110X_WHITE);
  display.fillRect(76, 28, 20, 8, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 45, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 48, 3, SH110X_WHITE);
  display.fillCircle(80, 48, 3, SH110X_WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();
  //yawn
  //blink
  display.fillRect(36, 28, 20, 8, SH110X_WHITE);
  display.fillRect(76, 28, 20, 8, SH110X_WHITE);

  display.fillCircle(64, 50, 8, SH110X_WHITE);
  display.display();
  delay(2000);
}

void wakeUp() {
  display.clearDisplay();
  //blink
  display.fillRect(36, 28, 20, 8, SH110X_WHITE);
  display.fillRect(76, 28, 20, 8, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();

  //left wink
  display.fillCircle(46, 32, 8, SH110X_WHITE);
  display.fillRect(76, 28, 20, 8, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(2000);
  display.clearDisplay();

  //blink
  display.fillRect(36, 28, 20, 8, SH110X_WHITE);
  display.fillRect(76, 28, 20, 8, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(1000);
  display.clearDisplay();

  //right wink
  display.fillRect(36, 28, 20, 8, SH110X_WHITE);
  display.fillCircle(80, 32, 8, SH110X_WHITE);


  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);
  display.display();
  delay(2000);
  display.clearDisplay();

  //blink
  display.fillRect(36, 28, 20, 8, SH110X_WHITE);
  display.fillRect(76, 28, 20, 8, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(1000);
  display.clearDisplay();

  // eyes
  display.clearDisplay();
  display.fillCircle(48, 32, 8, SH110X_WHITE);
  display.fillCircle(80, 32, 8, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(3000);
  display.clearDisplay();

  //blink
  display.fillRect(36, 28, 20, 4, SH110X_WHITE);
  display.fillRect(76, 28, 20, 4, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(400);

  // eyes
  display.clearDisplay();
  display.fillCircle(48, 32, 8, SH110X_WHITE);
  display.fillCircle(80, 32, 8, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(4000);
  display.clearDisplay();


  //blink
  display.fillRect(44, 28, 10, 4, SH110X_WHITE);
  display.fillRect(76, 28, 10, 4, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(150);
}

void regEyes() {  //Regular eyes with Blinking
  // eyes
  display.clearDisplay();
  display.fillCircle(48, 32, 8, SH110X_WHITE);
  display.fillCircle(80, 32, 8, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(7000);
  display.clearDisplay();

  //blink
  display.fillRect(44, 28, 10, 4, SH110X_WHITE);
  display.fillRect(76, 28, 10, 4, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(1500);

  //open
  display.clearDisplay();
  display.fillCircle(48, 32, 8, SH110X_WHITE);
  display.fillCircle(80, 32, 8, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(6000);
  display.clearDisplay();

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  //blink
  display.fillRect(44, 28, 10, 4, SH110X_WHITE);
  display.fillRect(76, 28, 10, 4, SH110X_WHITE);
  display.display();
  delay(1000);
}

void sideEye() {
  // eyes
  display.clearDisplay();
  display.fillCircle(48, 32, 8, SH110X_WHITE);
  display.fillCircle(80, 32, 8, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(7000);
  display.clearDisplay();
  //blink
  display.fillRect(32, 28, 10, 4, SH110X_WHITE);
  display.fillRect(96, 28, 10, 4, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(1000);
  display.clearDisplay();

  //side eye
  display.fillCircle(32, 32, 8, SH110X_WHITE);
  display.fillCircle(96, 32, 8, SH110X_WHITE);

  //mouth
  display.fillRect(32, 55, 64, 8, SH110X_WHITE);
  display.fillCircle(32, 58, 3, SH110X_WHITE);
  display.fillCircle(96, 58, 3, SH110X_WHITE);

  display.display();
  delay(6000);
  display.clearDisplay();

  //blink
  display.fillRect(32, 28, 10, 4, SH110X_WHITE);
  display.fillRect(96, 28, 10, 4, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(1000);
  display.clearDisplay();

  //side eye
  display.fillCircle(32, 32, 8, SH110X_WHITE);
  display.fillCircle(96, 32, 8, SH110X_WHITE);

  //mouth
  display.fillRect(32, 55, 64, 8, SH110X_WHITE);
  display.fillCircle(32, 58, 3, SH110X_WHITE);
  display.fillCircle(96, 58, 3, SH110X_WHITE);

  display.display();
  delay(7000);
  display.clearDisplay();

  //blink
  display.fillRect(32, 28, 10, 4, SH110X_WHITE);
  display.fillRect(96, 28, 10, 4, SH110X_WHITE);

  //small mouth
  display.fillRect(48, 55, 32, 8, SH110X_WHITE);
  display.fillCircle(48, 58, 3, SH110X_WHITE);
  display.fillCircle(80, 58, 3, SH110X_WHITE);

  display.display();
  delay(1000);
  display.clearDisplay();
}

void heart() {
  display.clearDisplay();

  int x1 = 44;
  int y1 = 27;
  int radius1 = 10;

  // Draw the left heart
  display.fillTriangle(x1 - radius1, y1, x1, y1 + radius1, x1 + radius1, y1, SH110X_WHITE);
  display.fillCircle(x1 - 5, y1, 5.5, SH110X_WHITE);
  display.fillCircle(x1 + 5, y1, 5.5, SH110X_WHITE);

  int x2 = 84;
  int y2 = 27;
  int radius2 = 10;

  // Draw the right heart
  display.fillTriangle(x2 - radius2, y2, x2, y2 + radius2, x2 + radius2, y2, SH110X_WHITE);
  display.fillCircle(x2 - 5, y2, 5.5, SH110X_WHITE);
  display.fillCircle(x2 + 5, y2, 5.5, SH110X_WHITE);

  //smile
  display.fillCircle(64, 50, 12, SH110X_WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, SH110X_BLACK);  // hide top half of smile

  display.display();
  delay(4000);

  //blink
  display.clearDisplay();

  //smile
  display.fillCircle(64, 50, 12, SH110X_WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, SH110X_BLACK);  // hide top half of smile

  //eyes
  display.fillRect(44, 28, 10, 4, SH110X_WHITE);
  display.fillRect(76, 28, 10, 4, SH110X_WHITE);
  display.display();
  delay(1000);
  display.clearDisplay();

  //smile
  display.fillCircle(64, 50, 12, SH110X_WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, SH110X_BLACK);  // hide top half of smile


  // Draw the left heart
  display.fillTriangle(x1 - radius1, y1, x1, y1 + radius1, x1 + radius1, y1, SH110X_WHITE);
  display.fillCircle(x1 - 5, y1, 5.5, SH110X_WHITE);
  display.fillCircle(x1 + 5, y1, 5.5, SH110X_WHITE);

  // Draw the right heart
  display.fillTriangle(x2 - radius2, y2, x2, y2 + radius2, x2 + radius2, y2, SH110X_WHITE);
  display.fillCircle(x2 - 5, y2, 5.5, SH110X_WHITE);
  display.fillCircle(x2 + 5, y2, 5.5, SH110X_WHITE);

  display.display();
  delay(4000);

  //blink
  display.clearDisplay();
  display.fillRect(44, 28, 10, 4, SH110X_WHITE);
  display.fillRect(76, 28, 10, 4, SH110X_WHITE);

  //smallest mouth
  display.fillCircle(64, 50, 12, SH110X_WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, SH110X_BLACK);  // hide top half of smile

  display.display();
  delay(1000);
  display.clearDisplay();

  // Draw the left heart
  display.fillTriangle(x1 - radius1, y1, x1, y1 + radius1, x1 + radius1, y1, SH110X_WHITE);
  display.fillCircle(x1 - 5, y1, 5.5, SH110X_WHITE);
  display.fillCircle(x1 + 5, y1, 5.5, SH110X_WHITE);

  // Draw the right heart
  display.fillTriangle(x2 - radius2, y2, x2, y2 + radius2, x2 + radius2, y2, SH110X_WHITE);
  display.fillCircle(x2 - 5, y2, 5.5, SH110X_WHITE);
  display.fillCircle(x2 + 5, y2, 5.5, SH110X_WHITE);

  //smile
  display.fillCircle(64, 50, 12, SH110X_WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, SH110X_BLACK);  // hide top half of smile


  display.display();
  delay(4000);

  //blink
  display.clearDisplay();

  display.clearDisplay();
  display.fillRect(44, 28, 10, 4, SH110X_WHITE);
  display.fillRect(76, 28, 10, 4, SH110X_WHITE);

  //smallest mouth
  display.fillCircle(64, 50, 12, SH110X_WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, SH110X_BLACK);  // hide top half of smile

  display.display();
  delay(1000);
  display.clearDisplay();
}

void carrotEyes() {  // ^ shape eyes
  display.clearDisplay();

  int centerX = 42;
  int centerY = 32;
  int lineLength = 10;

  // Draw the left ^ symbol
  display.drawLine(centerX - lineLength, centerY + lineLength, centerX, centerY - lineLength, SH110X_WHITE);

  display.drawLine(centerX, centerY - lineLength, centerX + lineLength, centerY + lineLength, SH110X_WHITE);

  int centerXl = 90;
  int centerYl = 32;

  // Draw the right ^ symbol
  display.drawLine(centerXl - lineLength, centerYl + lineLength, centerXl, centerYl - lineLength, SH110X_WHITE);

  display.drawLine(centerXl, centerYl - lineLength, centerXl + lineLength, centerYl + lineLength, SH110X_WHITE);

  //smile
  display.fillCircle(64, 50, 12, SH110X_WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, SH110X_BLACK);  // hide top half of smile

  display.display();
  delay(7000);
  display.clearDisplay();

  //blink
  //smallest mouth
  display.fillCircle(64, 50, 12, SH110X_WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, SH110X_BLACK);  // hide top half of smile

  display.fillRect(38, 32, 10, 4, SH110X_WHITE);
  display.fillRect(84, 32, 10, 4, SH110X_WHITE);
  display.display();
  delay(1000);

  display.clearDisplay();
  // Draw the left ^ symbol
  display.drawLine(centerX - lineLength, centerY + lineLength, centerX, centerY - lineLength, SH110X_WHITE);

  display.drawLine(centerX, centerY - lineLength, centerX + lineLength, centerY + lineLength, SH110X_WHITE);

  // Draw the right ^ symbol
  display.drawLine(centerXl - lineLength, centerYl + lineLength, centerXl, centerYl - lineLength, SH110X_WHITE);

  display.drawLine(centerXl, centerYl - lineLength, centerXl + lineLength, centerYl + lineLength, SH110X_WHITE);

  //smile
  display.fillCircle(64, 50, 12, SH110X_WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, SH110X_BLACK);  // hide top half of smile

  display.display();
  delay(8000);
  display.clearDisplay();

  //blink

  //smallest mouth
  display.fillCircle(64, 50, 12, SH110X_WHITE);    // full smile
  display.fillRect(0, 38, 128, 12, SH110X_BLACK);  // hide top half of smile

  display.fillRect(38, 32, 10, 4, SH110X_WHITE);
  display.fillRect(84, 32, 10, 4, SH110X_WHITE);
  display.display();
  delay(1000);
  display.clearDisplay();
}