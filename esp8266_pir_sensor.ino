#include <ESP8266WiFi.h>
#include <TCS3200.h>

// Color sensor setup
TCS3200 colorSensor(D5, D6, D7, D8); // S0, S1, S2, S3

void setup() {
  Serial.begin(115200);
  colorSensor.begin();
}

void loop() {
  colorSensor.getRGB();
  Serial.print("Red: ");
  Serial.print(colorSensor.red());
  Serial.print(" | Green: ");
  Serial.print(colorSensor.green());
  Serial.print(" | Blue: ");
  Serial.print(colorSensor.blue());
  Serial.println();

  delay(2000);
}
