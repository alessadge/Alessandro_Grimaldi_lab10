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
            string usuario;
            int ID1;
            cout<<"Ingrese su usuario: "<<endl;
            cin>>usuario;
            for (int i = 0; i < personas.size(); ++i)
            {
                if(personas[i]->getNombre()==usuario){
                    cout<<"Ingrese su identidad:"<<endl;
                    cin>>ID1;
                    if(personas[i]->getNumeroIdentidad()==ID1){
                        if(dynamic_cast<Administrador*>(personas[i])){
                            int vivo;
                            while(vivo!=4){
                            cout<<"MENU ADMIN"<<endl;
                            cout<<"1.) Crear Mesa"<<endl;
                            cout<<"2.) Modificar mesa"<<endl;
                            cout<<"3.) Eliminar mesa"<<endl;
                            cout<<"4.) Salir "<<endl;
                            cin>>vivo;
                            if(vivo==1){
                                int verificacion=0;
                                for (int i = 0; i < personas.size(); ++i)
                                {
                                    if(typeid(*personas[i])==typeid(Jugador)){
                                        verificacion++;
                                    }
                                    if(typeid(*personas[i])==typeid(Repartidor)){
                                        verificacion++;
                                    }
                                }

                                if(verificacion >= 2){
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

                        if(dynamic_cast<Jugador*>(personas[i])){
                            Jugador* raiz=reinterpret_cast<Jugador*>(personas[i]);
                            Mesa* mesaRaiz;
                            int acum=0;
                            for (int i = 0; i < mesas.size(); ++i)
                            {
                                if(mesas[i]->getJugador()->getNumeroIdentidad()==raiz->getNumeroIdentidad()){
                                    acum=1;
                                    mesaRaiz=mesas[i];
                                }
                            }
                            if(acum==1){
                                cout<<"BIENVENIDO AL CASINO!"<<endl;
                                //juego
                                int apuesta, valorJugador, valorRepartidor, random;
                                bool juego=true, apuestaViva=true;
                                while(apuestaViva){
                                    cout<<"Ingrese su apuesta: "<<endl;
                                    cin>>apuesta;
                                    if((raiz->getDinero()-apuesta)>=0){
                                        raiz->setDinero(raiz->getDinero() - apuesta);
                                        apuestaViva=false;
                                    }else{
                                        cout<<"No tiene suficiente dinero!";
                                    }
                                }//fin apuesta
                                vector<Carta*> temp=mesaRaiz->getRepartidor()->getBaraja()->getCartas();
                                random= rand()%52+1;
                                cout<<random;
                                //cartas Jugador
                                cout<<"Sus cartas son: "<<endl;
                                cout<<"Primera carta:"<<endl;
                                cout<<"1.) Valor: "<<temp[random]->getValor()<<endl;
                                cout<<"2.) Simbolo: "<<temp[random]->getSimbolo()<<endl;
                                cout<<"3.) Color: "<<temp[random]->getColor()<<endl;
                                valorJugador+=temp[random]->getValorInt();
                                cout<<endl;
                                random= rand()%20+1;
                                cout<<"Segunda carta:"<<endl;
                                cout<<"1.) Valor: "<<temp[random]->getValor()<<endl;
                                cout<<"2.) Simbolo: "<<temp[random]->getSimbolo()<<endl;
                                cout<<"3.) Color: "<<temp[random]->getColor()<<endl;
                                valorJugador+=temp[random]->getValorInt();
                                cout<<endl;
                                random= rand()%45+1;
                                cout<<"Carta del repartidor:"<<endl;
                                cout<<"1.) Valor: "<<temp[random]->getValor()<<endl;
                                cout<<"2.) Simbolo: "<<temp[random]->getSimbolo()<<endl;
                                cout<<"3.) Color: "<<temp[random]->getColor()<<endl;
                                valorRepartidor+=temp[random]->getValorInt();
                                random= rand()%51+1;
                                valorRepartidor+=temp[random]->getValorInt();
                                int turno=1;
                                while(valorRepartidor<21&&valorJugador<21){
                                    if(turno=1){
                                    int opcion1;
                                    cout<<"Que desea hacer?"<<endl;
                                    cout<<"1.) Pedir otra carta..."<<endl;
                                    cin>>opcion1;

                                        if(opcion1==1){
                                            random= rand()%51+1;
                                            valorJugador+=temp[random]->getValorInt();
                                             cout<<"Su carta es:";
                                             cout<<"1.) Valor: "<<temp[random]->getValor()<<endl;
                                             cout<<"2.) Simbolo: "<<temp[random]->getSimbolo()<<endl;
                                             cout<<"3.) Color: "<<temp[random]->getColor()<<endl;
                                        }
                                    
                                    }else{
                                        cout<<"Turno repartidor"<<endl;
                                        random= rand()%51+1;
                                        valorRepartidor+=temp[random]->getValorInt();
                                    }

                                }
                                if(valorJugador==21||valorRepartidor>21){
                                    cout<<"Ha ganado! Tiene 21!"<<endl;
                                    raiz->setDinero(raiz->getDinero()+(apuesta*2));

                                }
                                if(valorJugador>21||valorRepartidor==21){
                                    cout<<"Usted ha perdido, gracias por jugar!"<<endl;
                                }
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
            Baraja* baraja= new Baraja();

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
    cout<<"Ingrese un numero de identidad"<<endl;
    cin>>ID;
    while(ID<=999||ID>9999){
        cout<<"Ingrese otro numero ej.0000"<<endl;
        cin>>ID;
    }
    return ID;
}
