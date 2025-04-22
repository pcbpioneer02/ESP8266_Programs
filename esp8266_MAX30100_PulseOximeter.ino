#include <SoftwareSerial.h>
#include <Adafruit_Fingerprint.h>

SoftwareSerial mySerial(D2, D3);  // RX, TX for fingerprint sensor
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);

void setup() {
  Serial.begin(115200);
  mySerial.begin(9600);
  
  if (finger.begin()) {
    Serial.println("Fingerprint sensor initialized");
  } else {
    Serial.println("Fingerprint sensor not found");
    while (1);
  }
}

void loop() {
  int ret = finger.getImage();
  if (ret == FINGERPRINT_OK) {
    Serial.println("Finger detected");
    delay(2000);
  } else {
    Serial.println("No finger detected");
  }
}
