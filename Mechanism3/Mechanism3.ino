#include <Servo.h>

Servo cntServo1; 
int spin1 = 2; // continuum servo pin on 33

int ldrpin = A6;   // potentiometer
int ldrVal;


int maxAngle;   //initial angle plus enables variable for rotation
void setup() 
{
cntServo1.attach(spin1);

//Serial.begin(9600);
cntServo1.write(92);
}

void loop() 
{

//read from potentiometer to use later
ldrVal = analogRead(ldrpin);
// Serial.print("light value");
//Serial.println(ldrVal);

if (ldrVal <= 450)
{
//  cntServo1.detach();

// cntServo1.attach(spin1);
 
 //delay(1500);
 cntServo1.write(180);
 delay(1500);
 
 cntServo1.write(92); 
 delay(1500);
 
 cntServo1.write(0);
 delay(1500);
 
cntServo1.write(92); 
 delay(1500);
}

}