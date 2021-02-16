#ifndef ESCUELAVERANO_H
#define ESCUELAVERANO_H
#include<iostream>
#include<vector>

using namespace std;

class Curso;
class Persona;

class EscuelaVerano{
    private:
        vector<Curso*> listaCursos; //variable de composición
        vector<Persona*> listaPersonas; //variable de composición
    public:
        void agregarCurso(string, double, bool);
        void agregarAlumno(string, string, string, int);
        void agregarAdministrador(string, string, string);
        void agregarProfesor(string, string, string);
        void mostrarCursos();
        void mostrarPersonas();
        bool crearReserva(string, string, string);
        int buscarAlumno(string);
        int buscarCurso(string);

};

#endif // ESCUELAVERANO_H
