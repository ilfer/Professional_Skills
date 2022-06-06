//Pin connected to ST_CP of 74HC595
int latchPin = 4;
//Pin connected to SH_CP of 74HC595
int clockPin = 3;
//Pin connected to DS of 74HC595
int dataPin = 10;
 
void setup() {
  //set pins to output because they are addressed in the main loop
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}
 
void loop() {
  byte rowBitsToSend = 0;
  byte columnBitsToSend = 0;
  digitalWrite(latchPin, LOW);
  bitWrite(columnBitsToSend, 0, HIGH); // Gives us 000000001
  shiftOut(dataPin, clockPin, MSBFIRST, columnBitsToSend); // Send the byte to the shift register which passes it to the second shift register
  bitWrite(rowBitsToSend, 3, HIGH); // Gives us 00000001
  bitWrite(rowBitsToSend, 0, HIGH); // Adds on to the previous modified bits to give us 00001001
  shiftOut(dataPin, clockPin, MSBFIRST, rowBitsToSend); // Send the byte to the shift register
  digitalWrite(latchPin, HIGH); // Tell the shift register we are done sending data so it can enable the outputs
  delay(2); // Not really necessary in this example but it will be for lighting up multiple columns
}

// https://www.insidegadgets.com/2010/11/07/fun-with-8x8-led-matrix/
