#include <iostream>
#include <string>
#include "Jugador.h"
#include "Repartidor.h"
using namespace std;

#ifndef MESA_H
#define MESA_H
class Mesa{
    protected:
        int numeroMesas;
        string tipo;
        Jugador* jugador;
        Repartidor* repartidor;
    public:
        Mesa(int,string,Jugador*,Repartidor*);
        Mesa();
        int getNumeroMesas();
        void setNumeroMesas(int);

        string getTipo();
        void setTipo(string);

        Jugador* getJugador();
        void setJugador(Jugador*);

        Repartidor* getRepartidor();
        void setRepartidor(Repartidor*);

};
#endif