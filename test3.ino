#include <Adafruit_NeoPixel.h>

#define PIN 9   // input pin Neopixel is attached to
#define PIN1 6  // input pin Neopixel1 is attached to
#define PIN2 5
#define PIN3 2
#define PIN4 16
#define PIN5 19
#define PIN6 22
#define PIN7 25
#define PIN8 28
#define PIN9 31
#define PIN10 34
#define PIN11 37

#define NUMPIXELS      20 // number of neopixels in Ring
#define NUMPIXELS1 20 //number of pixels in 2nd ring
#define logicWrite 13 //pin for writing logic
#define logicRead 12//pin for reading logic


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels1 = Adafruit_NeoPixel(NUMPIXELS1, PIN1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2 = Adafruit_NeoPixel(NUMPIXELS1, PIN2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels3 = Adafruit_NeoPixel(NUMPIXELS1, PIN3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels4 = Adafruit_NeoPixel(NUMPIXELS1, PIN4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels5 = Adafruit_NeoPixel(NUMPIXELS1, PIN5, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels6 = Adafruit_NeoPixel(NUMPIXELS1, PIN6, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels7 = Adafruit_NeoPixel(NUMPIXELS1, PIN7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels8 = Adafruit_NeoPixel(NUMPIXELS1, PIN8, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels9 = Adafruit_NeoPixel(NUMPIXELS1, PIN9, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels10 = Adafruit_NeoPixel(NUMPIXELS1, PIN10, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels11 = Adafruit_NeoPixel(NUMPIXELS1, PIN11, NEO_GRB + NEO_KHZ800);

int timer=0; //timing of no human on steps


int delayval = 1; // timing delay
int delayval1=1; //timing1 delay

int redColor = 0;
int greenColor = 0;
int blueColor = 0;
#define echoPin 11 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 10 //attach pin D3 Arduino to pin Trig of HC-SR04
#define echoPin1 8
#define trigPin1 7
#define echoPin2 3
#define trigPin2 4
#define echoPin3 15
#define trigPin3 14
#define echoPin4 17
#define trigPin4 18
#define echoPin5 20
#define trigPin5 21
#define echoPin6 23
#define trigPin6 24
#define echoPin7 26
#define trigPin7 27
#define echoPin8 29
#define trigPin8 30
#define echoPin9 32
#define trigPin9 33
#define echoPin10 35
#define trigPin10 36
#define echoPin11 38
#define trigPin11 39


// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
long duration1; // variable for the duration of sound wave travel
int distance1; // variable for the distance measurement
long duration2; // variable for the duration of sound wave travel
int distance2; // variable for the distance measurement
long duration3; // variable for the duration of sound wave travel
int distance3; // variable for the distance measurement
long duration4; // variable for the duration of sound wave travel
int distance4; // variable for the distance measurement
long duration5; // variable for the duration of sound wave travel
int distance5; // variable for the distance measurement
long duration6; // variable for the duration of sound wave travel
int distance6; // variable for the distance measurement
long duration7; // variable for the duration of sound wave travel
int distance7; // variable for the distance measurement
long duration8; // variable for the duration of sound wave travel
int distance8; // variable for the distance measurement
long duration9; // variable for the duration of sound wave travel
int distance9; // variable for the distance measurement
long duration10; // variable for the duration of sound wave travel
int distance10; // variable for the distance measurement
long duration11; // variable for the duration of sound wave travel
int distance11; // variable for the distance measurement


void setup() {
  pixels.begin(); // Initializes the NeoPixel library.
  pixels1.begin();// Initializes the NeoPixel Library
  pixels2.begin();// Initializes the NeoPixel Library
  pixels3.begin();// Initializes the NeoPixel Library
  pixels4.begin();// Initializes the NeoPixel Library
  pixels5.begin();// Initializes the NeoPixel Library
  pixels6.begin();// Initializes the NeoPixel Library
  pixels7.begin();// Initializes the NeoPixel Library
  pixels8.begin();// Initializes the NeoPixel Library
  pixels9.begin();// Initializes the NeoPixel Library
  pixels10.begin();// Initializes the NeoPixel Library
  pixels11.begin();// Initializes the NeoPixel Library
  pinMode(PIN,OUTPUT);//led logic pin
  pinMode(PIN1,OUTPUT);//led logic pin
  pinMode(PIN2,OUTPUT);//led logic pin
  pinMode(PIN3,OUTPUT);//led logic pin
  pinMode(PIN4,OUTPUT);//led logic pin
  pinMode(PIN5,OUTPUT);//led logic pin
  pinMode(PIN6,OUTPUT);//led logic pin
  pinMode(PIN7,OUTPUT);//led logic pin
  pinMode(PIN8,OUTPUT);//led logic pin
  pinMode(PIN9,OUTPUT);//led logic pin
  pinMode(PIN10,OUTPUT);//led logic pin
  pinMode(PIN11,OUTPUT);//led logic pin
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin1,OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin1,INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin2,OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin2,INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin3,OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin3,INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin4,OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin4,INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin5,OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin5,INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin6,OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin6,INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin7,OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin7,INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin8,OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin8,INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin9,OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin9,INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin10,OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin10,INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin11,OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin11,INPUT); // Sets the echoPin as an INPUT
  pinMode(logicWrite,OUTPUT);//writing logic as an OUPUT
  pinMode(logicRead,INPUT); //reading logic as an Input
  Serial.begin(115200);
}

void loop() {
  //Serial.println(digitalRead(logicRead));
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.017 ; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  //Serial.print("Distance: ");
  //Serial.println(distance);
  //Serial.println(" cm");

  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration1 = pulseIn(echoPin1, HIGH);
  // Calculating the distance
  distance1 = duration1 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  //Serial.print("Distance: ");
  //Serial.println(distance1);
  //Serial.println(" cm");

  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration2 = pulseIn(echoPin2, HIGH);
  // Calculating the distance
  distance2 = duration2 * 0.017; // Speed of sound wave divided by 2 (go and back)

  digitalWrite(trigPin3, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin3, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration3 = pulseIn(echoPin3, HIGH);
  // Calculating the distance
  distance3 = duration3 * 0.017; // Speed of sound wave divided by 2 (go and back)

  digitalWrite(trigPin4, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin4, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin4, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration4 = pulseIn(echoPin4, HIGH);
  // Calculating the distance
  distance4 = duration4 * 0.017; // Speed of sound wave divided by 2 (go and back)

  digitalWrite(trigPin5, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin5, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin5, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration5 = pulseIn(echoPin5, HIGH);
  // Calculating the distance
  distance5 = duration5 * 0.017; // Speed of sound wave divided by 2 (go and back)


  digitalWrite(trigPin6, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin6, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin6, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration6 = pulseIn(echoPin6, HIGH);
  // Calculating the distance
  distance6 = duration6 * 0.017; // Speed of sound wave divided by 2 (go and back)





  digitalWrite(trigPin7, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin7, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin7, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration7 = pulseIn(echoPin7, HIGH);
  // Calculating the distance
  distance7 = duration7 * 0.017; // Speed of sound wave divided by 2 (go and back)


  digitalWrite(trigPin8, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin8, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin8, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration8 = pulseIn(echoPin8, HIGH);
  // Calculating the distance
  distance8 = duration8 * 0.017; // Speed of sound wave divided by 2 (go and back)


  digitalWrite(trigPin9, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin9, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin9, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration9 = pulseIn(echoPin9, HIGH);
  // Calculating the distance
  distance9 = duration9 * 0.017; // Speed of sound wave divided by 2 (go and back)

  digitalWrite(trigPin10, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin10, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin10, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration10 = pulseIn(echoPin10, HIGH);
  // Calculating the distance
  distance10 = duration10 * 0.017; // Speed of sound wave divided by 2 (go and back)

  digitalWrite(trigPin11, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin11, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin11, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration11 = pulseIn(echoPin11, HIGH);
  // Calculating the distance
  distance11 = duration11 * 0.017; // Speed of sound wave divided by 2 (go and back)
  


  
  // Displays the distance on the Serial Monitor
 // Serial.print("Distance: ");
  //Serial.println(distance);
  //Serial.println(distance1);
  //Serial.println(distance2);
  //Serial.println(distance3);
  //Serial.println(distance4);
  //Serial.println(distance8);
  
  //Serial.println(" cm");


  
  if(distance<30 or distance1<30 or distance2 <30 or distance3<30 or distance4<30 or distance5<30 or distance6<30 or distance7<30 or distance8<30 or distance9<30 or distance10<30 or distance11<30){
    digitalWrite(logicWrite,HIGH);
    timer=0;
  }
  else{
    digitalWrite(logicWrite,LOW);
    timer++;
  }

if(distance11<30){ //human presence on stairs



  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels11.setPixelColor(i, pixels11.Color(95, 239, 10)); // blue color

    pixels11.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    }
      
}

  else if (digitalRead(logicRead)){
  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels11.setPixelColor(i, pixels11.Color(255,255,255));//Moderately white light color.

    pixels11.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 


    
  }

  
else{

  if(timer>100){

  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels11.setPixelColor(i, pixels11.Color(0,0,0));//turn off

    pixels11.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    }

  }

}



if(distance10<30){ //human presence on stairs



  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels10.setPixelColor(i, pixels10.Color(130, 249, 0)); // blue color

    pixels10.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    }
      
}

  else if (digitalRead(logicRead)){
  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels10.setPixelColor(i, pixels10.Color(255,255,255));//Moderately white light color.

    pixels10.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 


    
  }

  
else{

  if(timer>100){

  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels10.setPixelColor(i, pixels10.Color(0,0,0));//turn off

    pixels10.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    }

  }

}




if(distance9<30){ //human presence on stairs



  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels9.setPixelColor(i, pixels9.Color(195, 243, 0)); // blue color

    pixels9.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    }
      
}

  else if (digitalRead(logicRead)){
  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels9.setPixelColor(i, pixels9.Color(255,255,255));//Moderately white light color.

    pixels9.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 


    
  }

  
else{

  if(timer>100){

  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels9.setPixelColor(i, pixels9.Color(0,0,0));//turn off

    pixels9.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    }

  }

}



   if(distance8<30){ //human presence on stairs



  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels8.setPixelColor(i, pixels8.Color(250, 234, 5)); // blue color

    pixels8.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    }
      
}

  else if (digitalRead(logicRead)){
  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels8.setPixelColor(i, pixels8.Color(255,255,255));//Moderately white light color.

    pixels8.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 


    
  }

  
else{

  if(timer>100){

  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels8.setPixelColor(i, pixels8.Color(0,0,0));//turn off

    pixels8.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    }

  }

}




if(distance7<30){ //human presence on stairs



  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels7.setPixelColor(i, pixels7.Color(190,115, 0)); // red color

    pixels7.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    }
        
}
  else if (digitalRead(logicRead)){
  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels7.setPixelColor(i, pixels7.Color(255,255,255));//Moderately white light color.

    pixels7.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
  

    
  }
  else{
    if (timer>100) {

     for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels7.setPixelColor(i, pixels7.Color(0,0,0));//turn off

    pixels7.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
    }
    
    
  }



if(distance6<30){ //human presence on stairs



  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels6.setPixelColor(i, pixels6.Color(255,70, 0)); // red color

    pixels6.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    }
        
}
  else if (digitalRead(logicRead)){
  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels6.setPixelColor(i, pixels6.Color(255,255,255));//Moderately white light color.

    pixels6.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
  

    
  }
  else{
    if (timer>100) {

     for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels6.setPixelColor(i, pixels6.Color(0,0,0));//turn off

    pixels6.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
    }
    
    
  }



if(distance5<30){ //human presence on stairs



  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels5.setPixelColor(i, pixels5.Color(255,0, 40)); // red color

    pixels5.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    }
        
}
  else if (digitalRead(logicRead)){
  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels5.setPixelColor(i, pixels5.Color(255,255,255));//Moderately white light color.

    pixels5.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
  

    
  }
  else{
    if (timer>100) {

     for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels5.setPixelColor(i, pixels5.Color(0,0,0));//turn off

    pixels5.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
    }
    
    
  }























  

if(distance4<30){ //human presence on stairs



  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels4.setPixelColor(i, pixels4.Color(180,0, 57)); // red color

    pixels4.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    }
        
}
  else if (digitalRead(logicRead)){
  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels4.setPixelColor(i, pixels4.Color(255,255,255));//Moderately white light color.

    pixels4.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
  

    
  }
  else{
    if (timer>100) {

     for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels4.setPixelColor(i, pixels4.Color(0,0,0));//turn off

    pixels4.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
    }
    
    
  }














  


if(distance3<30){ //human presence on stairs



  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels3.setPixelColor(i, pixels3.Color(95,50, 220)); // red color

    pixels3.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    }
        
}
  else if (digitalRead(logicRead)){
  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels3.setPixelColor(i, pixels3.Color(255,255,255));//Moderately white light color.

    pixels3.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
  

    
  }
  else{
    if (timer>100) {

     for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels3.setPixelColor(i, pixels3.Color(0,0,0));//turn off

    pixels3.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
    }
    
    
  }

















  

if(distance2<30){ //human presence on stairs



  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels2.setPixelColor(i, pixels2.Color(95, 0, 255)); // red color

    pixels2.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    }
        
}
  else if (digitalRead(logicRead)){
  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels2.setPixelColor(i, pixels2.Color(255,255,255));//Moderately white light color.

    pixels2.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
  

    
  }
  else{
    if (timer>100) {

     for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels2.setPixelColor(i, pixels2.Color(0,0,0));//turn off

    pixels2.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
    }
    
    
  }

  
  if(distance1<30){ //human presence on stairs



  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels1.setPixelColor(i, pixels1.Color(70, 92, 150)); // red color

    pixels1.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    }
        
}
  else if (digitalRead(logicRead)){
  for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels1.setPixelColor(i, pixels1.Color(255,255,255));//Moderately white light color.

    pixels1.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
  

    
  }
  else{
    if (timer>100) {

     for(int i=0;i<NUMPIXELS;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels1.setPixelColor(i, pixels1.Color(0,0,0));//turn off

    pixels1.show(); // This sends the updated pixel color to the hardware.

    delay(delayval); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 
    }
    
    
  }
    if(distance<30){ //human presence on stairs



  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(30, 50, 235)); // blue color

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    }
      
}

  else if (digitalRead(logicRead)){
  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,255,255));//Moderately white light color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    } 


    
  }

  
else{

  if(timer>100){

  for(int i=0;i<NUMPIXELS1;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0));//turn off

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(delayval1); // Delay for a period of time (in milliseconds).
    
    // Serial.println(i);  
    }

  }

}
}


  
