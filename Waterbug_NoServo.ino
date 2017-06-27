
int light = 13;

void setup() {
Serial.begin(9600);
pinMode(light, OUTPUT);
}

void loop() {
Serial.println(analogRead(A0));
if (analogRead(A0)<800)
{
digitalWrite(light, HIGH);
}

else {
digitalWrite(light, LOW);
}
delay(500);  //low pass filter
}
