// PRACTICA 00: BLINK (PARPADEO DE UN LED)

void setup() {
  // Configura el modo de trabajo de un pin (INPUT (entrada) u OUTPUT (salida))
  pinMode(8, OUTPUT);
}

void loop() {
  // Escribe  un valor (HIGH o LOW) en el pin digital especificado
  digitalWrite(8, HIGH);

  // Realiza una pausa en el programa durante el tiempo (en milisegundos) especificado
  delay(1000);
  
  digitalWrite(8, LOW);
  
  delay(1000);
}
