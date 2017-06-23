#include "Carta.h"
#include <stdio.h>
#include <stdlib.h> 

Carta::Carta(string valor,string simbolo,string color){
    this->valor=valor;
    this->simbolo=simbolo;
    this->color=color;
}
Carta::Carta(){

}void Carta::setValor(string valor){
   this-> valor=valor;
}
string Carta::getValor(){
   return valor;
}
int Carta::getValorInt(){
   int valorInt;
   if(valor=="A"){
   	valorInt=1;
   }else
   if(valor=="J"){
   		valorInt=11;
   }else
   if(valor=="Q"){
   		valorInt=12;
   }else
   if(valor=="K"){
   		valorInt=13;
   }else{
   		valorInt=atoi(valor.c_str());
   }
   
   return valorInt;
}
void Carta::setSimbolo(string simbolo){
   this-> simbolo=simbolo;
}
string Carta::getSimbolo(){
   return simbolo;
}
void Carta::setColor(string color){
   this-> color=color;
}
string Carta::getColor(){
   return color;
}
