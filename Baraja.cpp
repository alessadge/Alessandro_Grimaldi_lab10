#include "Baraja.h"

Baraja::Baraja(){
}
vector<Carta*> Baraja :: getCartas(){
	return cartas;
}

void Baraja :: setCartas(vector<Carta*> cartas){
	this->cartas=cartas;
}

void Baraja :: setCarta(Carta* carta){
	
}