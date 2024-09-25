/*
 Program za automatski lezeci policajac
 Projekat kreiran u okviru maturskog rada
 Autori: Dzenit Vildic
         Mirza Ahmedbegovic
         Robert Pavic
 Mentor: Sejfudin Fudo Agic
 Datum pocetka izrade: 14.01.2019.
 Datum zavretka izrade: 29.01.2019.
 */

// Deklaracija koristenih varijabli i pinova

#include<Servo.h>
Servo myservo;
int servo = 9;
int pos = 0;
int crvena = 8;
int zelena = 10;
int fotp = A0;
int fotp2 = A1;
int analog, analog2;
unsigned long detekt=0;
unsigned long detektend=0;

// Pocetak glavnog programa

void setup() {

Serial.begin(9600);         // Pocetak serijske komunikacije sa racunarom
pinMode(crvena, OUTPUT);  // Omogucavanje izlaznog pina za LED upozorenja
pinMode(zelena, OUTPUT);  // Omogucavanje izlaznog pina za LED upozorenja
pinMode(fotp, INPUT);       // Omogucavanje ulaznog pina za jedan fotootpornik
pinMode(fotp2, INPUT);      // Omogucavanje ulaznog pina za drugi fotootpornik
myservo.attach(servo);          // Omogucavanje servo motora

}

void loop() {

digitalWrite(zelena, HIGH);
  
analog=analogRead(fotp);            // Ocitavanje stanja na jednog fotootporniku
analog2=analogRead(fotp2);          // Ocitavanje stanja na drugom fotootporniku
Serial.println(analog);   

// Ispitivanje stanja na ulazima/fotootpornicima

if(analog<=550){
  detekt = millis();
  delay(100);
}
  else if(analog2<=500){
    detektend = millis();
    delay(100);
  }            
  

// Podizanje i spustanje lezeceg policajca
                                                                                                                                          
  if(detektend-detekt<=600 && detektend-detekt>=10){

      digitalWrite(zelena, LOW);
      digitalWrite(crvena, HIGH);
      
      myservo.write(180);
      delay(825);

      myservo.write(90);
      delay(4000);

      myservo.write(180);
      delay(825);

      myservo.write(90);
      delay(10);

      digitalWrite(crvena, LOW);
    
    detekt=0;
    detektend=0;
     
}
}
