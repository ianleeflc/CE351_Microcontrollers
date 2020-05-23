


//// Example 2, analog input
//int sensorPin = A0;    // select the input pin for the potentiometer
//int sensorValue = 0;  // variable to store the value coming from the sensor
//
//void setup() {
//  // declare the 14 pin as an OUTPUT:
//  pinMode(14, OUTPUT);  
//  Serial.begin(9600);
//}
//
//void loop() {
//  // read the value from the sensor:
//  sensorValue = analogRead(sensorPin);    
//  // turn the ledPin on
//  digitalWrite(14, HIGH);  
//  // stop the program for <sensorValue> milliseconds:
//  delay(sensorValue);          
//  // turn the ledPin off:        
//  digitalWrite(14, LOW);   
//  // stop the program for for <sensorValue> milliseconds:
//  delay(sensorValue);   
//  Serial.println(sensorValue);               
//}

////Example 1, serial test
//void setup() {
//  Serial.begin(9600);
//}
//void loop() {
//  Serial.println("test");
//  delay(1000);  
//}
