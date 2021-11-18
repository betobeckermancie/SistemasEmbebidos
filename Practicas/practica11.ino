double lectura = 0; 

void setup() {
pinMode(A0,INPUT); 
Serial.begin(9600); 
}

void loop() {
lectura = analogRead(A0);
Serial.println(lectura); 
delay(1000);
}