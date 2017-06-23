#include "Mesa de Blackjack.h"

Mesa de Blackjack::Mesa de Blackjack(int numeroMesas,string tipo){
    this->numeroMesas=numeroMesas;
    this->tipo=tipo;
}
Mesa de Blackjack::Mesa de Blackjack(){

}void Mesa de Blackjack::setNumeroMesas(int numeroMesas){
   this-> numeroMesas=numeroMesas;
}
int Mesa de Blackjack::getNumeroMesas(){
   return numeroMesas;
}
void Mesa de Blackjack::setTipo(string tipo){
   this-> tipo=tipo;
}
string Mesa de Blackjack::getTipo(){
   return tipo;
}
