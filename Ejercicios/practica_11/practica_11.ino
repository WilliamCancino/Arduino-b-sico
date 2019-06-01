int pinBuzzer = 6;
int valor = 0;
float miliVolts = 0;
float temperatura = 0;


void setup(){
  pinMode(pinBuzzer, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  valor = analogRead(0);
  temperatura = Temperatura(valor);
  Serial.println(temperatura); 
  if(temperatura > 33){
    alarma();  
  }
}


void alarma(){
  for(int i = 0; i<4; i++){
    digitalWrite(pinBuzzer, HIGH);
    delay(100);
    digitalWrite(pinBuzzer, LOW);
    delay(100);
  }   
}

float Temperatura(int valor_1){
  miliVolts = valor_1 * (5000/1023);
  float temperatura_1 = miliVolts / 10;
  return temperatura_1;
}
