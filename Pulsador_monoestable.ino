/* ARDUINO UNO, COMO PLC - A. ARRANQUE Y PARADA MOTORES.
   A1.1 ARRANQUE CON PULSADOR MONOESTABLE.
   El pulsador Marcha activará Motor

creado por Miguel Lara Agosto 2019

 Este código ejemplo es de dominio público.
 
*/

// Declara variables para las Salidas Digitales y asigna pin

int motor=8; // Asigna Salida 8 al motor
int Q9=9;
int Q10=10;
int Q11=11;
int Q12=12;
int Q13=13;

// Declara variables para las Entradas Digitales y asigna pin

int marcha=2; //Asigna Entrada 2 al pulsador
int I2=3;
int I3=4;
int I4=5;
int I5=6;
int I6=7;

//Declara variables Entradas Analógicas

int QA0=A0;
int QA1=A1;
int QA2=A2;
int QA3=A3;
int QA4=A4;
int QA5=A5;


void setup() {
  // Declara los pins de Salida
 
  pinMode(motor,OUTPUT);
  pinMode(Q9,OUTPUT);
  pinMode(Q10,OUTPUT);
  pinMode(Q11,OUTPUT);
  pinMode(Q12,OUTPUT);
  pinMode(Q13,OUTPUT);

  // Declara los pins de Entrada

  pinMode(marcha,INPUT);
  pinMode(I2,INPUT);
  pinMode(I3,INPUT);
  pinMode(I4,INPUT);
  pinMode(I5,INPUT);
  pinMode(I6,INPUT);
  
  
}
  

void loop() {
  // Aquí el código que se repetirá constatemente

 digitalWrite(motor,digitalRead(marcha)); //Activa motor, segun el estado del pulsador marcha.

}
