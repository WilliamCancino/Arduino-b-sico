// PRACTICA 02: SEMAFORO

void setup(){
  pinMode(11, OUTPUT); // Led rojo
  pinMode(10, OUTPUT); // Led naranja
  pinMode(9, OUTPUT); // Led verde
}

void loop(){
  digitalWrite(11, HIGH);
  delay(2000);
  
  digitalWrite(10, HIGH);
  delay(500); 
  
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(2000);
  
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(500);
  
  digitalWrite(10, LOW);
}
