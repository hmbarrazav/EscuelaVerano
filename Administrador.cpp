#include "Administrador.h"
#include "Oferta.h"

Administrador::Administrador(string dni, string names, string type) : Persona(dni, names, type)
{
    cout<<"";
}

void Administrador::aniadirAdministrador(Oferta* ofer){
    listaOfertas.push_back(ofer);
}

void Administrador::mostrarDatos(){
    Persona::mostrarDatos();
}
