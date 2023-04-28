#include <Keypad.h>

char A=3,B=2,C=6,D=9,E=8,F=5,G=4;

const byte filas = 4;
const byte columnas = 4;
char letras[filas][columnas]= {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}

};

byte pinesf[filas] = {A0,A1,A2,A3};
byte pinesc[columnas] = {13,12,11,10};
Keypad teclado = Keypad(makeKeymap(letras),pinesf,pinesc,filas,columnas);
char Tado;

void setup(){
Serial.begin(9600);
}

void loop(){

Tado = teclado.getKey();

Serial.println(Tado);

if(Tado == '1'){
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
delay(1000);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
}

if(Tado == '2'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(G,HIGH);
digitalWrite(E,HIGH);
digitalWrite(D,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(G,LOW);
digitalWrite(E,LOW);
digitalWrite(D,LOW);
}

if(Tado == '3'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(G,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(G,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
}

if(Tado == '4'){
digitalWrite(F,HIGH);
digitalWrite(B,HIGH);
digitalWrite(G,HIGH);
digitalWrite(C,HIGH);
delay(1000);
digitalWrite(F,LOW);
digitalWrite(B,LOW);
digitalWrite(G,LOW);
digitalWrite(C,LOW);
}

if(Tado == '5'){
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
}

if(Tado == '6'){
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
}

 if(Tado == '7'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
}

 if(Tado == '8'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
}
 
 if(Tado == '9'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
}

 if(Tado == '0'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
}  

 if(Tado == 'A'){
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(B,HIGH);
digitalWrite(G,HIGH);
digitalWrite(E,HIGH);
digitalWrite(C,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(F,LOW);
digitalWrite(B,LOW);
digitalWrite(G,LOW);
digitalWrite(E,LOW);
digitalWrite(C,LOW);
}  

 if(Tado == 'B'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
}  
  
 if(Tado == 'C'){
digitalWrite(A,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
}  
  
 if(Tado == 'D'){
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
}  
  
 if(Tado == '#'){
digitalWrite(A,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
}
  
 if(Tado == '*'){
digitalWrite(A,HIGH);
digitalWrite(E,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(1000);
digitalWrite(A,LOW);
digitalWrite(E,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
}  
}