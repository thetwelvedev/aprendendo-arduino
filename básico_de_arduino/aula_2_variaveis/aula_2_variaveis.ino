void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

}

void loop() {

  int intervalo1Pisca;
  int intervalo2Pisca;

  intervalo1Pisca = 500;
  intervalo2Pisca = 500;

  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(intervalo1Pisca);

  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(intervalo2Pisca);

}
