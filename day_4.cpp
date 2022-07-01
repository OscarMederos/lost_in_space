 int LED1 = 10;
 int LED2 = 11;
 int LED3 = 12;
 int Switch1 = 2;
 int Switch2 = 3;
 int Switch3 = 4;
  
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);

}

void loop() {
  if (digitalRead(Switch1) == HIGH) {
    digitalWrite(LED1, HIGH);
  }
  else {
    digitalWrite(LED1, LOW);
  }
    if (digitalRead(Switch2) == HIGH) {
    digitalWrite(LED2, HIGH);
  }
  else {
    digitalWrite(LED2, LOW);
  }
    if (digitalRead(Switch3) == HIGH) {
    digitalWrite(LED3, HIGH);
  }
  else {
    digitalWrite(LED3, LOW);
  }
}
