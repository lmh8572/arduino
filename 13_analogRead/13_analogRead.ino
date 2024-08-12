#define A_REF       5.0
#define RESOLUTION  1024
#define UNIT_ADC    A_REF/RESOLUTION
const int analogPin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float analogValue = analogRead(analogPin);

  Serial.print(analogValue, 0);
  Serial.print(", ");
  Serial.println(analogValue * UNIT_ADC, 2);
}

// char temp[20];
// char buffer[20];
// int i = 123;
// float f = 32.4;
// char c = 'A';
// char str[] = "Hello";

// void setup() {
//   Serial.begin(115200);

//   dtostrf(f, 4, 1, temp);
//   sprintf(buffer, "%d , %s , %c , %s", i, temp, c, str);

//   Serial.print(buffer);
// }

// void loop() {

// }