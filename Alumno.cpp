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
    Persona::mostrarDatos();
}

void Alumno::aniadirReserva(Reserva *res){
    listaReservas.push_back(res);
}
