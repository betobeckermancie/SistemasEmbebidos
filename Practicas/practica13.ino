double lectura = 0;
double voltaje = 0;
double mv = 0.0;
double grados = 0.0;

void setup() {
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
lectura = analogRead(A0);
voltaje = (lectura * 3.3)/4095.0;
mv = voltaje * 1000.0;
grados= mv  /10.0;
Serial.println(lectura);
Serial.print(voltaje);
Serial.println(" volts");
Serial.print(grados);
Serial.println(" °C");
delay(1000);
}