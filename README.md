# External-LED-Blinking-Project
Hardware Projects (Arduino)
```markdown
# Arduino External LED Blink

A simple and foundational project demonstrating how to connect and control an external LED using an Arduino board. This project is perfect for beginners learning the basics of electronics and microcontroller programming.

## 📸 Project Images

*(Replace the links below with the actual paths or URLs to your images)*

**Finished Project:**
![Finished Project Image](docs/project_image.jpg)

**Circuit Diagram:**
![Circuit Diagram](docs/circuit_diagram.png)

## 🛠️ Components Required

* 1x Arduino Uno (or any other compatible board)
* 1x Breadboard
* 1x LED (Any color)
* 1x Resistor (220Ω or 330Ω)
* 2x Jumper Wires (Male-to-Male)
* USB Cable (to connect Arduino to PC)

## 🔌 Wiring Instructions

1. **LED Placement:** Insert the LED into the breadboard. Notice that one leg is longer than the other. The longer leg is the **Anode (+)** and the shorter leg is the **Cathode (-)**.
2. **Resistor:** Connect one end of the 220Ω resistor to the **Anode** (longer leg) of the LED. 
3. **Power (Signal):** Connect the other end of the resistor to **Digital Pin 13** on the Arduino using a jumper wire.
4. **Ground:** Connect the **Cathode** (shorter leg) of the LED directly to one of the **GND** pins on the Arduino using another jumper wire.

## 💻 Arduino Code

Copy and paste the following code into your Arduino IDE:

```cpp
// Define the pin where the LED is connected
const int ledPin = 13; 

void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn the LED on (HIGH is the voltage level)
  delay(1000);                 // Wait for a second (1000 milliseconds)
  digitalWrite(ledPin, LOW);   // Turn the LED off by making the voltage LOW
  delay(1000);                 // Wait for a second
}
