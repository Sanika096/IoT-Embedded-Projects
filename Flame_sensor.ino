int flame_sensor=7;
int led=LED_BUILTIN;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(flame_sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int data=digitalRead(flame_sensor);
Serial.println(data);
if (data==1)
{
  digitalWrite(led,HIGH);
  Serial.println("Flame is detected");
}
else
{
  digitalWrite(led,LOW);
  Serial.println("Flame is not detected");
}
delay(1000);
}
