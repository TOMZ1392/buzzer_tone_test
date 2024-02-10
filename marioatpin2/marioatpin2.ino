const int buzzer = 2; //buzzer to arduino pin 9


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}

void loop(){
  int i=0,buzz=100;
  
 while(i<100){
  tone(buzzer, 4098); 
  delay(100);       
  noTone(buzzer);     
  delay(400);    
 i++;
 }   
  
}
