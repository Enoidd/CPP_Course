/*
Crea un metodo virtual void stampa() const in base.
In derivata, crea void stampa() (senza const).
Mostra che il compilatore NON lo considera override (nessun avviso senza override).
*/

#include <iostream>
using namespace std;

class Base{
    public:
        virtual void stampa() const{
            cout<<"BASE\n";
        }
};

class Derivata : public Base{
    public:
        void stampa(){
            cout<<"DERIVATA\n";
        }
};

int main(){
    Base* b = new Derivata();
    b->stampa();
    /*
    Senza Override la funzione 'stampa' in Derivata non viene considerata, perché?
    perché virtual void stampa() const è una funzione/metodo diverso da void stampa(),
    hanno due "firme" diverse.*/
}