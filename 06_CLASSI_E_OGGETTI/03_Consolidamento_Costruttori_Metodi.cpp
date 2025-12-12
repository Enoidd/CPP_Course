/*
Crea la classe Rettangolo con:

Attributi base e altezza

Costruttore parametrizzato

Metodo int area() e int perimetro()

Getter e setter

Obiettivo: consolidare costruttori con parametri + logica nei metodi.
*/

#include <iostream>
using namespace std;

class Rettangolo{
    private:
        int base;
        int altezza;

    public:
        // Costruttore di default
        Rettangolo(){
            base = 0;
            altezza = 0;
        }

        // Costruttore parametrico
        Rettangolo(int base, int altezza){
            this->base=base;
            this->altezza=altezza;
        }

        // Set - get
        void setBase(int base){
            this->base=base;
        }

        int getBase(){
            return base;
        }

        void setAltezza(int altezza){
            this->altezza=altezza;
        }

        int getAltezza(){
            return altezza;
        }

        int area(){
            return base*altezza;
        }

        int perimetro(){
            return (base+altezza)*2;
        }

};

int main(){

    Rettangolo r = {10,20}; // Sfrutto Costruttore parametrico

    cout<<"Area: "<<r.area()<<" Perimetro: "<<r.perimetro();
}