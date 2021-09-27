
const int A1A = 2;
const int A1B = 3;
const long Day = 86400000;

void setup() {
  pinMode(A1A,OUTPUT);
  pinMode(A1B,OUTPUT);
  delay(3000);
}

void loop() {
    
  motorA('R');// Turn motor A to RIGHT
  delay(15000);
  motorA('O');// Turn motor A OFF
  delay(Day*7); 
}


void motorA(char d)
{
  if(d =='R'){
    digitalWrite(A1A,LOW);
    digitalWrite(A1B,HIGH); 
  }else if (d =='L'){
    digitalWrite(A1A,HIGH);
    digitalWrite(A1B,LOW);    
  }else{
    digitalWrite(A1A,LOW);
    digitalWrite(A1B,LOW);    
  }
}


