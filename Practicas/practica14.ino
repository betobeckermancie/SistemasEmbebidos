int lectura = 0;
double volt = 0.0;
double mini = 0;
double grad = 0.0;

void setup() {
    pinMode(A0,INPUT);
    pinMode(D0,OUTPUT);
    pinMode(D1,OUTPUT);
    pinMode(D2,OUTPUT);
    Serial.begin(9600);
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
   
   if(grad <= 20){
       digitalWrite(D1,LOW);
       digitalWrite(D2,LOW);
       digitalWrite(D0,HIGH);
       delay(500);
       digitalWrite(D0,LOW);
       delay(500);
   }
   
   else if(grad > 20 && grad <= 30){
       digitalWrite(D0,LOW);
       digitalWrite(D2,LOW);
       digitalWrite(D1,HIGH);
       delay(500);
       digitalWrite(D1,LOW);
       delay(500);
   }
   
   else  {
       digitalWrite(D0,LOW);
       digitalWrite(D1,LOW);
       digitalWrite(D2,HIGH);
       delay(500);
       digitalWrite(D2,LOW);
       delay(500);
}
}