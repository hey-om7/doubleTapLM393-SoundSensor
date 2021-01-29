/*
  Created by Om Ambarkar
  on 28Jan2021
  LM393 Sound Sensor

*/

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (5, INPUT);
}

void loop() {
 
  if(digitalRead(5)==1){
//  Serial.println("clapped");
  delay(400);
//  Serial.println(digitalRead(5));
for (int i=0;i<1100;i++){
    if(digitalRead(5)==1){
    Serial.println("Double Clap Detected");
    delay(1000);
    break;
    
    }
    delay(1);
  }

  }

//    if(digitalRead(5)==1){
//  Serial.println(digitalRead(5));
//    }
delay(1);

}
