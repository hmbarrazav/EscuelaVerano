#include "Reserva.h"
#include "Alumno.h"
#include "Curso.h"
#include "Matricula.h"

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

void Reserva::asignarMatricula(double imp){
    matricula = new Matricula(imp);
}
