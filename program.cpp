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
    cout<<endl;

    escV.agregarPersona(&objA1);
    escV.agregarPersona(&objA2);
    escV.agregarPersona(&objA3);

    escV.agregarCurso(&objC1);
    escV.agregarCurso(&objC2);
    escV.agregarCurso(&objC3);

    escV.mostrarPersonas();
    escV.mostrarCursos();

    cout<<"Posicion: "<<escV.buscarCurso("Programacion de sitios web");

    escV.crearReserva("13/02/2021","87675645","Disenio grafico");
    escV.mostrarCursos();

    //Reserva objR1("13/02/2021",&objA1,&objC1);
    //Reserva objR2("13/02/2021",&objA1,&objC2);

/*     Alumno objA("12345678", "Jorge Perez", "Alumno", 1);
    cout<<"objAlumno"<<endl;
    cout<<objA.getDNI()<<endl;
    cout<<objA.getNombres()<<endl;
    cout<<objA.getTipo()<<endl;
    cout<<objA.getTipoDescuento()<<endl; */

    return 0;
}
