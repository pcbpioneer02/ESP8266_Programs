#define MQ2_PIN A0

void setup() {
  Serial.begin(115200);
}

void loop() {
  int mq2_value = analogRead(MQ2_PIN);
  Serial.print("Gas Level: ");
  Serial.println(mq2_value);

  delay(2000);
}
