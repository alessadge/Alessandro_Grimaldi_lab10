#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador:public Persona{
    protected:
        int experiencia;
        string rango;
        int sueldo;
    public:
        Administrador(string,int,int,int,string,int);
        Administrador();
        int getExperiencia();
        void setExperiencia(int);

        string getRango();
        void setRango(string);

        int getSueldo();
        void setSueldo(int);
        virtual void metodo();

};
#endif