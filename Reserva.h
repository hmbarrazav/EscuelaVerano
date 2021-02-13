#ifndef RESERVA_H
#define RESERVA_H
#include<string>
#include<iostream>
using namespace std;

class Alumno;
class Curso;

class Reserva{
    private:
        string fecha;
        Alumno *alumno;
        Curso *curso;
    public:
        Reserva(string, Alumno*, Curso*);
        Alumno* getAlumno();
        Curso* getCurso();
        string getFecha();
};

#endif // RESERVA_H
