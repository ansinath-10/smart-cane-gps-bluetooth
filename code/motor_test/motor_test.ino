#define MOTOR 2

void setup() {
  pinMode(MOTOR, OUTPUT);
}

void loop() {
  digitalWrite(MOTOR, HIGH);
  delay(1000);
  digitalWrite(MOTOR, LOW);
  delay(1000);
}
