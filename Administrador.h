#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <vector>
#include "Persona.h"
using namespace std;

class Oferta;

class Administrador : public Persona{
    private:
        vector<Oferta*> listaOfertas;
    public:
        Administrador(string, string, string);
        void aniadirAdministrador(Oferta*);
        void mostrarDatos();
};

#endif // ADMINISTRADOR_H
