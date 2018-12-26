#define rightBackward 8
#define rightForward 12
#define leftBackward 13
#define leftForward 11
#define rightSpeed 9
#define leftSpeed 10

void setup() {
  Serial.begin(9600);

}

void loop() {
  digitalWrite(rightForward, HIGH);
  digitalWrite(rightBackward, LOW);
  digitalWrite(leftForward, HIGH);
  digitalWrite(leftBackward, LOW);
  analogWrite(rightSpeed, 45);
  analogWrite(leftSpeed, 45);

  delay(5000);

  digitalWrite(rightForward, LOW);
  digitalWrite(leftForward, LOW);
  analogWrite(rightSpeed, 0);
  analogWrite(leftSpeed, 0);

  delay(5000);
}
