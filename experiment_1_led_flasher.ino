int i=13;
void setup() {
  pinMode(i,OUTPUT);

}

void loop() {
  digitalWrite(i,HIGH);
  delay(1000);
  digitalWrite(i,LOW);
  delay(1000);

}
