/*
  Created by Om Ambarkar
  on 29Jan2021
  LM393 Sound Sensor

*/

void setup() {
Serial.begin(9600);
pinMode (5, INPUT);
}

int clap(){
  return digitalRead(5);
  }

 void print(String text){
  Serial.println(text);
  }

void loop() {
 
  if(clap()==1){
//  Serial.println("Single Clapped");
  delay(100);
for (int j=0;j<1100;j++){
  if(clap()==0){
    for (int i=0;i<1100;i++){
      if(clap()==1){
        
        Serial.println("Double Clapped");
        delay(400);
        break;
        }
        delay(1);
           }
    break;
      }
  delay(1);
     }
  }
delay(1);

}
