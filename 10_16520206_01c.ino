int counter;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  for (counter = 0; counter < 3; ++counter) {
    digitalWrite(7, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(0, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  delay(5000); // Wait for 5000 millisecond(s)
}