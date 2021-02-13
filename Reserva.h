#include<iostream>
using namespace std;

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

Reserva::Reserva(string date, Alumno *objA, Curso *objC){
    fecha = date;
    alumno = objA;
    curso = objC;
}

Alumno* Reserva::getAlumno(){
    return alumno;
}

Curso* Reserva::getCurso(){
    return curso;
}

string Reserva::getFecha(){
    return fecha;
}