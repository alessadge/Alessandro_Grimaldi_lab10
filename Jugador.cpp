#include "Jugador.h"

Jugador::Jugador(string procedencia,string apodo,int dinero){
    this->procedencia=procedencia;
    this->apodo=apodo;
    this->dinero=dinero;
}
Jugador::Jugador(){

}void Jugador::setProcedencia(string procedencia){
   this-> procedencia=procedencia;
}
string Jugador::getProcedencia(){
   return procedencia;
}
void Jugador::setApodo(string apodo){
   this-> apodo=apodo;
}
string Jugador::getApodo(){
   return apodo;
}
void Jugador::setDinero(int dinero){
   this-> dinero=dinero;
}
int Jugador::getDinero(){
   return dinero;
}
