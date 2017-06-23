#include "Mesa.h"

Mesa::Mesa(int numeroMesas,string tipo){
    this->numeroMesas=numeroMesas;
    this->tipo=tipo;
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
