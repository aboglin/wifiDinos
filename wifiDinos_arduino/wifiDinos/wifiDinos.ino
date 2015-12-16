// libraries
#include <CapacitiveSensor.h>

/*
 * Wifi-enabled Dinosaur Ornaments
 * Rachel Sheketoff and Ceara Byrne
 */
 
// declarations

// Capactive
CapacitiveSensor   cs_4_6 = CapacitiveSensor(4,6);        // 10M resistor between pins 4 & 6, pin 6 is sensor pin, add a wire and or foil


void setup() {
  Serial.begin(9600);
  
}

void loop() {
  
  
  
  // capacitive
  long start = millis();
  long total = cs_4_6.capacitiveSensor(30);
  Serial.print(millis()-start);
  Serial.print("\t");
  Serial.println(total);
  delay(10);
  
}


