#include "Baraja.h"

Baraja::Baraja(){
	
	for (int i = 1; i <= 10; ++i)
	{
		if(i==1){
			Carta* carta=new Carta("A","Rojo","♥");
			cartas.push_back(carta);
		}else{
			Carta* carta=new Carta(""+i,"Rojo","♥");
			cartas.push_back(carta);
		}
	}
	for (int i = 1; i <= 4; ++i)
	{
		if(i==1){
			Carta* carta=new Carta("J","Rojo","♥");
			cartas.push_back(carta);
		}
		if(i==2){
			Carta* carta=new Carta("Q","Rojo","♥");
			cartas.push_back(carta);
		}
		if(i==3){
			Carta* carta=new Carta("K","Rojo","♥");
			cartas.push_back(carta);
		}
	}
	for (int i = 1; i <= 10; ++i)
	{
		if(i==1){
			Carta* carta=new Carta("A","Rojo","♦");
			cartas.push_back(carta);
		}else{
			Carta* carta=new Carta(""+i,"Rojo","♦");
			cartas.push_back(carta);
		}
	}
	for (int i = 1; i <= 4; ++i)
	{
		if(i==1){
			Carta* carta=new Carta("J","Rojo","♦");
			cartas.push_back(carta);
		}
		if(i==2){
			Carta* carta=new Carta("Q","Rojo","♦");
			cartas.push_back(carta);
		}
		if(i==3){
			Carta* carta=new Carta("K","Rojo","♦");
			cartas.push_back(carta);
		}
	}
	for (int i = 1; i <= 10; ++i)
	{
		if(i==1){
			Carta* carta=new Carta("A","Negro","♠");
			cartas.push_back(carta);
		}else{
			Carta* carta=new Carta(""+i,"Negro","♠");
			cartas.push_back(carta);
		}
	}
	for (int i = 1; i <= 4; ++i)
	{
		if(i==1){
			Carta* carta=new Carta("J","Negro","♠");
			cartas.push_back(carta);
		}
		if(i==2){
			Carta* carta=new Carta("Q","Negro","♠");
			cartas.push_back(carta);
		}
		if(i==3){
			Carta* carta=new Carta("K","Negro","♠");
			cartas.push_back(carta);
		}
	}
	for (int i = 1; i <= 10; ++i)
	{
		if(i==1){
			Carta* carta=new Carta("A","Negro","♣");
			cartas.push_back(carta);
		}else{
			Carta* carta=new Carta(""+i,"Negro","♣");
			cartas.push_back(carta);
		}
	}
	for (int i = 1; i <= 4; ++i)
	{
		if(i==1){
			Carta* carta=new Carta("J","Negro","♣");
			cartas.push_back(carta);
		}
		if(i==2){
			Carta* carta=new Carta("Q","Negro","♣");
			cartas.push_back(carta);
		}
		if(i==3){
			Carta* carta=new Carta("K","Negro","♣");
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
