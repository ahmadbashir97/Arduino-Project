int red = 10;
int yellow = 9;
int green = 8;


void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {

   
   changeLights();
    delay(15000);
    }

  
void changeLights(){
    // yellow on 3s will green off
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(3000);
    
    // red on 5s will yellow off
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(5000);
    
    // red and yellow on 2 seconds will red is on
    digitalWrite(yellow, HIGH);
    delay(2000);
    
    // turn off red and yellow will green on 3s
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(3000);    

}
