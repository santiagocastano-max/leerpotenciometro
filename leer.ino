int LeePot;

void setup() {
  Serial.begin(9600);
  pinMode(POT,INPUT);
}

void loop() {
  LeePot = analogRead(POT);
  Serial.println(LeePot);
  delay(50); 
}
