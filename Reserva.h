#ifndef RESERVA_H
#define RESERVA_H

#include <string>
#include <iostream>
using namespace std;

class Alumno;
class Curso;
class Matricula;

class Reserva{
    private:
        string fecha;
        Alumno *alumno;
        Curso *curso;
        Matricula *matricula;
    public:
        Reserva(string, Alumno*, Curso*);
        string getFecha();
        Alumno* getAlumno();
        Curso* getCurso();
        void asignarMatricula(double);
};

#endif // RESERVA_H
