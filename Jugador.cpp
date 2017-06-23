#include "Jugador.h"

Jugador::Jugador(string nombre,int edad,int numeroIdentidad,string procedencia,string apodo,int dinero){
    this->procedencia=procedencia;
    this->apodo=apodo;
    this->dinero=dinero;
    this->nombre=nombre;
    this->edad=edad;
    this->numeroIdentidad=numeroIdentidad;
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
