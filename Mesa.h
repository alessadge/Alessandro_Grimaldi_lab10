#include <iostream>
#include <string>

using namespace std;

#ifndef MESA_H
#define MESA_H
class Mesa{
    protected:
        int numeroMesas;
        string tipo;
    public:
        Mesa(int,string);
        Mesa();
        int getNumeroMesas();
        void setNumeroMesas(int);

        string getTipo();
        void setTipo(string);

};
#endif