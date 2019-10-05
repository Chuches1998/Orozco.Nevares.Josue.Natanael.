const int verde = 8;
const int amarillo = 9;
const int rojo = 10;
const int focoverde = 11;
const int focoazul = 12;
const int focorojo = 13;
void setup() {
  pinMode(focoverde, OUTPUT);
  pinMode(focoazul, OUTPUT);
  pinMode(focorojo, OUTPUT);
pinMode(verde, INPUT);
pinMode(amarillo, INPUT);
pinMode(rojo, INPUT);
}
void loop() {
  if(digitalRead(verde)){
    (digitalWrite(focoverde, HIGH));
  }else{ (digitalWrite(focoverde, LOW));}

  if(digitalRead(amarillo)){
    (digitalWrite(focoazul, HIGH));
  }else{ (digitalWrite(focoazul, LOW));}

  if(digitalRead(rojo)){
    (digitalWrite(focorojo, HIGH));
  }else{ (digitalWrite(focorojo, LOW));}
}
