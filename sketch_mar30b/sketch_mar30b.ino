void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial1.available()){
    char dato=Serial1.read();
    Serial.print("he recibido: ");
    Serial.println(dato);
  }

}
