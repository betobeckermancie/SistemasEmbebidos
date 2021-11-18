void setup() {
pinMode(D0,OUTPUT);
pinMode(D1,OUTPUT);
pinMode(D2,OUTPUT);
pinMode(D3,OUTPUT);
}

void loop() {
analogWrite(D0,255);

analogWrite(D1,127);

analogWrite(D2,51);

analogWrite(D3,12.75);
}