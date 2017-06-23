#include "Mesa.h"

Mesa::Mesa(int numeroMesas,string tipo, Jugador* jugador, Repartidor* repartidor){
    this->numeroMesas=numeroMesas;
    this->tipo=tipo;
    this->jugador=jugador;
    this->repartidor=repartidor;
}
Mesa::Mesa(){

}void Mesa::setNumeroMesas(int numeroMesas){
   this-> numeroMesas=numeroMesas;
}
int Mesa::getNumeroMesas(){
   return numeroMesas;
}
void Mesa::setTipo(string tipo){
   this-> tipo=tipo;
}
string Mesa::getTipo(){
   return tipo;
}
Jugador* Mesa:: getJugador(){
	return jugador;
}
void Mesa::setJugador(Jugador* jugador){
	this->jugador=jugador;
}
Repartidor* Mesa::getRepartidor(){
	return repartidor;
}
void Mesa::setRepartidor(Repartidor* repartidor){
	this->repartidor=repartidor;
}
