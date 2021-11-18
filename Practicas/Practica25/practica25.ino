Servo servo;

void setup() {
   pinMode(D0,OUTPUT);
   servo.attach(D0);
}

void loop() {
    servo.write(0);
    delay(1000);
    servo.write(90);
    delay(1000);
    servo.write(180);
    delay(1000);

}