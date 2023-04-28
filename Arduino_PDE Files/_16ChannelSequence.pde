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

digitalWrite(Chan1, incomingByte[0]); // Write current values to LED pins
digitalWrite(Chan2, incomingByte[1]); // Write current values to LED pins
digitalWrite(Chan3, incomingByte[2]); // Write current values to LED pins
digitalWrite(Chan4, incomingByte[3]); // Write current values to LED pins
digitalWrite(Chan5, incomingByte[4]); // Write current values to LED pins
digitalWrite(Chan6, incomingByte[5]); // Write current values to LED pins
digitalWrite(Chan7, incomingByte[6]); // Write current values to LED pins
digitalWrite(Chan8, incomingByte[7]); // Write current values to LED pins
digitalWrite(Chan9, incomingByte[8]); // Write current values to LED pins
digitalWrite(Chan10, incomingByte[9]); // Write current values to LED pins
digitalWrite(Chan11, incomingByte[10]); // Write current values to LED pins
digitalWrite(Chan12, incomingByte[11]); // Write current values to LED pins
digitalWrite(Chan13, incomingByte[12]); // Write current values to LED pins
digitalWrite(Chan14, incomingByte[13]); // Write current values to LED pins
digitalWrite(Chan15, incomingByte[14]); // Write current values to LED pins
digitalWrite(Chan16, incomingByte[15]); // Write current values to LED pins
}
}
