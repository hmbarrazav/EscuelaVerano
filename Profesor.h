#ifndef PROFESOR_H
#define PROFESOR_H

#include <vector>
#include "Persona.h"
using namespace std;

class Curso;

class Profesor : public Persona{
    private:
        vector<Curso*> listaCursos;
    public:
        Profesor(string, string, string);
        void aniadirCurso(Curso*);
        void mostrarDatos();
};

#endif // PROFESOR_H
