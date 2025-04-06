// Sensors like Potentiometer, LDR, Analog Temperature Sensor (e.g., TMP36)

// ======= CONFIGURATION ========
#define SENSOR_TYPE 2       // 2 = ANALOG
#define ANALOG 2
#define ANALOG_SENSOR_PIN A0  // Connect your analog sensor to this pin

void setup() {
  Serial.begin(9600);
  // No pinMode needed for analogRead
}

void loop() {
  #if SENSOR_TYPE == ANALOG
    readAnalogSensor();
  #endif
  delay(500);
}

// ===== ANALOG SENSOR FUNCTION =====
void readAnalogSensor() {
  // sensor working logic
}
