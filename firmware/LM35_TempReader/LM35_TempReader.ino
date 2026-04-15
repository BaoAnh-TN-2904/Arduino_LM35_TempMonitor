void setup() {
  Serial.begin(9600);
}
// FINAL_TEST_DIFF
void loop() {
  // đọc 2 cảm biến A0 và A1
  int valueA0 = analogRead(A0);  // đọc cảm biến 1
  int valueA1 = analogRead(A1);  // đọc cảm biến 2
// test git diff
  Serial.print(valueA0);
  Serial.print(",");
  Serial.println(valueA1);

  delay(1000);
}
