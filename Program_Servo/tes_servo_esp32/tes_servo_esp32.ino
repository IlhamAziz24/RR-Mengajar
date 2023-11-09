#include <ESP32Servo.h>
Servo myservo;

void setup() {
  myservo.attach(12); // pin servo pada pin 12 ESP32
}

void loop() {
  myservo.write(0);   // servo berada pada sudut 0 derajat
  delay(1000);        // jeda selama 1 detik
  myservo.write(180); // servo berada pada sudut 180 derajat
  delay(1000);        // jeda selama 1 detik
}
