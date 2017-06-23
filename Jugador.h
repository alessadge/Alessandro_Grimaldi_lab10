#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H
class Jugador:public Persona{
    protected:
        string procedencia;
        string apodo;
        int dinero;
    public:
        Jugador(string,int,int,string,string,int);
        Jugador();
        string getProcedencia();
        void setProcedencia(string);

        string getApodo();
        void setApodo(string);

        int getDinero();
        void setDinero(int);

};
#endif