#include "Baraja.h"

Baraja::Baraja(){
	Carta* carta;
	carta->setSimbolo("♥");
	carta->setColor("Rojo");
	for (int i = 1; i <= 13; ++i)
	{
		if(i==1){
			carta->setValor("A");
			cartas.push_back(carta);
		}else if(i==11){
			carta->setValor("J");
			cartas.push_back(carta);
		}else if(i==12){
			carta->setValor("Q");
			cartas.push_back(carta);
		}else if(i==13){
			carta->setValor("K");
			cartas.push_back(carta);
		}else{
			carta->setValor(""+i);
			cartas.push_back(carta);
		}
	}
	carta->setSimbolo("♦");
	carta->setColor("Rojo");
	for (int i = 1; i <= 13; ++i)
	{
		if(i==1){
			carta->setValor("A");
			cartas.push_back(carta);
		}else if(i==11){
			carta->setValor("J");
			cartas.push_back(carta);
		}else if(i==12){
			carta->setValor("Q");
			cartas.push_back(carta);
		}else if(i==13){
			carta->setValor("K");
			cartas.push_back(carta);
		}else{
			carta->setValor(""+i);
			cartas.push_back(carta);
		}
	}
	carta->setSimbolo("♠");
	carta->setColor("Negro");
	for (int i = 1; i <= 13; ++i)
	{
		if(i==1){
			carta->setValor("A");
			cartas.push_back(carta);
		}else if(i==11){
			carta->setValor("J");
			cartas.push_back(carta);
		}else if(i==12){
			carta->setValor("Q");
			cartas.push_back(carta);
		}else if(i==13){
			carta->setValor("K");
			cartas.push_back(carta);
		}else{
			carta->setValor(""+i);
			cartas.push_back(carta);
		}
	}
	carta->setSimbolo("♣");
	carta->setColor("Negro");
	for (int i = 1; i <= 13; ++i)
	{
		if(i==1){
			carta->setValor("A");
			cartas.push_back(carta);
		}else if(i==11){
			carta->setValor("J");
			cartas.push_back(carta);
		}else if(i==12){
			carta->setValor("Q");
			cartas.push_back(carta);
		}else if(i==13){
			carta->setValor("K");
			cartas.push_back(carta);
		}else{
			carta->setValor(""+i);
			cartas.push_back(carta);
		}
	}

}
vector<Carta*> Baraja :: getCartas(){
	return cartas;
}

void Baraja :: setCartas(vector<Carta*> cartas){
	this->cartas=cartas;
}
