#include<iostream>
using namespace std;

class Curso{
    private:
        string nombre;
        double precio;
        bool cancelado;
    public:
        Curso(string name, double price, bool cancel);
        string getNombre();
        double getPrecio();
        bool getCancelado();
        friend ostream& operator<<(ostream &, Curso &);
        friend ostream& operator<<(ostream &, Curso* &);
};

Curso::Curso(string name, double price, bool cancel){
    nombre = name;
    precio = price;
    cancelado = cancel;
}

string Curso::getNombre(){
    return nombre;
}

double Curso::getPrecio(){
    return precio;
}

bool Curso::getCancelado(){
    return cancelado;
}

ostream& operator<<(ostream &Escribe, Curso &objC){
    Escribe<<"Nombre: "<<objC.nombre<<endl;
    Escribe<<"Precio: "<<objC.precio<<endl;
    Escribe<<"Cancelado: "<<objC.cancelado<<endl<<endl;
    return Escribe;
}

ostream& operator<<(ostream &Escribe, Curso* &objC){
    Escribe<<"Nombre: "<<objC->nombre<<endl;
    Escribe<<"Precio: "<<objC->precio<<endl;
    Escribe<<"Cancelado: "<<objC->cancelado<<endl<<endl;
    return Escribe;
}