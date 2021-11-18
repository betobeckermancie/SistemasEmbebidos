double lectura = 0;
double voltaje = 0;
double mvolts = 0;
double gradosC = 0;

void setup() {
 pinMode(A0,INPUT);
 Particle.variable("lectura", &lectura, DOUBLE);
 Particle.variable("voltaje", &voltaje, DOUBLE);
 Particle.variable("mvolts", &mvolts, DOUBLE);
 Particle.variable("gradosC", &gradosC, DOUBLE);
}

void loop() {
 lectura = analogRead(A0);
 voltaje = (lectura * 3.3)/4095.0;
 mvolts = voltaje * 1000.0;
 gradosC = (mvolts * 1.0)/10.0;
}