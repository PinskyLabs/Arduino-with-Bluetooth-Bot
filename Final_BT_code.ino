// MARKED MOTOR DRIVER
int speedPinA = 10;
int dirA1 = 8;
int dirA2 = 9;

int speedPinB = 5;
int dirB1 = 6;
int dirB2 = 7;

// UNMARKED MOTOR DRIVER
int speedPinC = 3;
int dirC1 = 4;
int dirC2 = 2;

int speedPinD = 11;
int dirD1 = 13;
int dirD2 = 12;

// OTHERS
char Incoming_value = 0;


// Setting up the drivers with Arduino
void setup() {
  // MARKED MOTOR DRIVER
  pinMode(speedPinA, OUTPUT);
  pinMode(dirA1, OUTPUT);
  pinMode(dirA2, OUTPUT);

  pinMode(speedPinB, OUTPUT);
  pinMode(dirB1, OUTPUT);
  pinMode(dirB2, OUTPUT);

  // UNMARKED MOTOR DRIVER
  pinMode(speedPinC, OUTPUT);
  pinMode(dirC1, OUTPUT);
  pinMode(dirC2, OUTPUT);

  pinMode(speedPinD, OUTPUT);
  pinMode(dirD1, OUTPUT);
  pinMode(dirD2, OUTPUT);

  // OTHERS
  Serial.begin(9600);
}

// Looping these commands to run
void loop() {
  // BLUETOOTH
  if (Serial.available() > 0) {
    Incoming_value = Serial.read();
    Serial.println(Incoming_value);

    if (Incoming_value == '1') {

      // FOR UP BUTTON
      analogWrite(speedPinA, 1023);
      analogWrite(speedPinB, 1023);
      analogWrite(speedPinC, 1023);
      analogWrite(speedPinD, 1023);


      digitalWrite(dirA1, HIGH);
      digitalWrite(dirB1, HIGH);
      digitalWrite(dirC1, HIGH);
      digitalWrite(dirD1, HIGH);

      digitalWrite(dirA2, LOW);
      digitalWrite(dirB2, LOW);
      digitalWrite(dirC2, LOW);
      digitalWrite(dirD2, LOW);

    } else if (Incoming_value == '2') {

      // FOR DOWN BUTTON
      analogWrite(speedPinA, 1023);
      analogWrite(speedPinB, 1023);
      analogWrite(speedPinC, 1023);
      analogWrite(speedPinD, 1023);

      digitalWrite(dirA2, HIGH);
      digitalWrite(dirB2, HIGH);
      digitalWrite(dirC2, HIGH);
      digitalWrite(dirD2, HIGH);

      digitalWrite(dirA1, LOW);
      digitalWrite(dirB1, LOW);
      digitalWrite(dirC1, LOW);
      digitalWrite(dirD1, LOW);

    } else if (Incoming_value == '3') {

      // FOR RIGHT BUTTON
       analogWrite(speedPinA, 1023);
      analogWrite(speedPinB, 1023);
      analogWrite(speedPinC, 1023);
      analogWrite(speedPinD, 1023);

      digitalWrite(dirA2, HIGH);
      digitalWrite(dirB2, LOW);
      digitalWrite(dirC2, HIGH);
      digitalWrite(dirD2, LOW);

      digitalWrite(dirA1, LOW);
      digitalWrite(dirB1, HIGH);
      digitalWrite(dirC1, LOW);
      digitalWrite(dirD1, HIGH);


    } else if (Incoming_value == '4') {

      // FOR NO BUTTON
       analogWrite(speedPinA, 1023);
      analogWrite(speedPinB, 1023);
      analogWrite(speedPinC, 1023);
      analogWrite(speedPinD, 1023);

      digitalWrite(dirA2, LOW);
      digitalWrite(dirB2, HIGH);
      digitalWrite(dirC2, LOW);
      digitalWrite(dirD2, HIGH);

      digitalWrite(dirA1, HIGH);
      digitalWrite(dirB1, LOW);
      digitalWrite(dirC1, HIGH);
      digitalWrite(dirD1, LOW);

    } else if (Incoming_value == '0') {

      // FOR LEFT BUTTON
      digitalWrite(dirA2, LOW);
      digitalWrite(dirB2, LOW);
      digitalWrite(dirC2, LOW);
      digitalWrite(dirD2, LOW);

      digitalWrite(dirA1, LOW);
      digitalWrite(dirB1, LOW);
      digitalWrite(dirC1, LOW);
      digitalWrite(dirD1, LOW);

    }
  }
} 