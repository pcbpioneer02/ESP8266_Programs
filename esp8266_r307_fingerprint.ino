#include <ESP8266WiFi.h>

// Wi-Fi credentials
const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";

void setup() {
  // Start serial communication at 115200 baud rate
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);

  // Wait until the ESP8266 is connected to Wi-Fi
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  // Print the connected IP address
  Serial.println("Connected to WiFi!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Nothing to do in the loop for Wi-Fi connection
}
