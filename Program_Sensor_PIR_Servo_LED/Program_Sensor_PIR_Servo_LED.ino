#include <Servo.h> // library pada servo
Servo servo;       // create servo object to control a servo

int MOTION_PIN = 12; // pin sensor PIR ke arduino
int SERVO_PIN  = 9;  // pin servo ke arduino
int LED     = 3;    // pin LED ke arduino

int MotionState;     // keadaan sensor PIR saat ini

void setup()
{
  Serial.begin(9600);         // inisialisasi serial pada 9600
  pinMode(LED, OUTPUT);       // mengatur LED sebagai mode OUTPUT 
  pinMode(MOTION_PIN, INPUT); // mengatur sensor PIR sebagai mode INPUT
  servo.attach(SERVO_PIN);    // memasang servo pada pin 9

  servo.write(0);             // mengatur sudut awal servo pada  derajat
}

void loop() {
  MotionState = digitalRead(MOTION_PIN); // membaca motion pin(sensor pir) pada MotionState
 
  if (MotionState == HIGH)   // jika MotionState b2nilai HIGH, maka...
  {
    digitalWrite(LED, HIGH); // LED bernilai HIGH atau menyala
    servo.write(180);        // servo akan bergerak 180 derajat
  }
  else // jika tidak, maka...
  {
    digitalWrite(LED, LOW); // LED bernilai LOW atau mati
    servo.write(20);        // servo akan bergerak 20 derajat
  }
}
