#include <iostream>
#include <string>
#include "Carta.h"
using namespace std;

#ifndef BARAJA_H
#define BARAJA_H
class Baraja{
    protected:
    	vector<Carta*> cartas;
    public:
        Baraja();
        vector<Carta*> getCartas();
        void setCartas(vector<Carta*>);
       
};
#endif