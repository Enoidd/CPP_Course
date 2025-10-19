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
        int base, altezza;

    public:
        // Costruttore di default - vuoto
        Rettangolo(){
            base = 0;
            altezza = 0;
        }

        // Costruttore parametrizzato
        Rettangolo(int base, int altezza){
            this->base = base;
            this->altezza = altezza;
        }

        // Metodo setBase
        void setBase(int base){
            this->base = base;
        }

        // Metodo getBAse
        int getBase() const{
            return base;
        }

        // Metodo setAltezza
        void setAltezza(int altezza){
            this->altezza = altezza;
        }

        // Metodo getAltezza
        int getAltezza() const{
            return altezza;
        }

        // Metodo area
        int area() const{
            return base*altezza;
        }

        // Metodo perimetro
        int perimetro() const{
            return 2*(base+altezza);
        }
};

int main(){

    int base, altezza;
    cout<<"Base: ";
    cin>>base;
    cout<<"Altezza: ";
    cin>>altezza;

    Rettangolo r;

    r.setBase(base);
    r.setAltezza(altezza);

    cout<<"Area: "<<r.area()<<" - Perimetro: "<<r.perimetro();
    
}