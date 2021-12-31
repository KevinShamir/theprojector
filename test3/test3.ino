#include <Adafruit_NeoPixel.h>

#define PIN01 9
#define PIN02 6
#define PIN03 5
#define PIN04 2
#define PIN05 16
#define PIN06 19
#define PIN07 22
#define PIN08 25
#define PIN09 28
#define PIN10 31
#define PIN11 34
#define PIN12 37
#define PIN13 40
#define PIN14 43
#define PIN15 46

#define NUMPIXELS 20 // Number of NeoPixels in strand.

#define logicWrite 13 // Pin for writing logic
#define logicRead 12 // Pin for reading logic

Adafruit_NeoPixel pixels01 = Adafruit_NeoPixel(NUMPIXELS, PIN01, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels02 = Adafruit_NeoPixel(NUMPIXELS, PIN02, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels03 = Adafruit_NeoPixel(NUMPIXELS, PIN03, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels04 = Adafruit_NeoPixel(NUMPIXELS, PIN04, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels05 = Adafruit_NeoPixel(NUMPIXELS, PIN05, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels06 = Adafruit_NeoPixel(NUMPIXELS, PIN06, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels07 = Adafruit_NeoPixel(NUMPIXELS, PIN07, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels08 = Adafruit_NeoPixel(NUMPIXELS, PIN08, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels09 = Adafruit_NeoPixel(NUMPIXELS, PIN09, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels10 = Adafruit_NeoPixel(NUMPIXELS, PIN10, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels11 = Adafruit_NeoPixel(NUMPIXELS, PIN11, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels12 = Adafruit_NeoPixel(NUMPIXELS, PIN12, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels13 = Adafruit_NeoPixel(NUMPIXELS, PIN13, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels14 = Adafruit_NeoPixel(NUMPIXELS, PIN14, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels15 = Adafruit_NeoPixel(NUMPIXELS, PIN15, NEO_GRB + NEO_KHZ800);

unsigned int timer = 0; // Time with no human on steps

int delayval = 1; // timing delay
int delayval1 = 1; // timing1 delay

int redColor = 0;
int greenColor = 0;
int blueColor = 0;

#define echoPin01 11
#define trigPin01 10
#define echoPin02 8
#define trigPin02 7
#define echoPin03 3
#define trigPin03 4
#define echoPin04 15
#define trigPin04 14
#define echoPin05 17
#define trigPin05 18
#define echoPin06 20
#define trigPin06 21
#define echoPin07 23
#define trigPin07 24
#define echoPin08 26
#define trigPin08 27
#define echoPin09 29
#define trigPin09 30
#define echoPin10 32
#define trigPin10 33
#define echoPin11 35
#define trigPin11 36
#define echoPin12 38
#define trigPin12 39
#define echoPin13 41
#define trigPin13 42
#define echoPin14 45
#define trigPin14 44
#define echoPin15 48
#define trigPin15 47

unsigned long duration01; unsigned int distance01; unsigned int switch01;
unsigned long duration02; unsigned int distance02; unsigned int switch02;
unsigned long duration03; unsigned int distance03; unsigned int switch03;
unsigned long duration04; unsigned int distance04; unsigned int switch04;
unsigned long duration05; unsigned int distance05; unsigned int switch05;
unsigned long duration06; unsigned int distance06; unsigned int switch06;
unsigned long duration07; unsigned int distance07; unsigned int switch07;
unsigned long duration08; unsigned int distance08; unsigned int switch08;
unsigned long duration09; unsigned int distance09; unsigned int switch09;
unsigned long duration10; unsigned int distance10; unsigned int switch10;
unsigned long duration11; unsigned int distance11; unsigned int switch11;
unsigned long duration12; unsigned int distance12; unsigned int switch12;
unsigned long duration13; unsigned int distance13; unsigned int switch13;
unsigned long duration14; unsigned int distance14; unsigned int switch14;
unsigned long duration15; unsigned int distance15; unsigned int switch15;

void sendTrigger (int trigPin) {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds (pulse)
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
}

void setAllPixels (Adafruit_NeoPixel& pixels, int numPixels, int rValue, int gValue, int bValue, int delayVal) {
  for (int i = 0; i < numPixels; i++) {
    pixels.setPixelColor(i, pixels.Color(rValue, gValue, bValue));
    pixels.show();
    delay(delayVal);
  }
}

void setAllPixelsWhite (Adafruit_NeoPixel& pixels, int numPixels, int delayVal) {
  setAllPixels(pixels, numPixels, 255, 255, 255, delayVal);
}

void turnOffAllPixels (Adafruit_NeoPixel& pixels, int numPixels, int delayVal) {
  setAllPixels (pixels, numPixels, 0, 0, 0, delayVal);
}

void setup() {
  // ===== Initializes the Adafruit Neopixels library =====
  pixels01.begin();
  pixels02.begin();
  pixels03.begin();
  pixels04.begin();
  pixels05.begin();
  pixels06.begin();
  pixels07.begin();
  pixels08.begin();
  pixels09.begin();
  pixels10.begin();
  pixels11.begin();
  pixels12.begin();
  pixels13.begin();
  pixels14.begin();
  pixels15.begin();

  // ===== LED logic pins =====
  pinMode(PIN01, OUTPUT);
  pinMode(PIN02, OUTPUT);
  pinMode(PIN03, OUTPUT);
  pinMode(PIN04, OUTPUT);
  pinMode(PIN05, OUTPUT);
  pinMode(PIN06, OUTPUT);
  pinMode(PIN07, OUTPUT);
  pinMode(PIN08, OUTPUT);
  pinMode(PIN09, OUTPUT);
  pinMode(PIN10, OUTPUT);
  pinMode(PIN11, OUTPUT);
  pinMode(PIN12, OUTPUT);
  pinMode(PIN13, OUTPUT);
  pinMode(PIN14, OUTPUT);
  pinMode(PIN15, OUTPUT);

  // ========== Sets trigPin as OUTPUT and echoPin as INPUT ==========
  pinMode(trigPin01, OUTPUT); pinMode(echoPin01, INPUT);
  pinMode(trigPin02, OUTPUT); pinMode(echoPin02, INPUT);
  pinMode(trigPin03, OUTPUT); pinMode(echoPin03, INPUT);
  pinMode(trigPin04, OUTPUT); pinMode(echoPin04, INPUT);
  pinMode(trigPin05, OUTPUT); pinMode(echoPin05, INPUT);
  pinMode(trigPin06, OUTPUT); pinMode(echoPin06, INPUT);
  pinMode(trigPin07, OUTPUT); pinMode(echoPin07, INPUT);
  pinMode(trigPin08, OUTPUT); pinMode(echoPin08, INPUT);
  pinMode(trigPin09, OUTPUT); pinMode(echoPin09, INPUT);
  pinMode(trigPin10, OUTPUT); pinMode(echoPin10, INPUT);
  pinMode(trigPin11, OUTPUT); pinMode(echoPin11, INPUT);
  pinMode(trigPin12, OUTPUT); pinMode(echoPin12, INPUT);
  pinMode(trigPin13, OUTPUT); pinMode(echoPin13, INPUT);
  pinMode(trigPin14, OUTPUT); pinMode(echoPin14, INPUT);
  pinMode(trigPin15, OUTPUT); pinMode(echoPin15, INPUT);
  pinMode(logicWrite, OUTPUT); pinMode(logicRead, INPUT);

  Serial.begin(115200);
}

void loop() {
  // Serial.println(digitalRead(logicRead));

  sendTrigger(trigPin01);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration01 = pulseIn(echoPin01, HIGH);
  // Calculating the distance
  distance01 = duration01 * 0.017; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  // Serial.print("Distance: ");
  // Serial.println(distance);
  // Serial.println(" cm");

  sendTrigger(trigPin02);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration02 = pulseIn(echoPin02, HIGH);
  // Calculating the distance
  distance02 = duration02 * 0.017; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  // Serial.print("Distance: ");
  // Serial.println(distance1);
  // Serial.println(" cm");
  switch02 = distance02 >= 30;

  sendTrigger(trigPin03);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration03 = pulseIn(echoPin03, HIGH);
  // Calculating the distance
  distance03 = duration03 * 0.017; // Speed of sound wave divided by 2 (go and back)

  sendTrigger(trigPin04);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration04 = pulseIn(echoPin04, HIGH);
  // Calculating the distance
  distance04 = duration04 * 0.017; // Speed of sound wave divided by 2 (go and back)

  sendTrigger(trigPin05);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration05 = pulseIn(echoPin05, HIGH);
  // Calculating the distance
  distance05 = duration05 * 0.017; // Speed of sound wave divided by 2 (go and back)

  sendTrigger(trigPin06);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration06 = pulseIn(echoPin06, HIGH);
  // Calculating the distance
  distance06 = duration06 * 0.017; // Speed of sound wave divided by 2 (go and back)

  sendTrigger(trigPin07);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration07 = pulseIn(echoPin07, HIGH);
  // Calculating the distance
  distance07 = duration07 * 0.017; // Speed of sound wave divided by 2 (go and back)

  sendTrigger(trigPin08);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration08 = pulseIn(echoPin08, HIGH);
  // Calculating the distance
  distance08 = duration08 * 0.017; // Speed of sound wave divided by 2 (go and back)

  sendTrigger(trigPin09);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration09 = pulseIn(echoPin09, HIGH);
  // Calculating the distance
  distance09 = duration09 * 0.017; // Speed of sound wave divided by 2 (go and back)

  sendTrigger(trigPin10);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration10 = pulseIn(echoPin10, HIGH);
  // Calculating the distance
  distance10 = duration10 * 0.017; // Speed of sound wave divided by 2 (go and back)

  sendTrigger(trigPin11);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration11 = pulseIn(echoPin11, HIGH);
  // Calculating the distance
  distance11 = duration11 * 0.017; // Speed of sound wave divided by 2 (go and back)

  sendTrigger(trigPin12);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration12 = pulseIn(echoPin12, HIGH);
  // Calculating the distance
  distance12 = duration12 * 0.017; // Speed of sound wave divided by 2 (go and back)

  sendTrigger(trigPin13);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration13 = pulseIn(echoPin13, HIGH);
  // Calculating the distance
  distance13 = duration13 * 0.017; // Speed of sound wave divided by 2 (go and back)

  sendTrigger(trigPin14);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration14 = pulseIn(echoPin14, HIGH);
  // Calculating the distance
  distance14 = duration14 * 0.017; // Speed of sound wave divided by 2 (go and back)

  sendTrigger(trigPin15);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration15 = pulseIn(echoPin15, HIGH);
  // Calculating the distance
  distance15 = duration15 * 0.017; // Speed of sound wave divided by 2 (go and back)

  switch01 = (distance01 < 30);
  switch02 = (distance02 < 30);
  switch03 = (distance03 < 30);
  switch04 = (distance04 < 30);
  switch05 = (distance05 < 30);
  switch06 = (distance06 < 30);
  switch07 = (distance07 < 30);
  switch08 = (distance08 < 30);
  switch09 = (distance09 < 30);
  switch10 = (distance10 < 30);
  switch11 = (distance11 < 30);
  switch12 = (distance12 < 30);
  switch13 = (distance13 < 30);
  switch14 = (distance14 < 30);
  switch15 = (distance15 < 30);
  
  // Displays the distance on the Serial Monitor
  // Serial.print("Distance: ");
  // Serial.println(distance);
  // Serial.println(distance1);
  // Serial.println(distance2);
  // Serial.println(distance3);
  // Serial.println(distance4);
  // Serial.println(distance8);
  
  // Serial.println(" cm");
  
  if (switch01 || switch02 || switch03 || switch04 || switch05 || switch06 || switch07 || switch08 || switch09 || switch10 || switch11 || switch12 || switch13 || switch14 || switch15) {
    digitalWrite(logicWrite, HIGH);
    timer = 0;
  } else {
    digitalWrite(logicWrite, LOW);
    timer++;
  }

  if (switch15) {
    setAllPixels(pixels15, NUMPIXELS, 95, 239, 10, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels15, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels15, NUMPIXELS, delayval);
  }

  if (switch14) {
    setAllPixels(pixels14, NUMPIXELS, 95, 239, 10, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels14, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels14, NUMPIXELS, delayval);
  }

  if (switch13) {
    setAllPixels(pixels13, NUMPIXELS, 95, 239, 10, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels13, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels13, NUMPIXELS, delayval);
  }

  if (switch12) {
    setAllPixels(pixels12, NUMPIXELS, 95, 239, 10, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels12, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels12, NUMPIXELS, delayval);
  }

  if (switch11) {
    setAllPixels(pixels11, NUMPIXELS, 130, 249, 0, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels11, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels11, NUMPIXELS, delayval);
  }

  if (switch10) {
    setAllPixels(pixels10, NUMPIXELS, 195, 243, 0, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels10, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels10, NUMPIXELS, delayval);
  }

  if (switch09) {
    setAllPixels(pixels09, NUMPIXELS, 250, 234, 5, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels09, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels09, NUMPIXELS, delayval);
  }

  if (switch08) {
    setAllPixels(pixels08, NUMPIXELS, 190, 115, 0, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels08, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels08, NUMPIXELS, delayval);
  }

  if (switch07) {
    setAllPixels(pixels07, NUMPIXELS, 255, 70, 0, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels07, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels07, NUMPIXELS, delayval);
  }

  if (switch06) {
    setAllPixels(pixels06, NUMPIXELS, 255, 0, 40, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels06, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels06, NUMPIXELS, delayval);
  }

  if (switch05) {
    setAllPixels(pixels05, NUMPIXELS, 180, 0, 57, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels05, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels05, NUMPIXELS, delayval);
  }

  if (switch04) {
    setAllPixels(pixels04, NUMPIXELS, 95, 50, 220, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels04, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels04, NUMPIXELS, delayval);
  }

  if (switch03) {
    setAllPixels(pixels03, NUMPIXELS, 95, 0, 255, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels03, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels03, NUMPIXELS, delayval);
  }
  
  if (switch02) {
    setAllPixels(pixels02, NUMPIXELS, 70, 92, 150, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels02, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels02, NUMPIXELS, delayval);
  }
  
  if (switch01) {
    setAllPixels(pixels01, NUMPIXELS, 30, 50, 235, delayval);
  } else if (digitalRead(logicRead)) {
    setAllPixelsWhite(pixels01, NUMPIXELS, delayval);
  } else if (timer > 100) {
    turnOffAllPixels(pixels01, NUMPIXELS, delayval);
  }
}
