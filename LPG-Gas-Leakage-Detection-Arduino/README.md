# LPG Gas Leakage Detection System 🚨🔥  
Detect early. Act fast. Stay safe.

This project implements a **real-time LPG gas leakage detection system** using **Arduino**, an **MQ-2 gas sensor**, visual indicators, an audible alarm, and a **dedicated 16x2 LCD display**.

The system continuously monitors gas concentration and immediately alerts users when unsafe levels are detected.

Simple logic. Life-saving purpose.

---

## 🧠 Project Overview
Liquefied Petroleum Gas (LPG) is commonly used in homes and industries, but gas leakage can be extremely dangerous.  
This system detects LPG leakage early and provides **instant visual and audible alerts** to prevent accidents.

### Working Flow

---

## ⚡ Key Features
- Continuous LPG gas monitoring
- Adjustable gas detection threshold
- Audible alert using buzzer
- Visual status indication using LEDs
- Real-time gas level display on LCD
- Clean and easy-to-understand Arduino code

Suitable for **college projects, demonstrations, and safety systems**.

---

## 🔧 Hardware Components
- Arduino Uno  
- MQ-2 Gas Sensor  
- Buzzer  
- Red LED (Gas detected)  
- Green LED (Safe condition)  
- 16x2 LCD Display (Parallel mode)  
- Resistors and jumper wires  

---

## 🔌 Pin Connections

### MQ-2 Sensor
| MQ-2 Pin | Arduino |
|--------|---------|
| AO | A0 |
| VCC | 5V |
| GND | GND |

### Output Devices
| Device | Arduino Pin |
|-------|-------------|
| Buzzer | D8 |
| Red LED | D9 |
| Green LED | D10 |

### LCD (16x2)
| LCD Pin | Arduino |
|--------|---------|
| RS | D7 |
| EN | D6 |
| D4 | D5 |
| D5 | D4 |
| D6 | D3 |
| D7 | D2 |

---

## 💻 Arduino Logic
- Reads analog value from MQ-2 sensor
- Displays gas level on LCD
- Compares gas level with a preset threshold
- Activates buzzer and red LED when gas is detected
- Displays SAFE status with green LED otherwise

---

## ⚙️ Threshold Configuration
```cpp
int threshold = 400; // Adjust after calibration
