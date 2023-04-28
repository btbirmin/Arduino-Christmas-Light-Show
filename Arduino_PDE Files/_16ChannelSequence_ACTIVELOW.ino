#define RELAY_OFF 1
#define RELAY_ON 0

// Output
int Chan1 = 13; 
int Chan2 = 12; 
int Chan3 = 11; 
int Chan4 = 10; 
int Chan5 = 9; 
int Chan6 = 8;
int Chan7 = 7;
int Chan8 = 6;
int Chan9  = 31;
int Chan10 = 33;
int Chan11 = 35;
int Chan12 = 37;
int Chan13 = 39;
int Chan14 = 41;
int Chan15 = 43;
int Chan16 = 45;

int i = 0; // Loop counter
int incomingByte[16]; // array to store the 7 values from the serial port

//setup the pins/ inputs & outputs
void setup()
{

digitalWrite(Chan1, RELAY_OFF);
digitalWrite(Chan2, RELAY_OFF);
digitalWrite(Chan3, RELAY_OFF);
digitalWrite(Chan4, RELAY_OFF);
digitalWrite(Chan5, RELAY_OFF);
digitalWrite(Chan6, RELAY_OFF);
digitalWrite(Chan7, RELAY_OFF);
digitalWrite(Chan8, RELAY_OFF);
digitalWrite(Chan9, RELAY_OFF);
digitalWrite(Chan10, RELAY_OFF);
digitalWrite(Chan11, RELAY_OFF);
digitalWrite(Chan12, RELAY_OFF);
digitalWrite(Chan13, RELAY_OFF);
digitalWrite(Chan14, RELAY_OFF);
digitalWrite(Chan15, RELAY_OFF);
digitalWrite(Chan16, RELAY_OFF);

Serial.begin(9600); // set up Serial at 9600 bps
pinMode(Chan1, OUTPUT); // sets the pins as output
pinMode(Chan2, OUTPUT);
pinMode(Chan3, OUTPUT);
pinMode(Chan4, OUTPUT);
pinMode(Chan5, OUTPUT);
pinMode(Chan6, OUTPUT);
pinMode(Chan7, OUTPUT);
pinMode(Chan8, OUTPUT);
pinMode(Chan9, OUTPUT);
pinMode(Chan10, OUTPUT);
pinMode(Chan11, OUTPUT);
pinMode(Chan12, OUTPUT);
pinMode(Chan13, OUTPUT);
pinMode(Chan14, OUTPUT);
pinMode(Chan15, OUTPUT);
pinMode(Chan16, OUTPUT);
}

void loop()
{ // 16 channels are coming in to the Arduino
if (Serial.available() >= 16) {
// read the oldest byte in the serial buffer:
for (int i=0; i<17; i++) {
// read each byte
incomingByte[i] = Serial.read();
}

digitalWrite(Chan1, incomingByte[0]=incomingByte[0] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan2, incomingByte[1]=incomingByte[1] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan3, incomingByte[2]=incomingByte[2] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan4, incomingByte[3]=incomingByte[3] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan5, incomingByte[4]=incomingByte[4] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan6, incomingByte[5]=incomingByte[5] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan7, incomingByte[6]=incomingByte[6] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan8, incomingByte[7]=incomingByte[7] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan9, incomingByte[8]=incomingByte[8] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan10, incomingByte[9]=incomingByte[9] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan11, incomingByte[10]=incomingByte[10] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan12, incomingByte[11]=incomingByte[11] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan13, incomingByte[12]=incomingByte[12] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan14, incomingByte[13]=incomingByte[13] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan15, incomingByte[14]=incomingByte[14] ? LOW : HIGH); // Write current values to LED pins
digitalWrite(Chan16, incomingByte[15]=incomingByte[15] ? LOW : HIGH); // Write current values to LED pins
}
}
