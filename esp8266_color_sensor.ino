#include <Wire.h>
#include <MAX30100_PulseOximeter.h>

MAX30100_PulseOximeter pox;

void setup() {
  Serial.begin(115200);
  Wire.begin();
  
  if (!pox.begin()) {
    Serial.println("MAX30100 sensor not detected!");
    while (1);
  }
}

void loop() {
  pox.update();
  
  Serial.print("Heart Rate: ");
  Serial.print(pox.getHeartRate());
  Serial.print(" BPM | SpO2: ");
  Serial.println(pox.getSpO2());
  
  delay(1000);
}
