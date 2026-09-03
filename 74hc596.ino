const int STcp = 27;
const int SHcp = 33;
const int DS = 25;

int datArray[] = {B00000000, B00000001, B00000011, B00000111, B00001111, B00011111, B00111111, B01111111, B11111111};

void setup() {
  // put your setup code here, to run once:
  pinMode(STcp, OUTPUT);
  pinMode(SHcp, OUTPUT);
  pinMode(DS, OUTPUT);
}

void loop()
{
  for(int num = 0; num < sizeof(datArray) / sizeof(datArray[0]); num++)
  {
    digitalWrite(STcp,LOW); //ground ST_CP and hold low for as long as you are transmitting
    shiftOut(DS,SHcp,MSBFIRST,datArray[num]);
    digitalWrite(STcp,HIGH); //pull the ST_CPST_CP to save the data
    delay(1000);
  }
}
