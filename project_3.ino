// C++ code
//
const int switchPin1 = 2; 
const int switchPin2 = 3; 
const int ledPin1 = 8;     
const int ledPin2 = 9;    
const int ledPin3 = 10;    
const int ledPin4 = 11;   
const int ledPin5 = 12;   
const int ledPin6 = 13;     

void setup() {
  pinMode(switchPin1, INPUT);
  pinMode(switchPin2, INPUT);
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

void loop() {
  int switchState1 = digitalRead(switchPin1);
  int switchState2 = digitalRead(switchPin2);

  if (switchState1 == HIGH) {
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
  } else {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
  }

  if (switchState2 == HIGH) {
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
}