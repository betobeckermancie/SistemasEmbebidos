int t = 500;

void setup() {
pinMode(D0, OUTPUT);
pinMode(D1, OUTPUT);
pinMode(D2, OUTPUT);
pinMode(D3, OUTPUT);
}

void loop() {
 for (int i=0; i<=3; i++){
        digitalWrite(i, HIGH);
        delay(t);
        
    }
    
    for (int i=3; i>=0; i--){
        digitalWrite(i, LOW);
        delay(t);
    }
    
    
for(int i = 0; i<256; i++){
    analogWrite(D0,i);
    delay(5);
     analogWrite(D1,i);
    delay(5);
     analogWrite(D2,i);
    delay(5);
     analogWrite(D3,i);
    delay(5);
}
for(int i = 255; i>=0; i--){
    analogWrite(D0,i);
    delay(5);
    analogWrite(D1,i);
    delay(5);
    analogWrite(D2,i);
    delay(5);
    analogWrite(D3,i);
    delay(5);
}
digitalWrite(D0,HIGH);
delay(500);
digitalWrite(D0,LOW);
delay(500);

digitalWrite(D1,HIGH);
delay(500);
digitalWrite(D1,LOW);
delay(500);

digitalWrite(D2,HIGH);
delay(500);
digitalWrite(D2,LOW);
delay(500);

digitalWrite(D3,HIGH);
delay(500);
digitalWrite(D3,LOW);
delay(500);

digitalWrite(D2,HIGH);
delay(500);
digitalWrite(D2,LOW);
delay(500);

digitalWrite(D1,HIGH);
delay(500);
digitalWrite(D1,LOW);
delay(500);


digitalWrite(D0,HIGH);
delay(500);
digitalWrite(D0,LOW);
delay(500);
}