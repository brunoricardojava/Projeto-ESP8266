//ESP8266 Teste da comunicação serial.
void setup(){
  Serial.begin(115200);
  Serial.printf("Oi estou funcionando");
}

void loop(){
  Serial.printf("%s\n","ESP e D+..." );
  delay(500);
}
