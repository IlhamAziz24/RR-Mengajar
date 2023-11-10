int ena = 3; //set pin kecepatan motor 1
int enb = 4; //set pin kecepatan motor 2
int m1 = 5;  
int m2 = 6;
int m3 = 7;
int m4 = 8;
void setup() {
  pinMode(ena, OUTPUT);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
}

void loop() {
  digitalWrite(ena, 100);
  digitalWrite(enb, 200);
  
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
  delay(5000);
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
  delay(5000);
}
