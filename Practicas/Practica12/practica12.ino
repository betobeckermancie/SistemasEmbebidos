double lectura = 0; 
float voltaje = 0;

void setup() {
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
lectura = analogRead(A0);
voltaje = (lectura * 3.3)/4095.0;
Serial.println(lectura);
Serial.print(voltaje);
Serial.println(" V");
delay(1000);
}