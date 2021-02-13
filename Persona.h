#include<iostream>
using namespace std;

class Persona{
    protected:
        string DNI;
        string nombres;
        string tipo;
    public:
        Persona(){}
        Persona(string, string, string);
        string getDNI();
        string getNombres();
        string getTipo();
        virtual void mostrarDatos() = 0;
        //friend ostream& operator<<(ostream &, Persona &);
        //friend ostream& operator<<(ostream &, Persona* &);
};

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


