int in1 = 8;
int in2 = 9;
int enable = 3;
int proximityPin1 = 4;
int ObjectInPlace;


void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enable, OUTPUT);
  pinMode(proximityPin1, INPUT);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(enable, 150);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  ObjectInPlace = digitalRead(proximityPin1);
  if (ObjectInPlace == HIGH) {
    // Object is in place, stop the motor
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
  }
}
