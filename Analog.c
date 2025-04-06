// sensors like LDR, LM35 Temperature Sensor, Soil Moisture Sensor
// Define the analog pin where the sensor is connected
#define ANALOG_SENSOR_PIN A0

void setup() {
  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value (0 to 1023)
  int sensorValue = analogRead(ANALOG_SENSOR_PIN);

  // Print the analog value
  Serial.print("Analog Sensor Value: ");
  Serial.println(sensorValue);

  delay(500); // Delay to make output readable
}
