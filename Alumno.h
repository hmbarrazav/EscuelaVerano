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
        Alumno() {}
        Alumno(std::string, std::string , std::string, int);
        int getTipoDescuento();
        void mostrarDatos();
        void aniadirReserva(Reserva*);
        //friend ostream& operator<<(ostream &, Alumno* &);
};

#endif // ALUMNO_H

