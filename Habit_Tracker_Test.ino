int btn1 = A5, btn2 = A4, btn3 = A3, btn4 = A2, btn5 = A1, btn6 = A0;
int b1State=0, b2State=0, b3State=0, b4State=0, b5State=0, b6State=0;
int prevB1State=0, prevB2State=0, prevB3State=0, prevB4State=0, prevB5State=0, prevB6State=0;
int r1 = 2, g1 = 3, r2 = 4, g2 = 5, r3 = 6, g3 = 7, r4 = 8, g4 = 9, r5 = 10, g5 = 11, r6 = 12, g6 = 13;
bool hab1 = false, hab2 = false, hab3 = false, hab4 = false, hab5 = false, hab6 = false;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(r1, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(g3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(g4, OUTPUT);
  pinMode(r5, OUTPUT);
  pinMode(g5, OUTPUT);
  pinMode(r6, OUTPUT);
  pinMode(g6, OUTPUT);
  newDay();
}

void loop() {
  b1State = digitalRead(btn1);
  b2State = digitalRead(btn2);
  b3State = digitalRead(btn3);
  b4State = digitalRead(btn4);
  b5State = digitalRead(btn5);
  b6State = digitalRead(btn6);
  if (b1State != prevB1State) {    
    if (b1State == HIGH) {
      hab1 = !hab1;      
    }
  }
  if (b2State != prevB2State) {    
    if (b2State == HIGH) {
      hab2 = !hab2;      
    }
  }
   if (b3State != prevB3State) {    
    if (b3State == HIGH) {
      hab3 = !hab3;      
    }
  }
  if (b4State != prevB4State) {    
    if (b4State == HIGH) {
      hab4 = !hab4;      
    }
  }
  if (b5State != prevB5State) {    
    if (b5State == HIGH) {
      hab5 = !hab5;      
    }
  }
  if (b6State != prevB6State) {    
    if (b6State == HIGH) {
      hab6 = !hab6;      
    }
  }
  if (hab1 == true) {
    habDone(1);    
  }
  if (hab1 == false) {
    habNotDone(1);
  }
  if (hab2 == true) {
    habDone(2);    
  }
  if (hab2 == false) {
    habNotDone(2);
  }
  if (hab3 == true) {
    habDone(3);    
  }
  if (hab3 == false) {
    habNotDone(3);
  }
  if (hab4 == true) {
    habDone(4);    
  }
  if (hab4 == false) {
    habNotDone(4);
  }
  if (hab5 == true) {
    habDone(5);    
  }
  if (hab5 == false) {
    habNotDone(5);
  }
  if (hab6 == true) {
    habDone(6);    
  }
  if (hab6 == false) {
    habNotDone(6);
  }
  prevB1State = b1State;
  prevB2State = b2State;
  prevB3State = b3State;
  prevB4State = b4State;
  prevB5State = b5State;
  prevB6State = b6State;
  Serial.println(digitalRead(A0));
  //Serial.print(digitalRead(A1));
  //Serial.print(digitalRead(A2));
  //Serial.print(digitalRead(A3));
  //Serial.print(digitalRead(A4));
  //Serial.println(digitalRead(A5));
  //delay(100);
}
void habDone(int num) {
  if (num == 1) {
    digitalWrite(r1, LOW);
    digitalWrite(g1, HIGH);
  }
  if (num == 2) {
    digitalWrite(r2, LOW);
    digitalWrite(g2, HIGH);
  }
  if (num == 3) {
    digitalWrite(r3, LOW);
    digitalWrite(g3, HIGH);
  }
  if (num == 4) {
    digitalWrite(r4, LOW);
    digitalWrite(g4, HIGH);
  }
  if (num == 5) {
    digitalWrite(r5, LOW);
    digitalWrite(g5, HIGH);
  }
  if (num == 6) {
    digitalWrite(r6, LOW);
    digitalWrite(g6, HIGH);
  }
}
void habNotDone(int num) {
  if (num == 1) {
    digitalWrite(r1, HIGH);
    digitalWrite(g1, LOW);
  }
  if (num == 2) {
    digitalWrite(r2, HIGH);
    digitalWrite(g2, LOW);
  }
  if (num == 3) {
    digitalWrite(r3, HIGH);
    digitalWrite(g3, LOW);
  }
  if (num == 4) {
    digitalWrite(r4, HIGH);
    digitalWrite(g4, LOW);
  }
  if (num == 5) {
    digitalWrite(r5, HIGH);
    digitalWrite(g5, LOW);
  }
  if (num == 6) {
    digitalWrite(r6, HIGH);
    digitalWrite(g6, LOW);
  }
  if(b1State == HIGH && b2State == HIGH) {
    newDay();
  }
}
void newDay() {
  habNotDone(1); 
  habNotDone(2); 
  habNotDone(3); 
  habNotDone(4); 
  habNotDone(5); 
  habNotDone(6); 
//  hab1 = false;
//  hab2 = false;
//  hab3 = false;
//  hab4 = false;
//  hab5 = false;
//  hab6 = false;
}
