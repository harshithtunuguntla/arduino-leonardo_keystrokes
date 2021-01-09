#include<Keyboard.h> //Library for controlling keyboard
#define echoPin 2 
#define trigPin 3 //Pins defined for Ultrasonic Sensor

long duration; 
int distance; 

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600); 
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); 
  Serial.println("with Arduino Leonardo");
  Keyboard.begin();
}

void loop() 
{

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2; 
 
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if(distance<40)
  triggerAutomation();
  
}


void triggerAutomation()//Function that shifts the tabs
{
  
Keyboard.press(KEY_LEFT_ALT);//ALT KEY (Note: These can be changed to the need)
Keyboard.press(KEY_TAB);//TAB KEY (Note: These can be changed to the need)
delay(10);
Keyboard.releaseAll();
delay(1000);

}
