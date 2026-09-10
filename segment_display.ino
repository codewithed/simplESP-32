// Store the GPIO pins used in their respective variables
const int STcp = 27;
const int SHcp = 25;
const int DS = 33;

int datArray[] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};

void setup() {
  // set GPIO pins to output mode
  pinMode(STcp, OUTPUT);
  pinMode(SHcp, OUTPUT);
  pinMode(DS, OUTPUT);

}

void loop() {
  // 
  for(int num = 0; num < 10; num++) {
    digitalWrite(STcp, LOW); //ground ST_CP and hold low for as long as you are transmitting
    shiftOut(DS, SHcp, MSBFIRST, datArray[num]);
    digitalWrite(STcp, HIGH); //pull the ST_CPST_CP to save the data
    delay(1000);
  }

}
