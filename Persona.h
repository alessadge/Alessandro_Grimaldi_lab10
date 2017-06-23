#include <iostream>
#include <string>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H
class Persona{
    protected:
        string nombre;
        int edad;
        int numeroIdentidad;
    public:
        Persona(string,int,int);
        Persona();

        string getNombre();
        void setNombre(string);

        int getEdad();
        void setEdad(int);

        int getNumeroIdentidad();
        void setNumeroIdentidad(int);

        virtual void metodo();

};
#endif