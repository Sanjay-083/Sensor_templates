// Sensors like Potentiometer, LDR, Analog Temperature Sensor (e.g., TMP36)

#define ANALOG_SENSOR_PIN A0  // Connect your analog sensor to this pin

void setup() {
  Serial.begin(9600);
  // No pinMode needed for analogRead
}

void loop() {
  readAnalogSensor();
  delay(500); // Small delay for readability
}

// ===== ANALOG SENSOR FUNCTION =====
void readAnalogSensor() {
  //logic
}
