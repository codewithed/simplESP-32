// Define LED Pins
const int redPin = 27;
const int bluePin = 33;
const int greenPin = 32;

// Define Setup behaviour
void setup() {
  ledcAttach(redPin, 5000, 8);
  ledcAttach(greenPin, 5000, 8);
  ledcAttach(bluePin, 5000, 8);
}

// Define Looping Behaviour
void loop() {
  setColour(255, 0, 0);
  delay(1000);
  setColour(0, 255, 0);
  delay(1000);
  setColour(0, 0, 255);
  delay(1000);
  setColour(200, 150, 0);
  delay(1000);
  setColour(2000, 32, 200);
  delay(1000);
}

// Helper function for setting colour of the LED
void setColour(int red, int green, int blue) {
  ledcWrite(redPin, red);
  ledcWrite(greenPin, green);
  ledcWrite(bluePin, blue);
}
