Servo myservo;
int pos = 0;

void setup() {
    Particle.function("gong",gong);
    
    myservo.attach(D0);
    myservo.write(25);
    pinMode(D5,OUTPUT);
    
   Time.zone(-6);
   Particle.syncTime();
   myservo.attach(D0); 
   myservo.write(25); 
   delay(1000);

}

int gong(String command){
    if (command == "now"){
        myservo.write(0);
        digitalWrite(D5, HIGH);
        delay(100);
        myservo.write(40);
        digitalWrite(D5, LOW);
        return 1; 
    }
    else if(command == "alarm"){
        for (int i = 0; i < 5; i++){
            myservo.write(0);
            digitalWrite(D5,HIGH);
            delay(100);
            myservo.write(40);
            digitalWrite(D5,LOW);
            delay(1000);
        }
        return 2;
    }
}

void loop() {
    
        if(Time.year() == 2021 && Time.month() == 1 && Time.day() == 10){
    if(Time.hour() == 19 && Time.minute() == 15 ){ 
            myservo.write(0);
            digitalWrite(D5,HIGH);
            delay(100);
            myservo.write(40);
            digitalWrite(D5,LOW);
            delay(1000);
    }
    }

}