int PIRpin = 2;
int LED = LED_BUILTIN;
volatile byte PIRvalue = LOW;

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(PIRpin, INPUT);
Serial.begin(9600);
attachInterrupt(0, pin_ISR, CHANGE);
}

void loop() {
digitalWrite(LED, PIRvalue); 
Serial.println("LED ON");
}

void pin_ISR(){
PIRvalue != PIRvalue;
}
