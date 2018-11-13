#define SEG1 11//e
#define SEG2 10//d
#define SEG4 9//c
#define SEG5 8//DP
#define SEG6 7//b
#define SEG7 6//a
#define SEG9 5//f
#define SEG10 4//g
#define LEDON LOW
#define LEDOFF HIGH
int ledState=LEDOFF;
int viive = 500;

void setup() {
  Serial.begin(9600);
  pinMode(SEG1, OUTPUT);//11
  pinMode(SEG2, OUTPUT);//10
  pinMode(SEG4, OUTPUT);//9
  pinMode(SEG5, OUTPUT);//8
  pinMode(SEG6, OUTPUT);//7
  pinMode(SEG7, OUTPUT);//6
  pinMode(SEG9, OUTPUT);//5
  pinMode(SEG10, OUTPUT);//4
//numero 0
  digitalWrite(SEG1, LOW);//e
  digitalWrite(SEG2, LOW);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, LOW);//f
  digitalWrite(SEG10, HIGH);//g
  delay (viive);

//numero 1
  digitalWrite(SEG1, HIGH);//e
  digitalWrite(SEG2, HIGH);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, HIGH);//a
  digitalWrite(SEG9, HIGH);//f
  digitalWrite(SEG10, HIGH);//g
  delay (viive);

//numero 2
  digitalWrite(SEG1, LOW);//e
  digitalWrite(SEG2, LOW);//d
  digitalWrite(SEG4, HIGH);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, HIGH);//f
  digitalWrite(SEG10, LOW);//g
  delay (viive);

//numero 3
  digitalWrite(SEG1, HIGH);//e
  digitalWrite(SEG2, LOW);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, HIGH);//f
  digitalWrite(SEG10, LOW);//g
  delay (viive);

//numero 4
  digitalWrite(SEG1, HIGH);//e
  digitalWrite(SEG2, HIGH);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, HIGH);//a
  digitalWrite(SEG9, LOW);//f
  digitalWrite(SEG10, LOW);//g
  delay (viive);

//numero 5
  digitalWrite(SEG1, HIGH);//e
  digitalWrite(SEG2, LOW);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, HIGH);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, LOW);//f
  digitalWrite(SEG10, LOW);//g
  delay (viive);


//numero 6
  digitalWrite(SEG1, LOW);//e
  digitalWrite(SEG2, LOW);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, HIGH);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, LOW);//f
  digitalWrite(SEG10, LOW);//g
  delay (viive);

//numero 7
  digitalWrite(SEG1, HIGH);//e
  digitalWrite(SEG2, HIGH);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, HIGH);//f
  digitalWrite(SEG10, HIGH);//g
  delay (viive);

//numero 8
  digitalWrite(SEG1, LOW);//e
  digitalWrite(SEG2, LOW);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, LOW);//f
  digitalWrite(SEG10, LOW);//g
  delay (viive);

//numero 9
  digitalWrite(SEG1, HIGH);//e
  digitalWrite(SEG2, HIGH);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, LOW);//f
  digitalWrite(SEG10, LOW);//g
  delay (viive);
}
void toggLed(){
  if(ledState==LEDOFF){
    ledState=LEDON;
  }else{
    ledState=LEDOFF;
  }
  Serial.begin(9600);
}
int getnum(){
  return 8;
}

void loop() {
  Serial.println(getnum());
}
