#include "Reserva.h"
#include "Alumno.h"
#include "Curso.h"

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
