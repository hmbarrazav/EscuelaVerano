#include "Profesor.h"
#include "Curso.h"

Profesor::Profesor(string dni, string names, string type) : Persona(dni, names, type){
    DNI = dni;
    nombres = names;
    tipo = type;
}

void Profesor::aniadirCurso(Curso* cur){
    listaCursos.push_back(cur);
}

void Profesor::mostrarDatos(){
    Persona::mostrarDatos();
}
