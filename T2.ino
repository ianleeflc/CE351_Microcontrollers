//Example 2, Voice commands
String voice;
int ledpin = 5;

void setup() 
{                                       
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop() { 
  while (Serial.available()){   //Check if there is an available byte to read                            
    delay(10);                   //Delay added to make thing stable
    char c = Serial.read();      //Conduct a serial read
    if (c == '#') {break;}       //Exit the loop when the # is detected after the word
    voice += c;                  //Shorthand for voice = voice + c
  } 

  if (voice.length() > 0){
    if(voice == "turn on"){//                                FOR RED COLOUR OF THE LED 
      digitalWrite(ledpin,HIGH); 
    }  
    else if(voice=="turn off"){                          
      digitalWrite(ledpin,LOW);
    }
    else if(voice=="blink"){
      digitalWrite(ledpin, HIGH);
      delay(500);
      digitalWrite(ledpin,LOW);
      delay(500);
      digitalWrite(ledpin, HIGH);
      delay(500);
      digitalWrite(ledpin,LOW);
    }
  voice="";  //Reset the variable after initiating
 }
}




////Example 1, use HC-08 to control an LED connected to MSP430
//char val; // variable to receive data from the serial port
//int ledpin = 5; // LED connected to pin 5
//
//void setup() {
//
//  pinMode(ledpin, OUTPUT);  // pin 48 (on-board LED) as OUTPUT
//  Serial.begin(9600);       // start serial communication at 9600bps
//}
//
//void loop() {
//
//  if( Serial.available() )       // if data is available to read
//  {
//    val = Serial.read();         // read it and store it in 'val'
//  }
//  if( val == 'H' )               // if 'H' was received
//  {
//    digitalWrite(ledpin, HIGH);  // turn ON the LED
//  } else { 
//    digitalWrite(ledpin, LOW);   // otherwise turn it OFF
//  }
//  delay(1000);                    // wait 100ms for next reading
//}
