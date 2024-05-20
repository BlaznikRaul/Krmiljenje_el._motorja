int tipka1 = 1;
int tipka2 = 2;
int tipka3 = 3;
int stikalo = 4;
int potenc = A0;

int led1 = 12;
int led2 = 13; 

boolean levo = false;
boolean desno = false;
boolean ustavi = true;
boolean reset = false;

void setup() {
  pinMode(tipka1, INPUT);
  pinMode(tipka2, INPUT);
  pinMode(tipka3, INPUT);
  pinMode(stikalo, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
}

void loop() {
  int potenca = analogRead(potenc);
  int vrednost = map(potenca, 0, 1024, 0, 1000);

  
  
  if(digitalRead(stikalo) == HIGH || analogRead(potenc) < 200) 
  { 
    ustaviMotor();
    levo = false;
    desno = false;
    ustavi = true;
    return; 
  }



  if(digitalRead(tipka3) == HIGH) {
    ustavi = true;
    levo = false;
    desno = false;
    reset = true;
    delay(250);
  } else if(digitalRead(tipka1) == HIGH && reset == true) {
    desno = true;
    levo = false;
    ustavi = false;
    reset = false;
    delay(250);
  } else if(digitalRead(tipka2) == HIGH && reset == true) {
    levo = true;
    desno = false;
    ustavi = false;
    reset = false;
    delay(250);
  }


  if(ustavi == true)
  {
    ustaviMotor();
  }
  else if(desno == true)
  {
    vrtiDesno();
  }
  else if(levo == true)
  {
    vrtiLevo();
  }

  
}

void ustaviMotor() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
}

void vrtiDesno() {
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
}

void vrtiLevo() {
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
}
