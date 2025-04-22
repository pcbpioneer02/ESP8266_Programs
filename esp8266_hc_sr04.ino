#include <Wire.h>
#include <BH1750.h>

BH1750 lightMeter;

void setup() {
  Serial.begin(115200);
  Wire.begin(D2, D1); // SDA to D2, SCL to D1
  lightMeter.begin();
}

void loop() {
  uint16_t lux = lightMeter.readLightLevel();
  Serial.print("Light Level: ");
  Serial.print(lux);
  Serial.println(" lux");

  delay(2000);
}
