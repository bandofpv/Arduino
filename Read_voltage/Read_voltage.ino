int pin = 1;
int lbopin = 0;
int fiveVpin = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin, INPUT);
  pinMode(lbopin, INPUT);
  pinMode(fiveVpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(pin);
  int lbo = analogRead(lbopin);
  int v = analogRead(fiveVpin);
  Serial.println("Battery voltage: ");
  Serial.println(value);
  delay(500);
  Serial.println("Low Battery: ");
  Serial.println(lbo);
  delay(500);
  Serial.println("5v: ");
  Serial.println(v);
  delay(500);
}
