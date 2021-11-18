void setup() {
pinMode(D0,OUTPUT);
pinMode(D1,OUTPUT);
pinMode(D2,OUTPUT);
pinMode(D3,OUTPUT);
}

void loop() {
for(int i=0; i<4; i++)
{
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    delay(500);
     }
for(int i=2; i>0; i--)
{
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    delay(500);
    }
}
