// C++ code

const int led1 = 3;
const int led2 = 4;
const int sld1 = 12;
const int sld2 = 11;

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(sld1,INPUT);
  pinMode(sld2,INPUT);
}

void loop()
{
  boolean v = digitalRead(sld1);
  boolean v1 = digitalRead(sld2);
  
  if(v){
    digitalWrite(led1,HIGH);
  }
  else{
    digitalWrite(led1,LOW);
  }
  
    
  if(v1){
    digitalWrite(led2,HIGH);
  }
  else{
    digitalWrite(led2,LOW);
  }
}
