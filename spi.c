// Include MAX6675 library
#include "max6675.h"

// Define SPI pins for MAX6675
int SO = 12;   // MISO - Master In Slave Out
int CS = 10;   // Chip Select (also called SS - Slave Select)
int SCK = 13;  // Clock

// Create MAX6675 object
MAX6675 thermocouple(SCK, CS, SO);

void setup() {
  // Start serial communication
  Serial.begin(9600);

  // Initial delay for sensor stability
  delay(500);
  Serial.println("Reading temperature from MAX6675:");
}

void loop() {
  // Read temperature in Celsius
  float temp = thermocouple.readCelsius();

  // Print the temperature value
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");

  delay(1000); // Wait for next reading
}
