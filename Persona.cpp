#include "Persona.h"
using namespace std;

Persona::Persona(string dni, string names, string type){
    DNI = dni;
    nombres = names;
    tipo = type;
}

string Persona::getDNI(){
    return DNI;
}

string Persona::getNombres(){
    return nombres;
}

string Persona::getTipo(){
    return tipo;
}

void Persona::mostrarDatos(){
    cout<<"DNI: "<<DNI<<endl;
    cout<<"Nombres: "<<nombres<<endl;
    cout<<"Tipo Personal: "<<tipo<<endl;
    //cout<<"Tipo Descuento: "<<tipoDescuento<<endl;
    cout<<endl;
}
