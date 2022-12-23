int upStatus=1;
int upStatusPrev=1;
int leftStatus=1;
int leftStatusPrev=1;
int downStatus=1;
int downStatusPrev=1;
int rightStatus=1;
int rightStatusPrev=1;

void setup()
{
  Serial.begin(9600);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
}

void loop()
{
 
 upStatus=digitalRead(4);
 leftStatus=digitalRead(5);
 downStatus=digitalRead(6);
 rightStatus=digitalRead(7);

 if (upStatus!=upStatusPrev && upStatus==LOW)
 {
    Serial.println('W');
    upStatusPrev=upStatus;
 }

 if (upStatus!=upStatusPrev && upStatus==HIGH)
 {
    Serial.println('w');
    upStatusPrev=upStatus;
 }
 
 if (leftStatus!=leftStatusPrev && leftStatus==LOW)
 {
    Serial.println('A');
    leftStatusPrev=leftStatus;
 }

 if (leftStatus!=leftStatusPrev && leftStatus==HIGH)
 {
    Serial.println('a');
    leftStatusPrev=leftStatus;
 }
 
  
 if (downStatus!=downStatusPrev && downStatus==LOW)
 {
   
    Serial.println('S');
    downStatusPrev=downStatus;
 }

 if (downStatus!=downStatusPrev && downStatus==HIGH)
 {
    Serial.println('s');
    downStatusPrev=downStatus;
 }
 
 if (rightStatus!=rightStatusPrev && rightStatus==LOW)
 {
    Serial.println('J');
    rightStatusPrev=rightStatus;
 }
 if (rightStatus!=rightStatusPrev && rightStatus==HIGH)
 {
    Serial.println('j');
    rightStatusPrev=rightStatus;
 }
}
