
void setup() {
    pinMode(D0,OUTPUT); 
    pinMode(D1, INPUT_PULLUP); 
}

void loop() {
    if(digitalRead(D1)==LOW){
    digitalWrite(D0,LOW);
    }
    else if (digitalRead(D1)==HIGH){
    digitalWrite(D0,HIGH);        
    }

}