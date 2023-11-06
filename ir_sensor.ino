int ir_sensor=7;
int buzzer=6;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);
pinMode(ir_sensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int data=digitalRead(ir_sensor);
Serial.println(data);
if (data==1)
{
  digitalWrite(buzzer,HIGH);
  Serial.println("Detected");
}
else
{
  digitalWrite(buzzer,LOW);
  Serial.println("Not detected");
}
delay(1000);
}
