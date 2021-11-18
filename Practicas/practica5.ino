int t = 500;

void setup() {
 pinMode(D0, OUTPUT);
    pinMode(D1, OUTPUT);
    pinMode(D2, OUTPUT);
    pinMode(D3, OUTPUT);
}

void loop() {
    for (int i=0; i<4; i++){
        digitalWrite(i, HIGH);
        delay(t);
        
    }
    
    for (int i=3; i>=0; i--){
        digitalWrite(i, LOW);
        delay(t);
    }
    
}