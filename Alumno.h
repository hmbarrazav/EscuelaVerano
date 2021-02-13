#ifndef ALUMNO_H
#define ALUMNO_H
#include<string>
#include<vector>
#include "Persona.h"
using namespace std;

class Reserva;

class Alumno : public Persona{
    private:
        int tipoDescuento;
        vector<Reserva*> listaReservas;
    public:
        Alumno(string, string , string, int);
        int getTipoDescuento();
        void mostrarDatos();
        void aniadirReserva(Reserva*);
};

#endif // ALUMNO_H

