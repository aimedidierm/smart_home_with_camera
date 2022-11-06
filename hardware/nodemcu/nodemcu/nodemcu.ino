const int device1 = D1,device2 = D2,device3 = D3,device4 = D4,device5 = D5,device6 = D6;
void setup() {
  // put your setup code here, to run once:
  pinMode(device1, OUTPUT);
  pinMode(device2, OUTPUT);
  pinMode(device3, OUTPUT);
  pinMode(device4, OUTPUT);
  pinMode(device5, OUTPUT);
  pinMode(device6, OUTPUT);
  digitalWrite(device1, HIGH);
  digitalWrite(device2, HIGH);
  digitalWrite(device3, HIGH);
  digitalWrite(device4, HIGH);
  digitalWrite(device5, HIGH);
  digitalWrite(device6, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(device1, LOW);
  delay(1000);
  digitalWrite(device2, LOW);
  delay(1000);
  digitalWrite(device3, LOW);
  delay(1000);
  digitalWrite(device4, LOW);
  delay(1000);
  digitalWrite(device5, LOW);
  delay(1000);
  digitalWrite(device6, LOW);
  delay(1000);
  digitalWrite(device1, HIGH);
  digitalWrite(device2, HIGH);
  digitalWrite(device3, HIGH);
  digitalWrite(device4, HIGH);
  digitalWrite(device5, HIGH);
  digitalWrite(device6, HIGH);
  delay(2000);
}
