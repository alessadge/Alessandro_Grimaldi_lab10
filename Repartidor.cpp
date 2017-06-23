#include "Repartidor.h"

Repartidor::Repartidor(string dificultad,int dinero){
    this->dificultad=dificultad;
    this->dinero=dinero;
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
