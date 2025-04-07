// Sensors like MFRC522 RFID, SD card modules

#include <SPI.h>

#define CS_PIN 10 // Chip Select pin for your SPI sensor

void setup() {
  Serial.begin(9600);
  SPI.begin();              // Initialize SPI communication
  pinMode(CS_PIN, OUTPUT);  // Setup Chip Select pin
  // sensor.begin();        // Add your SPI sensor initialization here
}

void loop() {
  readSPISensor();
  delay(500); // Small delay for readability
}

// ===== SPI SENSOR FUNCTION =====
void readSPISensor() {
  // Add your SPI sensor reading logic here
  // Example: communicate with sensor using SPI.transfer() and print result
}
