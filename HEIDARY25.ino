int ledPin=13;
volatile byte button=LOW;

const int interruptPin=2;
volatile byte state=LOW;
void setup() {
  attachInterrupt (0,blink2,CHANGE);
  
  pinMode(ledPin,OUTPUT);
pinMode (interruptPin,INPUT_PULLUP);

  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(ledPin,button);
  
}
void blink2(){
 button=!button;
}
