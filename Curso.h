#ifndef CURSO_H
#define CURSO_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Reserva;
class Oferta;
class Profesor;

class Curso{
    private:
        string nombre;
        double precio;
        bool cancelado;
        vector<Reserva*> listaReservas;
        Oferta *oferta;
        Profesor *profesor;
    public:
        Curso(string name, double price, bool cancel, Profesor*);
        string getNombre();
        double getPrecio();
        bool getCancelado();
        void aniadirReserva(Reserva*);
        void mostrarDatos();
        bool ofertadoPorAdministrador(string);
        string* obtenerDatosCompletos();
        int obtenerNumeroReservas();
        void aniadirOferta(Oferta*);
};

#endif // CURSO_H
