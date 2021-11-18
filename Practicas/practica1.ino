void setup() {
pinMode(D0,OUTPUT); //Declaramos el pin D0 como salida digital 
}

void loop() {
digitalWrite(D0,HIGH); //Escribimos en el pin D0 3.3V- Encendemos el led
delay(1000); //Delay por un segundo 
digitalWrite(D0,LOW); //Apagamos el led 
delay(1000);
}