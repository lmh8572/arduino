const int ledPin = 3;
const int buttonPin = 2;
int led_flag = 0;   // 0:OFF, 1:ON

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(ledPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonInput = digitalRead(buttonPin);

  if(buttonInput == HIGH){
    if(led_flag == 0){
      digitalWrite(ledPin, HIGH);
      led_flag = 1;
    }
    else{
      digitalWrite(ledPin, LOW);
      led_flag = 0;
    }
    delay(300);
  }
}
