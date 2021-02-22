#include "Curso.h"
#include "Reserva.h"
#include "Alumno.h"
#include "Oferta.h"
#include<iostream>
#include <sstream>
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

bool Curso::ofertadoPorAdministrador(string dni){
    return true;
}

string* Curso::obtenerDatosCompletos(){
    string datosCompletos[5], fechaInsercion;
    int nroReservas;

    fechaInsercion = oferta->getFechaInsercion();
    nroReservas = obtenerNumeroReservas();

    datosCompletos[0] = nombre;
    ostringstream strP, strC, strN; //streams que servirán para la conversión de anytype a string
    strP << precio;
    strC << cancelado;
    strN << nroReservas;

    datosCompletos[1] = strP.str();
    datosCompletos[2] = strC.str();
    datosCompletos[3] = fechaInsercion;
    datosCompletos[4] = strN.str();
    return datosCompletos;
}

int Curso::obtenerNumeroReservas(){
    return listaReservas.size();
}

void Curso::aniadirOferta(Oferta *ofer){

}

