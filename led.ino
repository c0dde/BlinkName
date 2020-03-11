int led = D7; //define D7 as led

String firstName = "yiu"; // define first name

int len=0; // length 

int i=0; // index


void setup() {

  pinMode(led, OUTPUT); // tell our device we will using D7 as output

}



void loop() {
   len = firstName.length();
   i=0;
   
   // loop over each letter of the first name
   while (i < len)
   {
       //Start determine charater
       
       //if the current letter is a, then blink short, long.
       if (firstName.charAt(i) == 'a'){ 
digitalWrite(led,HIGH); 
delay(200); 
digitalWrite(led,LOW); 
delay(200); 
digitalWrite(led,HIGH); 
delay(1000); 
digitalWrite(led,LOW); 
delay(100);} 


if (firstName.charAt(i) == 'b'){
  digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}


if (firstName.charAt(i) == 'c'){
  digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}


if (firstName.charAt(i) == 'd'){
  digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}


if (firstName.charAt(i) == 'e') {
  digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}


if (firstName.charAt(i) == 'f'){
  digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}


if (firstName.charAt(i) == 'g'){
  digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}


if (firstName.charAt(i) == 'h'){
  digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}


if (firstName.charAt(i) == 'i'){
  digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}


if (firstName.charAt(i) == 'j'){
  digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 'k'){
  digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 'l'){
  digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 'm'){
  digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 'n'){
  digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 'o'){
  digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 'p'){
  digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 'q'){
  digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 'r'){
  digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 's'){
  digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) =='t'){
  digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) =='u'){
  digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 'v'){
  digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 'w'){
  digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 'x'){
  digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(100);}

if (firstName.charAt(i) == 'y'){
  digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(100);}


if (firstName.charAt(i) == 'z'){
 digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(100);}
       
       // index + 1
       i=i+1;
       
       delay(200);
   }
   delay(2000);
       
   

}

