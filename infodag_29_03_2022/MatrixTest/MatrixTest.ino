
#define shiftClockPin 4  //SH
#define latchClockPin 3  //ST
#define serialInputPin 10  //DS


void setup() {
//Instelen van de uitgangspinnen
  pinMode(shiftClockPin, OUTPUT);
  pinMode(latchClockPin, OUTPUT);
  pinMode(serialInputPin, OUTPUT);
}

void loop() {
  digitalWrite(latchClockPin, LOW);  
  shiftOut(serialInputPin, shiftClockPin,LSBFIRST, 0b11101001);
  shiftOut(serialInputPin, shiftClockPin,LSBFIRST, 0b00101001);
  digitalWrite(latchClockPin, HIGH);
  delay(1000);
  digitalWrite(latchClockPin, LOW);
  shiftOut(serialInputPin, shiftClockPin,LSBFIRST, 0b00000000);
  shiftOut(serialInputPin, shiftClockPin,LSBFIRST, 0b00000000);
  digitalWrite(latchClockPin, HIGH);
  delay(1000);

}
