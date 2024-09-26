#define sensor 2
#define LED 5
#define BUZZER 7 // Use any available digital pin for the buzzer

void setup()
{
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT); // Set buzzer pin as OUTPUT
  digitalWrite(sensor, LOW);
  digitalWrite(LED, LOW);
  digitalWrite(BUZZER, LOW);
}

void loop()
{
  if (digitalRead(sensor)) {
    Serial.println("Movement detected!");
    digitalWrite(LED, HIGH);
    digitalWrite(BUZZER, HIGH);
    delay(500);
    digitalWrite(BUZZER, LOW);// Turn on the buzzer
  }
  else {
    Serial.println("No movement!");
    digitalWrite(LED, LOW);
    digitalWrite(BUZZER, LOW); // Turn off the buzzer
  }
delay(100);
}