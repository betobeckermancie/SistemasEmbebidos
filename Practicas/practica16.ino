int lectura = 0;
double volt = 0.0;
double mini = 0;
double grad = 0.0;

void setup() {
pinMode(A0,OUTPUT);
pinMode(D2,OUTPUT);
}

void loop() {
lectura = analogRead(A0);
   volt = (lectura*3.3)/4095.0;
   mini = volt*1000.0;
   grad = mini/10;
   Serial.println("La temperatura es: ");
   Serial.print(grad);
   Serial.println("°C");
   delay(1000);
   
if(grad > 30){
  digitalWrite(D2,HIGH);
  delay(10000);
  digitalWrite(D2,LOW);
  delay(3000);
   }
}