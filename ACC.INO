void setup()
{
	pinMode(3,INPUT);
	pinMode(2,INPUT);
	pinMode(4,INPUT);
	
	Serial.begin(9600);
	
	pinMode(6,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(8,OUTPUT);
}
void loop()
{
	int x=analogRead(2);
	int y=analogRead(3);
	Serial.print(x);
	Serial.print(',');
	Serial.println(y);
	
	if(x<=310 && y<=360 && y>=320)
	{
		digitalWrite(5,HIGH);
		digitalWrite(6,LOW);
		digitalWrite(7,LOW);
		digitalWrite(8,LOW);
	}
	if(x<360 && y>=310 && y<=350)
	{
		digitalWrite(7,HIGH);
		digitalWrite(8,LOW);
		digitalWrite(5,LOW);
		digitalWrite(6,LOW);
	}
	if(y>=360 && x>=310 && x<=350)
	{
		digitalWrite(5,HIGH);
		digitalWrite(6,LOW);
		digitalWrite(7,HIGH);
		digitalWrite(8,LOW);
	}
	if(y<=320 && x>=310 && x<=350)
	{
		digitalWrite(6,HIGH);
		digitalWrite(5,LOW);
		digitalWrite(8,HIGH);
		digitalWrite(7,LOW);
	}
	if(y<=360 && y>=320 && x>=310 && x<=350)
	{
		digitalWrite(5,LOW);
		digitalWrite(6,LOW);
		digitalWrite(7,LOW);
		digitalWrite(8,LOW);
	}
}