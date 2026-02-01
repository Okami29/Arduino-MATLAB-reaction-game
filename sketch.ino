const int redButton = 2;
const int greenButton = 3;

void setup() {
  pinMode(redButton, INPUT_PULLUP);
  pinMode(greenButton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(redButton) == LOW) {
    Serial.println("R");
    delay(300); // debounce
  }

  if (digitalRead(greenButton) == LOW) {
    Serial.println("G");
    delay(300); // debounce
  }
}
