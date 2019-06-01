int R = 163;  // Rojo
int G = 255;  // Verde
int B = 1;  // Azul

void setup()
{
  pinMode(11, OUTPUT);  // Color rojo 
  pinMode(10, OUTPUT);  // Color verde
  pinMode(9, OUTPUT);  // Color azul  
}

void loop()
{
  // En el sistema RGB, los colores pueden varia de 0 - 255
  // Donde 0 es la ausencia total de dicho color
  // Donde 255 es la maxima presencia de dicho color
  
  analogWrite(11, 255 - R); // Rojo
  analogWrite(10, 255 - G);  // Verde
  analogWrite(9, 255 - B);  // Azul
}
