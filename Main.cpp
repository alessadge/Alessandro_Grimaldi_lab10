#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <typeinfo>
#include "Administrador.h"
#include "Baraja.h"
#include "Persona.h"
#include "Repartidor.h"
#include "Carta.h"
#include "Jugador.h"
#include "Mesa.h"
using namespace std;

int agregarID();
int main(){
    int opcion=0;
    vector<Mesa*> mesas; 
    vector<Persona*> personas;
    while (opcion != 5){
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"1.) LOGIN"<<endl;
        cout<<"2.) Agregar Administrador"<<endl;
        cout<<"3.) Agregar jugador"<<endl;
        cout<<"4.) Agregar repartidor"<<endl;
        cout<<"5.) Salir"<<endl;
        cin>>opcion;
        if(opcion==1){
            string usuario, ID;
            cout<<"Ingrese su usuario: "<<endl;
            cin>>usuario;
            for (int i = 0; i < personas.size(); ++i)
            {
                if(personas[i]->getNombre()==usuario){
                    if(personas[i]->getNumeroIdentidad()==ID){
                        if(typeid(personas[i])==typeid(Administrador)){
                            int vivo;
                            while(vivo!=4){
                            cout<<"MENU ADMIN"<<endl;
                            cout<<"1.) Crear Mesa"<<endl;
                            cout<<"2.) Modificar mesa"<<endl;
                            cout<<"3.) Eliminar mesa"<<endl;
                            cout<<"4.) Salir "<<endl;
                            cin>>vivo;
                            if(vivo==1){
                                int verificacion;
                                for (int i = 0; i < personas.size(); ++i)
                                {
                                    if(typeid(personas[i])==typeid(Jugador)){
                                        verificacion++;
                                    }
                                    if(typeid(personas[i])==typeid(Repartidor)){
                                        verificacion++;
                                    }
                                }

                                if(verificacion != 0){
                                    string tipoMesa;
                                    int choice, pos;
                                    int numeroMesas;
                                    Jugador* jugador;
                                    Repartidor* repartidor;

                                    cout<<"Ingrese tipo de mesa:"<<endl;
                                    cout<<"1.) V.I.P"<<endl;
                                    cout<<"2.) Clasica"<<endl;
                                    cout<<"3.) Viajero"<<endl;
                                    cin>>choice;
                                    if(choice==1){
                                        tipoMesa="V.I.P";
                                    }else if(choice==2){
                                        tipoMesa="Clasica";
                                    }else if(choice==3){
                                        tipoMesa="Viajero";
                                    }else{
                                        cout<<"No se acepta"<<endl;
                                    }
                                    numeroMesas=mesas.size() + 1;
                                    cout<<"Jugadores:"<<endl;
                                    for (int i = 0; i < personas.size(); ++i)
                                    {
                                        if(typeid(*personas[i])==typeid(Jugador)){
                                            cout<<i<<".) "<<personas[i]->getNombre()<<endl;
                                        }
                                    }

                                    cout<<"Repartidores:"<<endl;
                                    for (int i = 0; i < personas.size(); ++i)
                                    {
                                        if(typeid(*personas[i])==typeid(Repartidor)){
                                            cout<<i<<".) "<<personas[i]->getNombre()<<endl;
                                        }
                                    }

                                    cout<<"Ingrese posicion del Jugador que desea agregar"<<endl;
                                    cin>>pos;
                                    jugador=reinterpret_cast<Jugador*>(personas[pos]);
                                    cout<<"Ingrese posicion del Repartidor que desea agregar"<<endl;
                                    cin>>pos;
                                    repartidor=reinterpret_cast<Repartidor*>(personas[pos]);

                                    mesas.push_back(new Mesa(numeroMesas,tipoMesa,jugador,repartidor));
                                    cout<<"Se agrego con extio!"<<endl;


                                }else{
                                    cout<<"Se necesita 1 repartidor y 1 jugador para empezar el juego..."<<endl;
                                }

                            }//fin if vivo

                            if(vivo==2){
                                int pos;
                                cout<<"Ingrese posicion de mesa a modificar:"<<endl;
                                cin>>pos;
                                string tipoMesa;
                                    int choice, pos1;
                                    int numeroMesas;
                                    Jugador* jugador;
                                    Repartidor* repartidor;

                                    cout<<"Ingrese tipo de mesa:"<<endl;
                                    cout<<"1.) V.I.P"<<endl;
                                    cout<<"2.) Clasica"<<endl;
                                    cout<<"3.) Viajero"<<endl;
                                    cin>>choice;
                                    if(choice==1){
                                        tipoMesa="V.I.P";
                                    }else if(choice==2){
                                        tipoMesa="Clasica";
                                    }else if(choice==3){
                                        tipoMesa="Viajero";
                                    }else{
                                        cout<<"No se acepta"<<endl;
                                    }
                                    numeroMesas=mesas.size() + 1;
                                    cout<<"Jugadores:"<<endl;
                                    for (int i = 0; i < personas.size(); ++i)
                                    {
                                        if(typeid(*personas[i])==typeid(Jugador)){
                                            cout<<i<<".) "<<personas[i]->getNombre()<<endl;
                                        }
                                    }

                                    cout<<"Repartidores:"<<endl;
                                    for (int i = 0; i < personas.size(); ++i)
                                    {
                                        if(typeid(*personas[i])==typeid(Repartidor)){
                                            cout<<i<<".) "<<personas[i]->getNombre()<<endl;
                                        }
                                    }

                                    cout<<"Ingrese posicion del Jugador que desea modificar"<<endl;
                                    cin>>pos1;
                                    jugador=reinterpret_cast<Jugador*>(personas[pos1]);
                                    cout<<"Ingrese posicion del Repartidor que desea modificar"<<endl;
                                    cin>>pos1;
                                    repartidor=reinterpret_cast<Repartidor*>(personas[pos1]);
                                    mesas[pos]->setNumeroMesas(numeroMesas);
                                    mesas[pos]->setJugador(jugador);
                                    mesas[pos]->setRepartidor(repartidor);
                                    mesas[pos]->setTipo(tipoMesa);
                                    cout<<"Se modifico exitosamente!"<<endl;

                            }

                            if(vivo==3){
                                for (int i = 0; i < mesas.size(); ++i)
                                {
                                    cout<<i<<".) "<<mesas[i]->getNumeroMesas()<<" "<<mesas[i]->getTipo()<<endl;
                                }
                                int pos;
                                cout<<"Ingrese posicion de mesa que desea eliminar..."<<endl;
                                cin>>pos;
                                mesas.erase(mesas.begin()+pos);
                                cout<<"Se elimino con exito!"<<endl;

                            }


                           }//fin while
                        }//fin if typeid
                        if(typeid(personas[i])==typeid(Jugador)){
                            Jugador* raiz=reinterpret_cast<Jugador*>(personas[i]);
                            Mesa* mesaRaiz;
                            int acum=0;
                            for (int i = 0; i < mesas.size(); ++i)
                            {
                                if(mesas[i]->getJugador()->getNumeroIdentidad==raiz->getNumeroIdentidad){
                                    acum=1;
                                    mesaRaiz=mesas[i];
                                }
                            }
                            if(acum==1){
                                cout<<"BIENVENIDO AL CASINO!"<<endl;
                                //juego
                                int apuesta;
                                bool juego=true, apuesta=true;
                                while(apuesta){
                                    cout<<"Ingrese su apuesta: "<<endl;
                                    cin>>apuesta;
                                    if(apuesta>=raiz->getDinero()){
                                        raiz->setDinero(raiz->getDinero - apuesta);
                                        apuesta=false;
                                    }else{
                                        cout<<"No tiene suficiente dinero!";
                                    }
                                }//fin apuesta;

                            }else{
                                cout<<"USTED NO ESTA EN UNA MESA TODAVIA!"<<endl;
                            }
                        }//fin if typeid2
                    }//fin if contra
                }//fin if usuario
            }//fin for
        }
        if(opcion==2){
            int experiencia,sueldo, edad, numeroIdentidad, num;
            string rango, nombre;

            numeroIdentidad=agregarID();
            cout<<"Ingrese su nombre: "<<endl;
            cin>>nombre;
            cout<<"Ingrese su Edad"<<endl;
            cin>>edad;
            cout<<"Ingrese su experiencia laboral: "<<endl;
            cin>>experiencia;
            cout<<"Ingrese su sueldo"<<endl;
            cin>>sueldo;
            cout<<"Ingrese un rango:"<<endl;
            cout<<"1.) Gerente Tiempo Completo"<<endl;
            cout<<"2.) Gerente Medio-Tiempo"<<endl;
            cout<<"3.) Gerente General"<<endl;
            cin>>num;
            if(num==1){
                rango="Gerente Tiempo Completo";
            }
            if(num==2){
                rango="Gerente Medio-Tiempo";
            }
            if(num==3){
                rango="Gerente General";
            }
            personas.push_back(new Administrador(nombre, edad, numeroIdentidad,experiencia,rango,sueldo));
            cout<<"Se agrego exitosamente!"<<endl;

        }
        if(opcion==3){
            //agregar jugador
            string nombre;
            int edad;
            int numeroIdentidad;           
            string procedencia;
            string apodo;
            int dinero;
            cout<<"Ingrese nombre: "<<endl;
            cin>>nombre;
            cout<<"Ingrese edad: "<<endl;
            cin>>edad;
            numeroIdentidad=agregarID();
            cout<<"Ingrese su procedencia:"<<endl;
            cin>>procedencia;
            cout<<"Ingrese su apodo: "<<endl;
            cin>>apodo;
            cout<<"Ingrese cuanto dinero tiene: "<<endl;
            cin>>dinero;
            personas.push_back(new Jugador(nombre,edad,numeroIdentidad,procedencia,apodo,dinero));
            cout<<"Se agrego exitosamente"<<endl;
        }
        if(opcion==4){
            //agregar repartidor
            string nombre;
            int edad;
            int numeroIdentidad;
            string dificultad;
            int dinero;
            Baraja* baraja=new Baraja();

            cout<<"Ingrese nombre: "<<endl;
            cin>>nombre;
            cout<<"Ingrese edad: "<<endl;
            cin>>edad;
            numeroIdentidad=agregarID();
            cout<<"Ingrese dificultad: "<<endl;
            cin>>dificultad;
            cout<<"Ingrese dinero: "<<endl;
            cin>>dinero;

            personas.push_back(new Repartidor(nombre,edad,numeroIdentidad,dificultad,dinero,baraja));
            cout<<"Se agrego exitosamente!"<<endl;
        }
    }//fin while
return 0;
}

int agregarID(){
    int ID;
    while(ID<999||ID>9999){
        ID=rand() % 1000+9999;
    }
    return ID;
}
