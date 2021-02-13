#include "Alumno.h"
#include "Reserva.h"
using namespace std;

Alumno::Alumno(string dni, string name, string type, int tD) : Persona(dni, name, type){
    tipoDescuento = tD;
}

int Alumno::getTipoDescuento(){
    return tipoDescuento;
}

void Alumno::mostrarDatos(){
    cout<<"DNI: "<<DNI<<endl;
    cout<<"Nombres: "<<nombres<<endl;
    cout<<"Tipo Personal: "<<tipo<<endl;
    //cout<<"Tipo Descuento: "<<tipoDescuento<<endl;
    cout<<endl;
}

void Alumno::aniadirReserva(Reserva *res){
    listaReservas.push_back(res);
}
