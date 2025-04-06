// Sensors like MFRC522 RFID, SD card modules

#include <SPI.h>

// ======= CONFIGURATION ========
#define SENSOR_TYPE 4       // 4 = SPI
#define SPI_TYPE 4
#define CS_PIN 10           // Chip Select pin for your SPI sensor

void setup() {
  Serial.begin(9600);
  #if SENSOR_TYPE == SPI
    SPI.begin(); // Initialize SPI
    pinMode(CS_PIN, OUTPUT); // Setup Chip Select pin
    // sensor.begin(); // Add your SPI sensor init here
  #endif
}

void loop() {
  #if SENSOR_TYPE == SPI
    readSPISensor();
  #endif
  delay(500);
}

// ===== SPI SENSOR FUNCTION =====
void readSPISensor() {
  // sensor working logic
}
