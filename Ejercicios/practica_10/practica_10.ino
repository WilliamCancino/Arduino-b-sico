int valor = 0;
float miliVolts = 0;
float temperatura = 0;

void setup() { 
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(0);  // Lectura del sensor de temperatura
  miliVolts = valor * (5000/1023);  // Pasar lectura a milivolts
  temperatura = miliVolts / 10;  // Temperatura en grados celsius
  Serial.println(temperatura);
}
