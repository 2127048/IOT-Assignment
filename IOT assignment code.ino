// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  Serial.println("enter choice=");
}

void loop()
{
  while(Serial.available()!=0)
  {
    char ch=Serial.read();
    switch(ch)
    {
      case 114:
          digitalWrite(13,HIGH);
          digitalWrite(10,LOW);
          digitalWrite(6,LOW);
         break;
      case 121:
          digitalWrite(10,HIGH);
          digitalWrite(13,LOW);
          digitalWrite(6,LOW);
          break;
      case 103:
          digitalWrite(6,HIGH);
          digitalWrite(13,LOW);
          digitalWrite(10,LOW);
          break;
      case 98:
          digitalWrite(6,HIGH);
          delay(1000);
          digitalWrite(6,LOW);
          delay(1000);
      
          break;
      default:
          Serial.println("\nPlease enter valid input");
    }
    }
     
}