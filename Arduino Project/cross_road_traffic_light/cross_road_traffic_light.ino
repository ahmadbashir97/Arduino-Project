int red = 10;
int yellow = 9;
int green = 8;
int red1 = 11;
int green1 = 13;
int button = 12;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(green1, OUTPUT);
  
  pinMode(button, INPUT);
  digitalWrite(green,HIGH);
  digitalWrite(red1,HIGH);
  
}

void loop() {
   if(digitalRead(button) == HIGH) {
      delay(5);
    if(digitalRead(button) == HIGH){
   changeLights();
    delay(5000);
    }
   }
}
void changeLights(){
    // yellow on 3s will green off
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(3000);
    
    // red on 5s will yellow off
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(green1, HIGH);
    digitalWrite(red1, LOW);
    delay(5000);
    
    // red and yellow on 2 seconds will red is on
    digitalWrite(yellow, HIGH);
    delay(2000);
    
    // turn off red and yellow will green on 3s
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(red1, HIGH);
    digitalWrite(green1, LOW);
    delay(3000);    

}
