/*
 LPG Gas Leakage Detection System
 Components Used:
 - Arduino UNO
 - MQ-2 Gas Sensor
 - Buzzer
 - Red LED (Gas Detected)
 - Green LED (Safe)
 - 16x2 LCD Display (Parallel)
*/

#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

const int mq2Pin = A0;
const int buzzerPin = 8;
const int redLed = 9;
const int greenLed = 10;

int gasValue = 0;
int threshold = 400;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  lcd.begin(16, 2);
  lcd.print("LPG GAS SYSTEM");
  lcd.setCursor(0, 1);
  lcd.print("Initializing");
  delay(2000);
  lcd.clear();
}

void loop() {
  gasValue = analogRead(mq2Pin);

  lcd.setCursor(0, 0);
  lcd.print("Gas Level: ");
  lcd.print(gasValue);
  lcd.print(" ");

  if (gasValue > threshold) {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    digitalWrite(buzzerPin, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("!! GAS LEAK !! ");
  } else {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    digitalWrite(buzzerPin, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Status: SAFE ");
  }

  delay(1000);
}
