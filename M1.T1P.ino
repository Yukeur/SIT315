int PIRpin = 2;
int PIRvalue = 0;
int LED = LED_BUILTIN;

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(PIRpin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
PIRvalue = digitalRead(PIRpin); 
if (PIRvalue == HIGH) 
 {         
   digitalWrite(LED, HIGH);  
   // turn ON LED if the motion is detected
   Serial.println("High, LED ON");
 } 
 else 
 {
   digitalWrite(LED, LOW);
   // LED will turn OFF if we have no motion
   Serial.println("LOW, LED OFF");
   delay(1000);
 }
}
