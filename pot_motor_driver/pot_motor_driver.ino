int potPin = 0;    // A0 input for pot
int potVal = 0;       // variable to store the value coming from the sensor

int motorDuty = 0; // 0-100 represents what % of the time the motor signal should be HIGH
int motorPin = 5; // D1 for output to motor

void setup() {
  Serial.begin(9600); 
  
  pinMode(motorPin, OUTPUT);  // declare the motorPin as an OUTPUT
  digitalWrite(motorPin, HIGH);
}

void loop() {
  potVal = analogRead(potPin);    // read the value from the sensor
  motorDuty = map(potVal, 0, 1023, 0, 100); // translate the pot value into a useful % duty cycle
  Serial.println(motorDuty);

  if ((millis() % 100) > motorDuty) digitalWrite(motorPin, LOW);
  else digitalWrite(motorPin, HIGH);
  
}
