// javadi sim8001.h ra test kon


#include <Sim800l.h>
#include <SoftwareSerial.h> //is necesary for the library!! 
Sim800l Sim800l;  //to declare the library
char* text;
char* number;
bool error; //to catch the response of sendSms


void setup(){
  Serial.begin(9600);
  Sim800l.begin();// initializate the library.
  delay(2000); 
  text="Teste Akhar2";  //text for the message. 
  number="09129349758";//change to a valid number.
  Serial.println("Sending...");
  error=Sim800l.sendSms(number,text);
  Serial.println(error);
  // OR 
  //Sim800l.sendSms("+540111111111","the text go here")
}

void loop(){
  //do nothing
}
