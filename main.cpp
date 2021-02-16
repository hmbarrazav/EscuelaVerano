#include <iostream>
#include "Persona.h"
#include "Alumno.h"
#include "Curso.h"
#include "Reserva.h"
#include "EscuelaVerano.h"

using namespace std;

int main(){
    bool exito;
    EscuelaVerano escV;

    escV.agregarAlumno("87675645","Daniel Chique","Alumno",1);
    escV.agregarAlumno("92837412","Christian Tarqui","Alumno",1);
    escV.agregarAlumno("08946195","Carlos Condori","Alumno",1);

    escV.agregarCurso("Disenio grafico",200,false);
    escV.agregarCurso("Programacion de sitios web",100,false);
    escV.agregarCurso("Audio y video",150,false);

    cout<<"LISTA DE PERSONAS ---------------------------"<<endl;
    escV.mostrarPersonas();
    cin.get();
    cout<<"LISTA DE CURSOS -----------------------------"<<endl;
    escV.mostrarCursos();
    cin.get();

    //cout<<"Posicion: "<<escV.buscarCurso("Programacion de sitios web");

    //Creacion de la reserva:
    cout<<"PROCESO DE RESERVA -----------------------------"<<endl;
    cout<<"01: Daniel Chique reservara el curso Disenio grafico"<<endl;
    cout<<"02: Carlos Condori reservara el curso Disenio grafico"<<endl<<endl;
    exito = escV.crearReserva("13/02/2021","87675645","Disenio grafico");
    if (exito == true)
        cout<<"Se creo correctamente la reserva 01"<<endl;
    else
        cout<<"Error en la busqueda del DNI o del nombre del curso"<<endl;

    exito = escV.crearReserva("13/02/2021","08946195","Disenio grafico");
    if (exito == true)
        cout<<"Se creo correctamente la reserva 02"<<endl;
    else
        cout<<"Error en la busqueda del DNI o del nombre del curso"<<endl;
    cin.get();

    cout<<"LISTA DE CURSOS CON RESERVAS ----------------"<<endl;
    escV.mostrarCursos();

    return 0;
}
