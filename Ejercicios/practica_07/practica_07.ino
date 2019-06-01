int LDR = 0;
int UMBRAL = 180;

void setup() {
  Serial.begin(9600);
  pinMode(6, OUTPUT);
}

void loop() {
  LDR = analogRead(0);  // Lectura analógica de la fotorresistencia  
  Serial.println(LDR);  // Imprime valores almacenados en LDR

  // LDR > 120, en Pull-Down, para que se mantenga encendido el LED
  // LDR > 900, en Pull-Up, para que se mantenga encendido el LED
    
  if(LDR < UMBRAL){
    digitalWrite(6, HIGH);        
  }
  else{
    digitalWrite(6, LOW);  
  }
}
