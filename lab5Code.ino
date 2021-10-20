int wiperPin = A0;
int resVal= 0, redPin=11, greenPin=10, bluePin=9;


void setup() {
  pinMode(wiperPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  //use this to debug because i can check if the light changes at the set values
  Serial.begin(9600);
}

void loop() {
  //use this to display to the serial monitor
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  resVal= analogRead(wiperPin);

 if(resVal < 256) 
 {
  digitalWrite(redPin, 255);
  digitalWrite(greenPin,0);
  digitalWrite(bluePin,0);
 }
 else if(resVal > 256 && resVal < 512) 
 {
  digitalWrite(redPin, 0);
  digitalWrite(greenPin,255);
  digitalWrite(bluePin,0);
 }
 else 
 {
  digitalWrite(redPin, 0);
  digitalWrite(greenPin,0);
  digitalWrite(bluePin,255);
 }
}
