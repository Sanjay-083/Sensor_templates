// sensors like IR Sensor, PIR Motion Sensor,push button

// Define the pin where the digital sensor is connected
#define DIGITAL_SENSOR_PIN 2

void setup() {
  // Set the pin as INPUT since we are reading data
  pinMode(DIGITAL_SENSOR_PIN, INPUT);
  
  // Initialize serial communication to print data to Serial Monitor
  Serial.begin(9600);
}

void loop() {
  // Read the digital value (either HIGH or LOW)
  int sensorState = digitalRead(DIGITAL_SENSOR_PIN);

  // Print the sensor state to Serial Monitor
  Serial.print("Digital Sensor State: ");
  Serial.println(sensorState); // 1 = HIGH, 0 = LOW

  delay(500); // Small delay for readability
}
