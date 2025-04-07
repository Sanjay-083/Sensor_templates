// For I2C sensors like MPU6050, BH1750, I2C LCD
// Note: SDA and SCL pins are hardware-defined (e.g., A4/A5 on UNO, 21/22 on ESP32)

#include <Wire.h>

void setup() {
  Serial.begin(9600);
  Wire.begin(); // Initialize I2C communication
  // sensor.begin(); // Add your I2C sensor's specific initialization here
}

void loop() {
  readI2CSensor();
  delay(500); // Small delay for readability
}

// ===== I2C SENSOR FUNCTION =====
void readI2CSensor() {
  // Add your sensor reading logic here
  // Example: read data from the I2C sensor and print to Serial
}
