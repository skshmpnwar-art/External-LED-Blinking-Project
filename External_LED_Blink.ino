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
