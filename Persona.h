#include <iostream>
#include <string>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H
class Persona{
    protected:
        string nombre;
        int edad;
        string numeroIdentidad;
    public:
        Persona(string,int,string);
        Persona();
        string getNombre();
        void setNombre(string);

        int getEdad();
        void setEdad(int);

        string getNumeroIdentidad();
        void setNumeroIdentidad(string);

};
#endif