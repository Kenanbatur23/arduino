#include<IRremote.h>

IRrecv mahmud(8);
decode_results results;
void setup() {
 Serial.begin(9600);
 mahmud.enableIRIn();
 pinMode(7, OUTPUT);
 digitalWrite(7, HIGH); // nasıl baslaması gerketigi
 
}

void loop() {
if (mahmud.decode(&results))
{
  Serial.println(results.value);//ARAYA NE YAPILCAKSA YAZILIR
  if(results.value==551520375)
digitalWrite(7, HIGH);

if(results.value==551504055)
digitalWrite(7, LOW);
mahmud.resume();
}
}

