#include "Repartidor.h"

Repartidor::Repartidor(string nombre,int edad, int numeroIdentidad,string dificultad,int dinero,Baraja* baraja){
    this->dificultad=dificultad;
    this->dinero=dinero;
    this->nombre=nombre;
    this->edad=edad;
    this->numeroIdentidad=numeroIdentidad;
    this->baraja=baraja;
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

Baraja* Repartidor::getBaraja(){
	return baraja;
}

void Repartidor::metodo(){
	
}