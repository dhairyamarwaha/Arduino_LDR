//set pin numbers
//const won't change
const int LED = 8;   //the number of the LED pin
const int LDR = A0;  //the number of the LDR pin
const int buzzer = 10;


void setup() {

  Serial.begin(9600);
  pinMode(LED, OUTPUT);  //initialize the LED pin as an output
  pinMode(LDR, INPUT);   //initialize the LDR pin as an input
  pinMode(buzzer, OUTPUT);
}

void loop() {

  int ldrStatus = analogRead(LDR);   //read the status of the LDR value

  //check if the LDR status is <= 300
  //if it is, the LED is HIGH

   if (ldrStatus <=300) {

    digitalWrite(LED, HIGH);               //turn LED on
    tone(buzzer, 1000);
    Serial.println("It's too dark, LED is turned ON");
    
   }
  else {

    digitalWrite(LED, LOW);          //turn LED off
    noTone(buzzer);
    Serial.println("Light is sufficient");
  }
}
