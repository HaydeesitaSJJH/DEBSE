int sensorHumedad = A0;
int ledRiego = 8;
int valorHumedad = 0;

void setup() {
  pinMode(ledRiego, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valorHumedad = analogRead(sensorHumedad);
  Serial.println(valorHumedad);

  if (valorHumedad < 500) {
    digitalWrite(ledRiego, HIGH);
  } else {
    digitalWrite(ledRiego, LOW);
  }

  delay(1000);
}