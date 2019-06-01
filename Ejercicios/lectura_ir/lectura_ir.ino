/*

  ----- LECTURA DEL CÓDIGO DE UNA TECLA -----

*/


#include <IRremote.h>  // Se utiliza esta librería para el control remoto

// Pines utilizados en el proyecto
int receptor = 11;

IRrecv irrecv(receptor);  // Se indica a la librería cual pin recibe los códigos
decode_results codigo;  // Objeto de clase de la librería IRremote

void setup() {
  Serial.begin(9600);  // Inicia comunicación serial
  irrecv.enableIRIn();  // Inicia la recepción de datos
}

void loop() {
  if(irrecv.decode(&codigo)){  //  Si recibe algún código, lo almacena en "codigo" y realiza lo sigiente
    
    Serial.print("0x"); Serial.println(codigo.value, HEX);  // Imprime el código leído en hexadecimal
    
    delay(500);
    irrecv.resume();  //  Reinicia el receptor para recibir otro código
    
  }
  
}
