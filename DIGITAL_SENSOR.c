// sensors like IR Sensor, PIR Motion Sensor,push button

// ======= CONFIGURATION ========
// Example for digital sensors like IR Sensor, PIR Motion Sensor, Push Button

#define DIGITAL_SENSOR_PIN 2  // Connect your digital sensor to this pin

void setup() {
  Serial.begin(9600);
  pinMode(DIGITAL_SENSOR_PIN, INPUT); // Set pin as input
}

void loop() {
  readDigitalSensor();
  delay(500); // Small delay for readability
}

// ===== DIGITAL SENSOR FUNCTION =====
void readDigitalSensor() {
  // sensor logic
}
