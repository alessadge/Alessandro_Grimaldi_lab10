#include <iostream>
#include <string>

using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H
class Jugador{
    protected:
        string procedencia;
        string apodo;
        int dinero;
    public:
        Jugador(string,string,int);
        Jugador();
        string getProcedencia();
        void setProcedencia(string);

        string getApodo();
        void setApodo(string);

        int getDinero();
        void setDinero(int);

};
#endif