#include "Persona.h"

Persona::Persona(string nombre,int edad,string numeroIdentidad){
    this->nombre=nombre;
    this->edad=edad;
    this->numeroIdentidad=numeroIdentidad;
}
Persona::Persona(){

}void Persona::setNombre(string nombre){
   this-> nombre=nombre;
}
string Persona::getNombre(){
   return nombre;
}
void Persona::setEdad(int edad){
   this-> edad=edad;
}
int Persona::getEdad(){
   return edad;
}
void Persona::setNumeroIdentidad(string numeroIdentidad){
   this-> numeroIdentidad=numeroIdentidad;
}
string Persona::getNumeroIdentidad(){
   return numeroIdentidad;
}
