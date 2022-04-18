int motorT11 = 8;
int motorT12 = 9;
int motorT21 = 10;
int motorT22 = 11;
char val;

void setup()
{
  pinMode(motorT11, OUTPUT); // Digital pin 10 set as output Pin
  pinMode(motorT12, OUTPUT); // Digital pin 11 set as output Pin
  pinMode(motorT21, OUTPUT); // Digital pin 12 set as output Pin
  pinMode(motorT22, OUTPUT); // Digital pin 13 set as output Pin
  Serial.begin(9600);
}

void loop()
{
  while (Serial.available() > 0)
  {
    val = Serial.read();
    Serial.println(val);
  }

  switch (val)
  {
    case 'F':
    {
      Forward();
      break;
    }
    case 'B':
    {
      Backward();
      break;
    }
    case 'L':
    {
      Left();
      break;
    }
    case 'R':
    {
      Right();
      break;
    }
    case 'S':
    {
      Stop();
      break;
    }
    default:
      break;
  }
}

void Forward()
{
  digitalWrite(motorT11, HIGH);
  digitalWrite(motorT12, LOW);
  digitalWrite(motorT21, HIGH);
  digitalWrite(motorT22, LOW);
}

void Backward()
{
  digitalWrite(motorT11, LOW);
  digitalWrite(motorT12, HIGH);
  digitalWrite(motorT21, LOW);
  digitalWrite(motorT22, HIGH);
}

void Left()
{
  digitalWrite(motorT11, LOW);
  digitalWrite(motorT12, LOW);
  digitalWrite(motorT21, HIGH);
  digitalWrite(motorT22, LOW);
}

void Right()
{
  digitalWrite(motorT11, HIGH);
  digitalWrite(motorT12, LOW);
  digitalWrite(motorT21, LOW);
  digitalWrite(motorT22, LOW);
}

void Forward_right()
{
  digitalWrite(motorT11, HIGH);
  digitalWrite(motorT12, LOW);
  digitalWrite(motorT21, LOW);
  digitalWrite(motorT22, LOW);
}

void Forward_left()
{
  digitalWrite(motorT11, LOW);
  digitalWrite(motorT12, LOW);
  digitalWrite(motorT21, HIGH);
  digitalWrite(motorT22, LOW);
}

void Backward_right()
{
  digitalWrite(motorT11, LOW);
  digitalWrite(motorT12, HIGH);
  digitalWrite(motorT21, LOW);
  digitalWrite(motorT22, LOW);
}

void Backward_left()
{
  digitalWrite(motorT11, LOW);
  digitalWrite(motorT12, LOW);
  digitalWrite(motorT21, LOW);
  digitalWrite(motorT22, HIGH);
}

void Stop()
{
  digitalWrite(motorT11, LOW);
  digitalWrite(motorT12, LOW);
  digitalWrite(motorT21, LOW);
  digitalWrite(motorT22, LOW);
}
