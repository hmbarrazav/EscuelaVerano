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

/* ostream& operator<<(ostream &Escribe, Persona &objP){
    Escribe<<"DNI: "<<objP.DNI<<endl;
    Escribe<<"Nombres: "<<objP.nombres<<endl;
    Escribe<<"Tipo: "<<objP.tipo<<endl<<endl;
    return Escribe;
}

ostream& operator<<(ostream &Escribe, Persona* &objP){
    Escribe<<"DNI: "<<objP->DNI<<endl;
    Escribe<<"Nombres: "<<objP->nombres<<endl;
    Escribe<<"Tipo: "<<objP->tipo<<endl<<endl;
    return Escribe;
} */
