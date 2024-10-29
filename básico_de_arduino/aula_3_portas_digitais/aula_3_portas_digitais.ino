void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, INPUT);

  Serial.begin(115200);
}

void loop() {

  int estadoBotao;
  estadoBotao = digitalRead(7); //Vai ler o valor 0(LOW) ou 1(HIGH)
  Serial.println(estadoBotao); //Vai mostrar o estado no monitor serial
  delay(1000);

  digitalWrite(9, estadoBotao); //Quando estiver em estado alto
  digitalWrite(10, !estadoBotao);//Esse vai tá em estado baixo
}
