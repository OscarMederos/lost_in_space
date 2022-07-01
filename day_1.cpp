int Light = 12;

void setup() {
  pinMode(Light, OUTPUT);
  digitalWrite(Light, LOW);

}

void loop() {
  digitalWrite(Light, LOW);
  delay(1000);
  digitalWrite(Light, HIGH);
  delay(500);

}
