int tonePin = 9;

void setup() 
{
  Serial.begin(9600);         
}

void loop()
{
  if(Serial.available()>0)
    {
      char data = Serial.read(); 
      Serial.println(data);    
      switch (data)
      {
        case '0':
                tone(tonePin, 587, 200.0);
    delay(800.0);
    tone(tonePin, 293, 25.0);
    delay(100.0);
    delay(100.0);
    tone(tonePin, 293, 25.0);
    delay(100.0);
    delay(100.0);
    tone(tonePin, 293, 25.0);
    delay(100.0);
    delay(100.0);
    tone(tonePin, 293, 25.0);
    delay(100.0);
    delay(100.0);
    tone(tonePin, 220, 100.0);
    delay(400.0);
    tone(tonePin, 329, 50.0);
    delay(200.0);
    delay(200.0);
    tone(tonePin, 369, 25.0);
    delay(100.0);
    delay(100.0);
    tone(tonePin, 369, 25.0);
    delay(100.0);
    delay(100.0);
    tone(tonePin, 369, 25.0);
    delay(100.0);
    delay(100.0);
    tone(tonePin, 369, 25.0);
    delay(100.0);
    delay(100.0);
    tone(tonePin, 369, 100.0);
    delay(400.0);
    tone(tonePin, 391, 50.0);
    delay(200.0);
    tone(tonePin, 329, 50.0);
    delay(200.0);
           
        case '1':
                digitalWrite(LED_BUILTIN, HIGH);
                delay(200);
                digitalWrite(LED_BUILTIN, LOW);  
                delay(200);
                digitalWrite(LED_BUILTIN, HIGH);
                delay(200);
                digitalWrite(LED_BUILTIN, LOW);  
                delay(200); 
                digitalWrite(LED_BUILTIN, HIGH);
                delay(200);
                digitalWrite(LED_BUILTIN, LOW);  
                delay(200); 
                digitalWrite(LED_BUILTIN, HIGH);
                delay(200);
                digitalWrite(LED_BUILTIN, LOW);  
                delay(200);                                                   
                break;                    
      } 
    }  
}
