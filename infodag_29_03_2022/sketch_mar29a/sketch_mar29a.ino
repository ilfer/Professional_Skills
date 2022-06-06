
#define shiftClockPin 3  //SH
#define latchClockPin 4  //ST
#define serialInputPin 10  //DS


void setup() {
//Instelen van de uitgangspinnen
  pinMode(shiftClockPin, OUTPUT);
  pinMode(latchClockPin, OUTPUT);
  pinMode(serialInputPin, OUTPUT);
}

//k = 1
//r = 0
void loop() {

  
//  digitalWrite(latchClockPin, LOW);  
//  shiftOut(serialInputPin, shiftClockPin,LSBFIRST, 0b11101001);
//  shiftOut(serialInputPin, shiftClockPin,LSBFIRST, 0b00101001);
//  digitalWrite(latchClockPin, HIGH);
//  delay(1000);
//  digitalWrite(latchClockPin, LOW);
//  shiftOut(serialInputPin, shiftClockPin,LSBFIRST, 0b00000000);
//  shiftOut(serialInputPin, shiftClockPin,LSBFIRST, 0b00000000);
//  digitalWrite(latchClockPin, HIGH);
//  delay(1000);

  digitalWrite(latchClockPin, LOW);  
  shiftOut(serialInputPin, shiftClockPin,LSBFIRST, 0b11110010);
  shiftOut(serialInputPin, shiftClockPin,LSBFIRST, 0b11011010);
  digitalWrite(latchClockPin, HIGH);
  digitalWrite(latchClockPin, LOW);  
  shiftOut(serialInputPin, shiftClockPin,LSBFIRST, 0b01100010);
  shiftOut(serialInputPin, shiftClockPin,LSBFIRST, 0b11010000);
  digitalWrite(latchClockPin, HIGH);
}
