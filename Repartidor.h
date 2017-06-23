#include <iostream>
#include <string>

using namespace std;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H
class Repartidor{
    protected:
        string dificultad;
        int dinero;
    public:
        Repartidor(string,int);
        Repartidor();
        string getDificultad();
        void setDificultad(string);

        int getDinero();
        void setDinero(int);

};
#endif