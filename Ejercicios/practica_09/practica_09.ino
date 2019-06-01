int UMBRAL = 180;
int LDR = 0;
int POT = 0;

void setup() {
  for(int i = 5; i<8; i++){
    pinMode(i, OUTPUT);  
  }
}

void loop() {
  LDR = analogRead(0);
  POT = analogRead(5);

  if(LDR < UMBRAL && POT > 0){
    VELOCIDAD(POT);
  }
  else{
    APAGADO();
  }
}

void APAGADO(){
  for(int i = 5; i<8; i++){
    digitalWrite(i, LOW);
  }  
}

void VELOCIDAD(int RETARDO){
    for(int i = 5; i<8; i++){
      digitalWrite(i, HIGH);
      delay(RETARDO);
      digitalWrite(i, LOW);
      delay(20);
    }
}
