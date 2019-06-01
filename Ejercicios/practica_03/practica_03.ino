// Practica 03: Led y pulsador

int e_1 = 0;  // Estado del pulsador con resistencia pull-up (1)
int e_2 = 0;  // Estado del pulsador con resistencia pull-down (2)

void setup()
{
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(7, OUTPUT);  // Led izquierda
  pinMode(5, OUTPUT);  // Led derecha
}

void loop()
{
  e_1 = digitalRead(12);  // Lee el estado del pulsador con resistencia pull-up
  if(e_1 == HIGH){  // Compara si e_1 es igual a estado HIGH (1)
    digitalWrite(7, HIGH);
  }
  else{  // En caso de no cumplirse la comparación anterior
    digitalWrite(7, LOW);
  }
  
  e_2 = digitalRead(11); // Lee el estado del pulsador con resistencia pull-down
  if(e_2 == HIGH){
    digitalWrite(5, HIGH);
  }
  else{
    digitalWrite(5, LOW);
  }  
}
