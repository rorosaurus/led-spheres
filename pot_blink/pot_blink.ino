
int potPin = 0;    // select the input pin for the potentiometer
int ledPin = 16;   // select the pin for the LED
int val = 0;       // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT
}

void loop() {
  val = analogRead(potPin);    // read the value from the sensor
  Serial.println(val);
  digitalWrite(ledPin, HIGH);  // turn the ledPin on
  delay(val);                  // stop the program for some time
  digitalWrite(ledPin, LOW);   // turn the ledPin off
  delay(val);                  // stop the program for some time
}
