#ifndef ESCUELAVERANO_H
#define ESCUELAVERANO_H
#include<iostream>
#include<vector>

using namespace std;

class Curso;
class Persona;

class EscuelaVerano{
    private:
        vector<Curso*> listaCursos;
        vector<Persona*> listaPersonas;
    public:
        void agregarCurso(Curso*);
        void agregarPersona(Persona*);
        void mostrarCursos();
        void mostrarPersonas();
        void crearReserva(string, string, string);
        int buscarAlumno(string);
        int buscarCurso(string);
};

#endif // ESCUELAVERANO_H
