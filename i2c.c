//for I2C sensors, we don’t define specific data pins manually (like SDA and SCL) 
//in most Arduino boards because they're hardware-defined (e.g., A4/A5 on UNO, 21/22 on ESP32).
// Sensors like MPU6050, BH1750, I2C LCD

#include <Wire.h>

// ======= CONFIGURATION ========
#define SENSOR_TYPE 3       // 3 = I2C
#define I2C 3

void setup() {
  Serial.begin(9600);
  #if SENSOR_TYPE == I2C
    Wire.begin(); // Initialize I2C communication (uses default SDA/SCL pins)
    // sensor.begin(); // Add your I2C sensor initialization here
  #endif
}

void loop() {
  #if SENSOR_TYPE == I2C
    readI2CSensor();
  #endif
  delay(500);
}

// ===== I2C SENSOR FUNCTION =====
void readI2CSensor() {
  // sensor working logic
}
