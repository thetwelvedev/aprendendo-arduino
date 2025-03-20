void setup() {
  pinMode(10, OUTPUT); //Informa que vai ter saída de energia nesse pino
  pinMode(9, OUTPUT);
  
  pinMode(7, INPUT); //Recebendo dados
  Serial.begin(115200);//Para iniciar a comunicação
}

void loop() {
  //Com essas instruções ele vai ficar ligando e desligando
  digitalWrite(10, HIGH); //Estado Ligado
  delay(500);//Tá em  milissegundo, então 1000ms = 1s
  digitalWrite(10, LOW); //Estado Desligado
  delay(500);

  digitalWrite(9, HIGH);
  Serial.println(digitalRead(7));//Ler o estado do pino e printar no Serial Monitor
  delay(500);
  digitalWrite(9, LOW);
  Serial.println(digitalRead(7));
  delay(500);
}
