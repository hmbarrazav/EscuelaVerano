#ifndef OFERTA_H
#define OFERTA_H

#include <string>

#include "Curso.h"
using namespace std;
class Administrador;

class Oferta {
    private:
        string fechaInsercion;
        Administrador *administrador;
        Curso *curso;
    public:
        Oferta(string, Administrador*, Curso*);
        void verificaAdministrador(string);
        string getFechaInsercion();
};

#endif // OFERTA_H
