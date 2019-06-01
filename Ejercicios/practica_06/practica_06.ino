int R = 0;  // Rojo
int G = 0;  // Verde
int B = 0;  // Azul

void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  R = analogRead(0) / 4;  // Almacena lectura del potenciometro para controla el color rojo
  G = analogRead(1) / 4;  // Almacena lectura del potenciometro para controla el color verde
  B = analogRead(2) / 4;  // Almacena lectura del potenciometro para controla el color azul

  Serial.print("R: "); Serial.print(R);
  Serial.print(", G: "); Serial.print(G);
  Serial.print(", B: "); Serial.println(B);
  delay(50); 

  analogWrite(11, 255 - R);
  analogWrite(10, 255 - G);
  analogWrite(9, 255 - B);
}
