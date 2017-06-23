#include "Repartidor.h"

Repartidor::Repartidor(string nombre,int edad, int numeroIdentidad,string dificultad,int dinero){
    this->dificultad=dificultad;
    this->dinero=dinero;
    this->nombre=nombre;
    this->edad=edad;
    this->numeroIdentidad=numeroIdentidad;
}
Repartidor::Repartidor(){

}void Repartidor::setDificultad(string dificultad){
   this-> dificultad=dificultad;
}
string Repartidor::getDificultad(){
   return dificultad;
}
void Repartidor::setDinero(int dinero){
   this-> dinero=dinero;
}
int Repartidor::getDinero(){
   return dinero;
}
