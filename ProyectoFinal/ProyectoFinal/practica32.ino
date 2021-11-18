Servo servo;
bool flag = 0;
int pos = 0;

void setup() {
    
    pinMode(D1, INPUT_PULLUP); // Declaramos el pin D1 como una entrada
    pinMode(D0, OUTPUT);
    servo.attach(D0); //Energizamos el servomotor
    servo.write(180);
    delay(1000);
    Particle.function("servo",motor);
    servo.detach(); //desenergizamos el motor
}

void loop() {
    
    if(digitalRead(D1) == LOW){ //Si el boton esta presionado
        if(flag == 0){
            pos = 0;
        }
        if(flag == 1){
            pos = 180;
        }
    servo.attach(D0);//volvemos a energizar el servo
    servo.write(pos); // Servo en 0 grados
    delay(1000); //delay de un segundo para que se vaya a cero grados
    servo.detach();
    flag = !flag;
    }
}

int motor(String comando){
    
    if(comando == "on"){
        if(flag == 0){
            pos = 0;
        }
        servo.attach(D0);//volvemos a energizar el servo
        servo.write(pos); // Servo en 0 grados
        delay(1000); //delay de un segundo para que se vaya a cero grados
        servo.detach();
        flag = !flag;
    }
    if (comando == "off"){
        if(flag == 1){
            pos = 180;
        }
        
        servo.attach(D0);//volvemos a energizar el servo
        servo.write(pos); // Servo en 0 grados
        delay(1000); //delay de un segundo para que se vaya a cero grados
        servo.detach();
        flag = !flag;
    }
}

