// sensors like BME280, MPU6050
// Include required libraries for I2C and BME280
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

// Create a BME280 object
Adafruit_BME280 bme;

void setup() {
  // Start serial communication
  Serial.begin(9600);
  Wire.begin(); // Initialize I2C communication

  // Initialize the BME280 sensor at address 0x76
  if (!bme.begin(0x76)) {
    Serial.println("BME280 not detected. Please check wiring.");
    while (1); // Halt if not found
  }
}

void loop() {
  // Read temperature in Celsius
  float temp = bme.readTemperature();

  // Read humidity in %
  float humidity = bme.readHumidity();

  // Read pressure in hPa
  float pressure = bme.readPressure() / 100.0F;

  // Print values to Serial Monitor
  Serial.print("Temp: "); Serial.print(temp); Serial.print(" °C, ");
  Serial.print("Humidity: "); Serial.print(humidity); Serial.print(" %, ");
  Serial.print("Pressure: "); Serial.print(pressure); Serial.println(" hPa");

  delay(1000); // Wait 1 second before next reading
}
