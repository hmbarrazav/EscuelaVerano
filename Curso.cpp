#include "Curso.h"
#include "Reserva.h"
#include "Alumno.h"
#include<iostream>
using namespace std;

Curso::Curso(string name, double price, bool cancel, Profesor *pro){
    nombre = name;
    precio = price;
    cancelado = cancel;
    profesor = pro;
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
            cout<<"Lista de alumnos con reserva de matricula: "<<endl;
            for(int i = 0; i < listaReservas.size(); i++){
                objA = listaReservas[i]->getAlumno();
                cout<<"-----> "<<i+1<<": "<<objA->getNombres()<<endl;
            }
        }
        cout<<endl;
    }
}

bool Curso::ofertadoPorAdministrador(int dni){

}

string Curso::obtenerDatosCompletos(){

}

void Curso::aniadirOferta(Oferta *ofer){

}

