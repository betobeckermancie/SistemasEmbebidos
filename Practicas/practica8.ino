void setup() {
pinMode(D0,OUTPUT);
}

void loop() {
    for(int i = 0; i<256; i++){
    analogWrite(D0,i);
    delay(50);
}
for(int i = 255; i>=0; i--){
    analogWrite(D0,i);
    delay(50);
}
}