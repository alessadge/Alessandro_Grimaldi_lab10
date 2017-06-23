#include "Administrador.h"

Administrador::Administrador(int experiencia,string rango,int sueldo){
    this->experiencia=experiencia;
    this->rango=rango;
    this->sueldo=sueldo;
}
Administrador::Administrador(){

}void Administrador::setExperiencia(int experiencia){
   this-> experiencia=experiencia;
}
int Administrador::getExperiencia(){
   return experiencia;
}
void Administrador::setRango(string rango){
   this-> rango=rango;
}
string Administrador::getRango(){
   return rango;
}
void Administrador::setSueldo(int sueldo){
   this-> sueldo=sueldo;
}
int Administrador::getSueldo(){
   return sueldo;
}
