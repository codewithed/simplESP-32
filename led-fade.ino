const int ledPin = 25;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  ledcAttach(ledPin, 5000, 8);
}

void loop() {
  ledcWrite(ledPin, brightness); // Write the new brightness
  
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(50);
}
