const int relayPin = 3;       // Pin connected to the relay module
const int sensorPin = 6;      // Pin connected to the soil moisture sensor

void setup() {
  pinMode(relayPin, OUTPUT);  // Set relay pin as output
  pinMode(sensorPin, INPUT);  // Set sensor pin as input
}

void loop() {
  // Read the soil sensor state
  bool soilDry = digitalRead(sensorPin) == LOW;

  // Control the relay based on soil sensor state
  digitalWrite(relayPin, soilDry ? HIGH : LOW);

  delay(400); // Small delay for stability
}
