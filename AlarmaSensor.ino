#include <Keypad.h>
const int FILAS = 4;
const int COLUMNAS= 4;
const int buser = 9;
const int R = 6;
int lee;
char keys[FILAS][COLUMNAS]={
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}
};
byte pinesFila[FILAS]={13,12,11,10};
byte pinesColumna[COLUMNAS]={A0,A1,A2,A3};
Keypad teclado=Keypad(makeKeymap(keys), pinesFila, pinesColumna,FILAS,COLUMNAS);
char teclaPrecionada;

char pass[6]="2468C"; 
char ingresaPass[6];
int indice=0;
#define salida(pin) pinMode(pin,OUTPUT);
#define entrada(pin) pinMode(pin,INPUT);
#define encender_b(pin) tone(pin,100);
#define apagar_b(pin) noTone(pin);
void setup()
{
Serial.begin(9600);
entrada(R);
salida(buser);
encender_b(buser);
apagar_b(buser);
}

void loop(){
teclaPrecionada=teclado.getKey();
if(teclaPrecionada){
ingresaPass[indice]=teclaPrecionada;
indice++; 
Serial.print(teclaPrecionada);
}
lee=digitalRead(R);
if (lee == 1)
{
encender_b(buser);
}

if(indice==5){ 
if(strcmp(pass,ingresaPass)==0){
apagar_b(buser);
delay(5000);
Serial.println(" Acceso permitido");
}
indice=0;
}
}