#include <iostream>
#include <string>
#include "Baraja.h"
#include "Persona.h"
using namespace std;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H
class Repartidor:public Persona{
    protected:
        string dificultad;
        int dinero;
        Baraja* baraja;
    public:
        Repartidor(string,int,int,string,int,Baraja*);
        Repartidor();
        string getDificultad();
        void setDificultad(string);

        int getDinero();
        void setDinero(int);

};
#endif