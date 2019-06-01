int LDR = 0;
int UMBRAL = 1000;
int i = 0;

void setup() {
  Serial.begin(9600);
  
  // El for() fuerza a que "i" tome inicialmente el valor de 2 (i = 2)
  // Posteriormente va configurando cada uno de los pines (2, 3, 4) como salidas
  for(i = 2; i<5; i++){
    pinMode(i, OUTPUT);  
  }
}

void loop() {
  LDR = analogRead(0);  // Lectura analógica de la fotorresistencia  
  Serial.println(LDR);  // Imprime valores almacenados en LDR

  // LDR > 120, en Pull-Down, para que se mantenga encendido el LED
  // LDR > 900, en Pull-Up, para que se mantenga encendido el LED
    
  if(LDR > UMBRAL){
    for(i = 2; i<5; i++){
      digitalWrite(i, HIGH);
      delay(50);
      digitalWrite(i, LOW);
      delay(5);
    }        
  }
  else{  // Esta parte es innecesaria porque en el anterior paso lo último que hace es apagar los LED
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);    
  }
}
