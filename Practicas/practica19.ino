// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT_Particle.h>


float gradosC = 0;
float gradosF = 0;
float humedad = 0;

#define DHTPIN D6
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);



void setup() {
pinMode(D6,INPUT);
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
}