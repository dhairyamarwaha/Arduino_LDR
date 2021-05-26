const int LED = 8;   //the number of the LED pin
const int LDR = A0;  //the number of the LDR pin
const int buzzer = 10; // the number of buzzer pin


void setup() {

  Serial.begin(9600);
  pinMode(LED, OUTPUT);  //initialize the LED pin as an output
  pinMode(LDR, INPUT);   //initialize the LDR pin as an input
  pinMode(buzzer, OUTPUT); // initialize the buzzer pin as output
}

void loop() {

  int ldrStatus = analogRead(LDR);   //read the status of the LDR value

  //check if the LDR status is <= 300
  //if it is, the LED is HIGH

   if (ldrStatus <=300) {

    digitalWrite(LED, HIGH);               //turn LED on
    tone(buzzer, 1000); // triggers buzzer to 1000 Hz frequency
    Serial.println("It's too dark, LED is turned ON"); // print msg on serial monitor
    
   }
  else {

    digitalWrite(LED, LOW);          //turn LED off
    noTone(buzzer); // turns buzzer off
    Serial.println("Light is sufficient"); // prints msg on serial monitor
  }
}
