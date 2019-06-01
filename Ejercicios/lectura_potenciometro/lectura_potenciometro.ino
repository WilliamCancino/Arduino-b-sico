int lectura_pot = 0;

void setup() {
  Serial.begin(9600); // Abre el puerto serie y fija la velocidad en baudios para la transmisión de datos en serie.
}

void loop() {
  lectura_pot = analogRead(0); // Almacena la lectura analógica analogRead() del potenciometro de 0 - 1023

  Serial.print("Valor = "); Serial.println(lectura_pot); // Imprime los datos en monitor serial con salto de linea

}
