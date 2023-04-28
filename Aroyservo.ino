#include <Adafruit_NeoPixel.h>//Incluimos la librería en el código
#define PIN 6
#define pixeles 7
#include <Keypad.h>
#include <Servo.h>
Servo servo1;

const byte filas = 4;
const byte columnas = 4;
char letras[filas][columnas]= {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}

};

byte pinesf[filas] = {13,12,11,10};
byte pinesc[columnas] = {A0,A1,A2,A3};
Keypad teclado = Keypad(makeKeymap(letras),pinesf,pinesc,filas,columnas);
char est;

Adafruit_NeoPixel pixels(24, 5);

#define esperar 300

void setup() {
 pixels.begin();
 Serial.begin(9600);
 servo1.attach(3);

}

void loop() {
 est = teclado.getKey();

Serial.println(est);

 if(est == 'A'){
 pixels.clear();
pixels.setPixelColor(2, pixels.Color(15, 30, 45));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(3, pixels.Color(24, 158, 200));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(4, pixels.Color(41, 79, 190));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(5, pixels.Color(34, 0, 123));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(6, pixels.Color(0, 0, 0));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(1, pixels.Color(200, 200, 200));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(0, pixels.Color(150, 150, 1500));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(2, pixels.Color(150, 100, 200));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(3, pixels.Color(150, 184, 200));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(4, pixels.Color(170, 130, 75));
 pixels.show();
 delay(esperar);
 }

 if(est == 'B'){
 pixels.clear();
 pixels.setPixelColor(6, pixels.Color(150, 66, 89));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(3, pixels.Color(45, 150, 74));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(2, pixels.Color(38, 30, 150));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(1, pixels.Color(150, 0, 150));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(5, pixels.Color(150, 200, 150));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(4, pixels.Color(0, 150, 150));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(0, pixels.Color(150, 200, 0));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(2, pixels.Color(150, 100, 30));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(3, pixels.Color(150, 0, 200));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(4, pixels.Color(150, 100, 175));
 pixels.show();
 delay(esperar);
 }

 if(est == 'C'){
 pixels.setPixelColor(0, pixels.Color(200, 10, 0));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(6, pixels.Color(22, 145, 0));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(1, pixels.Color(145, 33, 22));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(5, pixels.Color(90, 91, 150));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(2, pixels.Color(150, 64, 150));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(4, pixels.Color(34, 200, 150));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(3, pixels.Color(200, 200, 5));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(1, pixels.Color(15, 103, 30));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(4, pixels.Color(98, 14, 200));
 pixels.show();
 delay(esperar);
 pixels.setPixelColor(0, pixels.Color(150, 22, 175));
 pixels.show();
 delay(esperar);
 }

 if(estad == 'D'){
 for(int i=0; i<25;i++){
 pixels.setPixelColor(i, 477, 0, 175);
 pixels.show();
 delay(esperar);
 } 
 }

if(estado == '1'){
 servo1.write(300);
delay(1000);
 servo1.write(0);
}

if(estado == '2'){
 servo1.write(15);
delay(1000);
 servo1.write(0);
}

if(estado == '3'){
 servo1.write(180);
delay(1000);
 servo1.write(0);
}

if(estado == '4'){
 servo1.write(360);
delay(1000);
 servo1.write(0);
}

if(estado == '5'){
 servo1.write(75);
delay(1000);
 servo1.write(0);
}

if(estado == '6'){
 servo1.write(90);
delay(1000);
 servo1.write(0);
}

if(estado == '7'){
 servo1.write(100);
delay(1000);
 servo1.write(0);
}

if(estado == '8'){
 servo1.write(35);
 delay(1000);
 servo1.write(0);
}

if(estado == '9'){
 servo1.write(45);
 delay(1000);
 servo1.write(0);
}

if(estado == '0'){
 servo1.write(10);
 delay(1000);
 servo1.write(0);
}