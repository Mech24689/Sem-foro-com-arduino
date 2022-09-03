// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(12, HIGH);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(11, HIGH);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(10, HIGH);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(10, LOW);
}