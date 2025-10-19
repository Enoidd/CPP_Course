/*
Crea una classe Rettangolo con:

Lati base, altezza

Metodo area()

Metodo perimetro()

Usa oggetti in main()
*/

#include <iostream>
using namespace std;

class Rettangolo{
    private:
        int base, altezza;

     public:
        Rettangolo(){ // Costruttore senza parametri - perchè ho i set
            base = 0;
            altezza = 0;
        }

        void setBase(int nuovaBase){
            if(nuovaBase > 0) base = nuovaBase;
        }

        void setAltezza(int nuovaAltezza){
            if(nuovaAltezza > 0) altezza = nuovaAltezza;
        }

        int getBase() const{
            return base;
        }

        int getAltezza() const{
            return altezza;
        }
        
        void area() const{
            cout << "Area: " << base*altezza << endl;
        }

        void perimetro() const{
            cout << "Perimetro: " << 2*(base+altezza) << endl;
        }
};

int main(){

    Rettangolo r1;
    int altezza;
    int base;

    cout << "Altezza: ";
    cin >> altezza;
    r1.setAltezza(altezza);

    cout << "Base: ";
    cin >> base;
    r1.setBase(base);
    
    cout << "Altezza: " << r1.getAltezza();
    cout << "Base: " << r1.getBase();

    r1.area();
    r1.perimetro();
}