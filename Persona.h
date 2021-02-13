#ifndef PERSONA_H
#define PERSONA_H
#include<string>
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

#endif // PERSONA_H
