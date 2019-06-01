// Declaración e inicialización de las variables
int lectura_pot = 0;
int brillo = 0;

void setup()
{
  pinMode(6, OUTPUT);  // Se configura el pin 6 como salida
                      // Los pines analógicos estan configurados como entrada por defecto
  Serial.begin(9600) // Abre el puerto serie y fija la velocidad en baudios para la transmisión de datos en serie.
}

void loop()
{
  lectura_pot = analogRead(5);  // Almacena la lectura analógica analogRead() del potenciometro de 0 - 1023
  brillo = lectura_pot/4; // Se divide sobre 4 para utilizarla en analogWrite()

  Serial.println(brillo);  // Imprime los datos en monitor serial con salto de linea 
  
  analogWrite(6, brillo); // analogWrite() solo reconoce números de 0 - 255

}
