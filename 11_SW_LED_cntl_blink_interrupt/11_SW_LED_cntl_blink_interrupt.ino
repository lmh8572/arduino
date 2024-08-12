/* 
  하드웨어 설계
  - SW는 Active HIGH
  - LED는 Active HIGH
*/

const int ledPin_1 = 3;
const int buttonPin_1 = 2;
int led_flag_1 = 0;  // 0:OFF, 1:ON
int cur_btn_val_1 = LOW, pre_btn_val_1 = LOW;

// 사용자 함수 선언
void buttonPressed(void){
  // 스위치 동작에 따른 상태값 변경
  if (led_flag_1 == 0) {  // 꺼져 있으면 키고
    led_flag_1 = 1;
  } else {  // 켜져 있으면 끄고
    led_flag_1 = 0;
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(buttonPin_1, INPUT);
  pinMode(ledPin_1, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin_1), buttonPressed, RISING);

  // LED를 끄고 시작
  digitalWrite(ledPin_1, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 상태값에 따른 동작 구현
  if(led_flag_1 == 1){
    digitalWrite(ledPin_1, HIGH);
    delay(100);
    digitalWrite(ledPin_1, LOW);
    delay(100);
  }
}
