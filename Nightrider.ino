#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> 
#endif
#define PIN       2 
#define NUMPIXELS 16

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 200

void setup() {

#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif

  pixels.setBrightness(50);
  Serial.begin(9600);
  pixels.begin();
}

void loop() {

  for(int i=0; i<16; i++) {

    int j=i+2;
    int k=i+1; 
   
    pixels.setPixelColor(j, pixels.Color(75, 0, 0));

    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    
    pixels.setPixelColor(k, pixels.Color(75, 0, 0));

    Serial.print(i); Serial.print(" ");
    Serial.print(k); Serial.print(" ");
    Serial.println(j);

    pixels.show();   // Send the updated pixel colors to the hardware.
    pixels.clear();

   // while(int i>16);{

    
      if(i==14){

      int n=0;
      int m=15;


    pixels.setPixelColor(m, pixels.Color(75, 0, 0));

    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    
    pixels.setPixelColor(n, pixels.Color(75, 0, 0));


    }
    pixels.clear();
    pixels.show();   // Send the updated pixel colors to the hardware.
    

      if(i==15){
        int m=1;
        int n=0;

    pixels.setPixelColor(m, pixels.Color(75, 0, 0));

    pixels.setPixelColor(i, pixels.Color(255, 0, 0));
    
    pixels.setPixelColor(n, pixels.Color(75, 0, 0));


      }
 // Set all pixel colors to 'off'

    pixels.clear();
    pixels.show();  
    delay(DELAYVAL); // Pause before next pass through loop
    //Serial.println(i);


  }


}

    /*for(int i=17; i>=-1; i--) {

    int j=i+1;
    int k=i-1;

    pixels.setPixelColor(j, pixels.Color(75, 0, 0));

    pixels.setPixelColor(i, pixels.Color(255, 0, 0));

    pixels.setPixelColor(k, pixels.Color(75, 0, 0));


    pixels.show();  
    pixels.clear();

    delay(DELAYVAL);
     Serial.println(i);*/


  

