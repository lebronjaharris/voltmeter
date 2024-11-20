float input_volt = 0.0;
float temp = 0.0;
float r1 = 33000.0;
float  r2 = 840000.0;

void setup()
{
  Serial.begin(9600);
}

void  loop()
{

  int analogvalue = analogRead(A2);
  temp = (analogvalue  * 5.0) / 1024.0;
  input_volt = temp / (r2 / (r1 + r2));
  if (input_volt  < 0.1)
  {
    input_volt = 0.0;
  }
  Serial.print("Volts =  ");
  Serial.println(input_volt);

  delay(100);


}
