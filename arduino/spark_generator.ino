long onTime = 0;
int data;

#define outpin 2

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(outpin, OUTPUT);
  digitalWrite(outpin, LOW);

  Serial.begin(115200);
  Serial.setTimeout(1);
}

// the loop function runs over and over again forever
void loop() {
  if(Serial.available() > 0){
    data = Serial.read();
    if(data == 'F'){
      onTime = millis();
      digitalWrite(outpin, HIGH);
    }
  }

  if(millis()-onTime > 5 && digitalRead(outpin)){
    digitalWrite(outpin, LOW);
    Serial.println("done");
  }
}
