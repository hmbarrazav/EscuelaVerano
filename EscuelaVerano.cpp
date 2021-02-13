#include "EscuelaVerano.h"
#include "Persona.h"
#include "Reserva.h"
#include "Alumno.h"
#include "Curso.h"
#include <iostream>
using namespace std;

void EscuelaVerano::agregarCurso(Curso *cur){
    listaCursos.push_back(cur);
}

void EscuelaVerano::agregarPersona(Persona *per){
    listaPersonas.push_back(per);
}

void EscuelaVerano::mostrarCursos(){
    for(int i=0; i<listaCursos.size(); i++){
        listaCursos[i]->mostrarDatos();
    }
}

void EscuelaVerano::mostrarPersonas(){
    for(int i=0; i<listaPersonas.size(); i++){
        listaPersonas[i]->mostrarDatos();
    }
}

void EscuelaVerano::crearReserva(string fecha, string dni, string nombreC){
    Reserva *reserva;
    Alumno *objA;
    int indA, indC;
    indA = buscarAlumno(dni);
    indC = buscarCurso(nombreC);

    objA = (Alumno*) listaPersonas[indA];
    reserva = new Reserva(fecha, objA , listaCursos[indC]);
    listaCursos[indC]->aniadirReserva(reserva);
    objA->aniadirReserva(reserva);
}

int EscuelaVerano::buscarAlumno(string dni){
    for(int i = 0; i < listaPersonas.size(); i++){
        if(listaPersonas[i]->getDNI() == dni)
            return i;
    }
    return -1;
}
int EscuelaVerano::buscarCurso(string nombreC){
    for(int i = 0; i < listaCursos.size(); i++){
        if(listaCursos[i]->getNombre() == nombreC)
            return i;
    }
    return -1;
}
