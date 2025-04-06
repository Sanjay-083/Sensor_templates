// sensors like IR Sensor, PIR Motion Sensor,push button

// ======= CONFIGURATION ========
#define SENSOR_TYPE 1       // 1 = DIGITAL
#define DIGITAL 1
#define DIGITAL_SENSOR_PIN 2  // Connect your digital sensor to this pin
void setup() {
  Serial.begin(9600);
  #if SENSOR_TYPE == DIGITAL
    pinMode(DIGITAL_SENSOR_PIN, INPUT); // Set pin as input
  #endif
}
void loop() {
  #if SENSOR_TYPE == DIGITAL
    readDigitalSensor();
  #endif
  delay(500); // Small delay for readability
}
// ===== DIGITAL SENSOR FUNCTION =====
void readDigitalSensor() {
  // sensor working logic
}