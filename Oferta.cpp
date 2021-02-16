#include "Oferta.h"

Oferta::Oferta(string fI, Administrador* Adm, Curso* Cur){
    fechaInsercion = fI;
    administrador = Adm;
    curso = Cur;
}

void Oferta::verificaAdministrador(string){

}

string Oferta::getFechaInsercion(){
    return fechaInsercion;
}
