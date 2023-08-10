int tocar;
int fallos;
int pause;

void setup() {
  pinMode(12,INPUT);
  pinMode(13,OUTPUT);
  fallos=0;
  pause=0;
}

void loop() {
  tocar = digitalRead(12);
  if(tocar == HIGH && pause==0){
    digitalWrite(13,HIGH);
    fallos++;
    pause=1;
  }
  else{
    digitalWrite(13,LOW);
  }


  if(pause==1){
    delay(100);
    pause=0;
    digitalWrite(13,LOW);
    delay(400);
  }
}