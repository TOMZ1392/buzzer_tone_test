


void setup() {
  // put your setup code here, to run once:
pinMode(10,OUTPUT);
Serial.begin(9600);
}
uint8_t var=0;
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    if(Serial.read()=='a'){
      var=var<255?var+1:255;
      }
      if(Serial.read()=='d'){
         var=var>0?var-1:0;
        }
        Serial.println(var);
         analogWrite(10,var);
    }
    digitalWrite(10,1);
    delay(100);
   digitalWrite(10,0);
  delay(100);

}
