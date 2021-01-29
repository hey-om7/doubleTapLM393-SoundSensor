/*
  Created by Om Ambarkar
  on 28Jan2021
  LM393 Sound Sensor

*/

void setup() {

Serial.begin(9600);
pinMode (5, INPUT);
}

void loop() {
 
  if(digitalRead(5)==1){
//  Serial.println("single clapped");
  delay(400);
for (int i=0;i<1100;i++){
    if(digitalRead(5)==1){
    Serial.println("Double Clap Detected");
    delay(1000);
    break;
    
    }
    delay(1);
  }
    }
delay(1);

}
