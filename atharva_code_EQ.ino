#define x A0
#define y A1
#define z A2
int xaxis;
int yaxis;
int zaxis;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {  
  xaxis = analogRead(x); 
  yaxis = analogRead(y);
  zaxis = analogRead(z);
  float XAcc = (xaxis)*1;
  float YAcc = (yaxis)*1;
  float ZAcc = (zaxis)*1;
 
  Serial.print("X ACCELERATION = ");
  Serial.print(XAcc, DEC);
  Serial.print(",");
  Serial.print("Y ACCELERATION = ");
  Serial.print(YAcc,DEC);
  Serial.print(",");
  Serial.print("Z ACCLERATION = ");
  Serial.print(ZAcc, DEC);
  Serial.println();
  delay(1000);
}

  
