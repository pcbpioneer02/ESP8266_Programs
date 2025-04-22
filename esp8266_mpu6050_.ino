#define PIR_PIN D1

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
}

void loop() {
  int motion = digitalRead(PIR_PIN);
  if (motion == HIGH) {
    Serial.println("Motion Detected!");
  } else {
    Serial.println("No Motion");
  }
  delay(1000);
}
 