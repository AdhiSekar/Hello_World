
int IRpin=1;
int dist;
int t;

void setup() {
Serial.begin(9600);
}

void loop() {  
  dist = analogRead(IRpin); 
  dist=12343.85 * pow(analogRead(IRpin),-1.15);
  Serial.println(dist);            
        
}
