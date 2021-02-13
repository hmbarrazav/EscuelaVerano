#ifndef CURSO_H
#define CURSO_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Reserva;

class Curso{
    private:
        string nombre;
        double precio;
        bool cancelado;
        vector<Reserva*> listaReservas;
    public:
        Curso(string name, double price, bool cancel);
        string getNombre();
        double getPrecio();
        bool getCancelado();
        void aniadirReserva(Reserva*);
        void mostrarDatos();
        //friend ostream& operator<<(ostream &, Curso* &);
};

#endif // CURSO_H
