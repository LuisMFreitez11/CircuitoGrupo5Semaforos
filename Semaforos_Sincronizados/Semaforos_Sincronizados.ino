/*
Luis Miguel Freitez Hernandez C.I 31.099.786
Angello Caleb Aponte Onofrietti C.I 31.467.289
Samuel Alejandro Mosquera Rodriguez C.I 31.467.191
Anthony Alfonso Bilbao Terán C.I 30.227.249
Carlos Torrealba C.I 30.553.969
6to B INFORMATICA
*/

int Semaforo_Rojo_1 = 12;    //Asignacion del puerto digital 12 para luz roja semaforo 1
int Semaforo_Amarillo_1 = 11; //Asignacion del puerto digital 11 para luz amarilla semaforo 1
int Semaforo_Verde_1 = 10;    //Asignacion del puerto digital 10 para luz verde semaforo 1

int Peatonal_Rojo_1 = 9;     //Asignacion del puerto digital 9 para luz roja peatonal 1
int Peatonal_Verde_1 = 8;    //Asignacion del puerto digital 8 para luz verde peatonal 1

int Semaforo_Rojo_2 = 7;     //Asignacion del puerto digital 7 para luz roja semaforo 2
int Semaforo_Amarillo_2 = 6; //Asignacion del puerto digital 6 para luz amarilla semaforo 2
int Semaforo_Verde_2 = 5;    //Asignacion del puerto digital 5 para luz verde semaforo 2

int Peatonal_Rojo_2 = 4;     //Asignacion del puerto digital 4 para luz roja peatonal 2
int Peatonal_Verde_2 = 3;    //Asignacion del puerto digital 3 para luz verde peatonal 2

void setup() {
  //Configuracion de los puertos digitales como salida
  pinMode(Semaforo_Rojo_1,      OUTPUT);
  pinMode(Semaforo_Amarillo_1,  OUTPUT);
  pinMode(Semaforo_Verde_1,     OUTPUT);
  pinMode(Peatonal_Rojo_1,      OUTPUT);
  pinMode(Peatonal_Verde_1,     OUTPUT);
  pinMode(Semaforo_Rojo_2,      OUTPUT);
  pinMode(Semaforo_Amarillo_2,  OUTPUT);
  pinMode(Semaforo_Verde_2,     OUTPUT);
  pinMode(Peatonal_Rojo_2,      OUTPUT);
  pinMode(Peatonal_Verde_2,     OUTPUT);
}

void loop() {
  digitalWrite(Semaforo_Verde_1,     HIGH); //Led semaforo verde 1 encendido.
  digitalWrite(Peatonal_Rojo_1,      HIGH); //Led peatonal rojo 1 encendido.
  digitalWrite(Semaforo_Rojo_2,      HIGH); //Led semaforo rojo 2 encendido.
  digitalWrite(Peatonal_Verde_2,     HIGH); //Led peatonal verde 2 encendido.
  delay(3000);                              //Espera de 3 segundos

  digitalWrite(Semaforo_Verde_1,      LOW); //Led semaforo verde 1 apagado.
  digitalWrite(Semaforo_Amarillo_1,  HIGH); //Led semaforo amarillo 1 encendido.
  delay(1000);                              //Espera de 1 segundo

  digitalWrite(Semaforo_Amarillo_1,   LOW); //Led semaforo amarillo 1 apagado.
  digitalWrite(Semaforo_Rojo_1,      HIGH); //Led semaforo rojo 1 encendido.
  digitalWrite(Peatonal_Rojo_1,       LOW); //Led peatonal rojo 1 apagado.
  digitalWrite(Peatonal_Verde_1,     HIGH); //Led peatonal verde 1 encendido.
  digitalWrite(Semaforo_Rojo_2,       LOW); //Led semaforo rojo 2 apagado.
  digitalWrite(Semaforo_Verde_2,     HIGH); //Led semaforo verde 2 encendido.
  digitalWrite(Peatonal_Verde_2,      LOW); //Led peatonal verde 2 apagado.
  digitalWrite(Peatonal_Rojo_2,      HIGH); //Led peatonal rojo 2 encendido.
  delay(3000);                             //Espera de 3 segundos

  digitalWrite(Semaforo_Verde_2,      LOW); //Led semaforo verde 2 apagado.
  digitalWrite(Semaforo_Amarillo_2,  HIGH); //Led semaforo amarillo 2 encendido.
  delay(1000);                             //Espera de 1 segundo

  digitalWrite(Semaforo_Rojo_1,       LOW); //Led semaforo rojo 1 apagado.
  digitalWrite(Semaforo_Verde_1,     HIGH); //Led semaforo verde 1 encendido.
  digitalWrite(Peatonal_Verde_1,      LOW); //Led peatonal verde 1 apagado.
  digitalWrite(Peatonal_Rojo_1,      HIGH); //Led peatonal rojo 1 encendido.
  digitalWrite(Semaforo_Amarillo_2,   LOW); //Led semaforo amarillo 2 apagado.
  digitalWrite(Semaforo_Rojo_2,      HIGH); //Led semaforo rojo 2 encendido.
  digitalWrite(Peatonal_Rojo_2,       LOW); //Led peatonal rojo 2 apagado.
  digitalWrite(Peatonal_Verde_2,     HIGH); //Led peatonal verde 2 encendido.
}
