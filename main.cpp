#include <iostream>
#include "Persona.h"
#include "Alumno.h"
#include "Curso.h"
#include "Reserva.h"
#include "EscuelaVerano.h"

using namespace std;

int main(){
    EscuelaVerano escV;

    Alumno objA1("87675645","Daniel Chique","Alumno",1);
    Alumno objA2("92837412","Christian Tarqui","Alumno",1);
    Alumno objA3("08946195","Carlos Condori","Docente",1);

    Curso objC1("Disenio grafico",200,false);
    Curso objC2("Programacion de sitios web",100,false);
    Curso objC3("Audio y video",150,false);

    escV.agregarPersona(&objA1);
    escV.agregarPersona(&objA2);
    escV.agregarPersona(&objA3);

    escV.agregarCurso(&objC1);
    escV.agregarCurso(&objC2);
    escV.agregarCurso(&objC3);

    cout<<"LISTA DE PERSONAS ---------------------------"<<endl;
    escV.mostrarPersonas();
    cin.get();
    cout<<"LISTA DE CURSOS -----------------------------"<<endl;
    escV.mostrarCursos();
    cin.get();

    //cout<<"Posicion: "<<escV.buscarCurso("Programacion de sitios web");

    //Creación de la reserva:
    escV.crearReserva("13/02/2021","87675645","Disenio grafico");
    escV.crearReserva("13/02/2021","08946195","Disenio grafico");

    cout<<"LISTA DE CURSOS CON RESERVAS ----------------"<<endl;
    escV.mostrarCursos();

    return 0;
}
