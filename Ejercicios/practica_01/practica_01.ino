// PRACTICA 01: CONTROL DE DOS LED

// La función void setup() es la primera función en ejecutarse dentro de un programa en Arduino.
void setup(){
  pinMode(8, OUTPUT); // Led verde
  pinMode(5, OUTPUT); // Led rojo
}

// La función void loop() es la que se ejecuta un número infinito de veces
void loop(){
  digitalWrite(8, HIGH);
  delay(1000);
  
  digitalWrite(5, HIGH);
  delay(2000);
  
  digitalWrite(8, LOW);
  digitalWrite(5, LOW);
  delay(2000);
}
