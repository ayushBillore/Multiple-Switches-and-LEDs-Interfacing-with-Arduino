# Multiple Switches and LEDs Interfacing with Arduino

## 📌 Overview
In embedded systems and microcontroller applications, interfacing switches and LEDs is a fundamental task.  
This project demonstrates basic digital input and output operations using an Arduino.

## 🎯 Problem Statement
**Objective:** Connect 2 LEDs to separate slide-switch controls using an Arduino.  
Each LED should be controlled independently based on the state of its switch.

## 🛠 Required Components
- Arduino Uno R3
- Breadboard
- Slide Switches (x2)
- LEDs (x2)
- Resistors (220Ω – 1kΩ, x2 for LEDs)
- Jumper Wires

## 🔌 Circuit Diagram
<img width="451" height="466" alt="image" src="https://github.com/user-attachments/assets/6d8cdff2-a0d8-4995-b82d-e23f171e111d" />


## ⚡ Connections
**LEDs**
- LED 1: Anode → Digital Pin 12 via resistor, Cathode → GND  
- LED 2: Anode → Digital Pin 13 via resistor, Cathode → GND  

**Slide Switches**
- Switch 1: One terminal → 5V, Other terminal → Digital Pin 2 (with pull-down resistor if needed)  
- Switch 2: One terminal → 5V, Other terminal → Digital Pin 3 (with pull-down resistor if needed)  

## 📖 Working Principle
- Switch 1 controls LED 1 independently.  
- Switch 2 controls LED 2 independently.  
- LEDs turn ON when their respective switches are HIGH, and OFF when LOW.  
- Debouncing ensures stable switch operation.  

## ✅ Summary
This project explains how two switches can independently control two LEDs using Arduino.  
It forms the foundation for:
- Control panels  
- User interfaces  
- Interactive embedded systems

## Link
https://www.tinkercad.com/things/16lYkbSrdjA-brilliant-maimu-gogo
