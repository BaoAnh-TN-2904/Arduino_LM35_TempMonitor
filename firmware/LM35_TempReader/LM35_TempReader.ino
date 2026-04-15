const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}
// FINAL_TEST_DIFF
void loop() {
  int sensorValue = analogRead(sensorPin);
  
  // Chuyển đổi điện áp (5V / 1023)
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // LM35: 10mV = 1°C
  float temperature = voltage * 100;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  delay(1000);
}
