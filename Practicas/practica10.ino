double lectura = 0; //Declaramos la variable como double y la igualamos a cero
void setup() {
pinMode(A0,INPUT); //Declaramos A0 como entrada
Serial.begin(9600); //Inicializamos el monitor serial
}

void loop() {
lectura = analogRead(A0); //Leemos la entrada analogica
Serial.println(lectura); //Monitoreamos la variable lectura
delay(1000);
}