int m1a = 8;
int m1b = 9;
int m2a = 10;
int m2b = 11;
char val;

void setup()
{
  pinMode(m1a, OUTPUT); // Digital pin 10 set as output Pin
  pinMode(m1b, OUTPUT); // Digital pin 11 set as output Pin
  pinMode(m2a, OUTPUT); // Digital pin 12 set as output Pin
  pinMode(m2b, OUTPUT); // Digital pin 13 set as output Pin
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
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, HIGH);
  digitalWrite(m2b, LOW);
}

void Backward()
{
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, HIGH);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, HIGH);
}

void Left()
{
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, HIGH);
  digitalWrite(m2b, LOW);
}

void Right()
{
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
}

void Forward_right()
{
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
}

void Forward_left()
{
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, HIGH);
  digitalWrite(m2b, LOW);
}

void Backward_right()
{
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, HIGH);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
}

void Backward_left()
{
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, HIGH);
}

void Stop()
{
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
}
