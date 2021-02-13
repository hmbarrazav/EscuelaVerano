#include<iostream>
#include<vector>
using namespace std;

class EscuelaVerano{
    private:
        vector<Curso*> listaCursos;
        vector<Persona*> listaPersonas;
    public:
        void agregarCurso(Curso*);
        void agregarPersona(Persona*);
        void mostrarCursos();
        void mostrarPersonas();
};

void EscuelaVerano::agregarCurso(Curso *cur){
    listaCursos.push_back(cur);
}

void EscuelaVerano::agregarPersona(Persona *per){
    listaPersonas.push_back(per);
}

void EscuelaVerano::mostrarCursos(){
    for(int i=0; i<=listaCursos.size() - 1; i++){
        cout<<listaCursos[i];
    }
}

void EscuelaVerano::mostrarPersonas(){
    for(int i=0; i<=listaPersonas.size() - 1; i++){
        listaPersonas[i]->mostrarDatos();
    }
}

