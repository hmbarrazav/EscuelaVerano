#include<iostream>
using namespace std;

class Reserva;

class Alumno : public Persona{
    private:
        int tipoDescuento;
        vector<Reserva*> listaReservas;
    public:
        Alumno(string, string, string, int);
        int getTipoDescuento();
        void aniadirReserva(Reserva*);   
        void mostrarDatos();
        
        //friend ostream& operator<<(ostream &, Alumno* &);
};

Alumno::Alumno(string dni, string name, string type, int tD) : Persona(dni, name, type){
    tipoDescuento = tD;
}

int Alumno::getTipoDescuento(){
    return tipoDescuento;
}

void Alumno::mostrarDatos(){
    cout<<"DNI: "<<DNI<<endl;
    cout<<"Nombres: "<<nombres<<endl;
    cout<<"Tipo Personal: "<<tipo<<endl;
    cout<<"Tipo Descuento: "<<tipoDescuento<<endl<<endl;
}

void Alumno::aniadirReserva(Reserva *res){
    listaReservas.push_back(res);
}

/* ostream& operator<<(ostream &Escribe, Alumno* &objA){
    Escribe<<"DNI: "<<objA->DNI<<endl;
    Escribe<<"Nombres: "<<objA->nombres<<endl;
    Escribe<<"Tipo Personal: "<<objA->tipo<<endl<<endl;
    Escribe<<"Tipo Descuento: "<<objA->tipoDescuento<<endl<<endl;
    return Escribe;
} */
