#include <iostream>
#include <string>

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
class Administrador{
    protected:
        int experiencia;
        string rango;
        int sueldo;
    public:
        Administrador(int,string,int);
        Administrador();
        int getExperiencia();
        void setExperiencia(int);

        string getRango();
        void setRango(string);

        int getSueldo();
        void setSueldo(int);

};
#endif