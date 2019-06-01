#include <IRremote.h>  // Se utiliza esta librería para el control remoto

// Pines utilizados en el proyecto
int receptor = 11;
int led = 7;
int buzzer = 6;

IRrecv irrecv(receptor);  // Se indica a la librería cual pin recibe los códigos
decode_results codigo;  // Objeto de clase de la librería IRremote
 
void setup()
{
  Serial.begin(9600);  // Inicia comunicación serial
  irrecv.enableIRIn(); // Inicia la recepción de los códigos
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}
 
void loop(){
  if (irrecv.decode(&codigo)){  //  Si recibe algún código lo almacena en "codigo" y realiza lo sigiente 
    
    Serial.println(codigo.value, HEX);  // Imprime código leído
    
    if (codigo.value==0xC101E57B || codigo.value==0xFF6897){  // Activar led
      digitalWrite(led,HIGH);
    }
    if (codigo.value==0x97483BFB || codigo.value==0xFF9867){  // Desactivar led
      digitalWrite(led,LOW);
    }
    if (codigo.value==0xF0C41643  || codigo.value==0xFFB04F){  // Activar buzzer
      digitalWrite(6,HIGH);
    }
    if (codigo.value==0x9716BE3F  || codigo.value==0xFF30CF){  // Desactivar buzzer
      digitalWrite(6,LOW);
    }
    delay(10);
    irrecv.resume();  //  Reinicia el receptor para recibir otro código.
    
  }
  
}
