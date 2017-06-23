#include <iostream>
#include <string>

using namespace std;

#ifndef MESA DE BLACKJACK_H
#define MESA DE BLACKJACK_H
class Mesa de Blackjack{
    protected:
        int numeroMesas;
        string tipo;
    public:
        Mesa de Blackjack(int,string);
        Mesa de Blackjack();
        int getNumeroMesas();
        void setNumeroMesas(int);

        string getTipo();
        void setTipo(string);

};
#endif