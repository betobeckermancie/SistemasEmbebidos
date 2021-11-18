// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

float gradosC = 0;
float gradosF = 0;
float humedad = 0;

#define DHTPIN D6
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);



void setup() {
pinMode(D6,INPUT);
pinMode(D2,OUTPUT);
dht.begin();
Serial.begin(9600);
}

void loop() {
gradosC = dht.getTempCelcius();
gradosF = dht.getTempFarenheit();
humedad = dht.getHumidity();

if(isnan(gradosC) || isnan(gradosF) || isnan(humedad)){
    Serial.println("Error de lectura");
    return;
}
Serial.print(gradosC);
Serial.println("°");

Serial.print(gradosF);
Serial.println("F");

Serial.print("El porcentaje de humedad es:");
Serial.println(humedad);
delay(1000);

if(grad > 20){
  digitalWrite(D2,HIGH);
  delay(1000);
  else
  digitalWrite(D2,LOW);
  delay(1000);
}
}