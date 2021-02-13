#include "Curso.h"
#include "Reserva.h"
#include "Alumno.h"
#include<iostream>
using namespace std;

Curso::Curso(string name, double price, bool cancel){
    nombre = name;
    precio = price;
    cancelado = cancel;
}

string Curso::getNombre(){
    return nombre;
}

double Curso::getPrecio(){
    return precio;
}

bool Curso::getCancelado(){
    return cancelado;
}

void Curso::aniadirReserva(Reserva *res){
    listaReservas.push_back(res);
}

void Curso::mostrarDatos(){
    Alumno *objA;
    if (cancelado == false){
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Precio: "<<precio<<endl;
        if(listaReservas.size()>0){
            cout<<"Lista de matriculados: "<<endl;
            for(int i = 0; i < listaReservas.size(); i++){
                objA = listaReservas[i]->getAlumno();
                cout<<"\t"<<objA->getNombres()<<endl;
            }
        }
        cout<<endl;
    }
}

