/*
Crea class Animale con metodo suono() virtual.
Crea class Gatto con override.
Fai: 
Gatto g;  
Animale a = g;  // slicing!  
a.suono();      // NON chiama Gatto::suono
*/

#include <iostream>
using namespace std;

class Animale{
    public:
        virtual void suono() const{
            cout<<"indefinito\n";
        }
};

class Gatto : public Animale{
    public:
        void suono() const override{
            cout<<"Miao miao\n";
        }
};

int main(){

    Gatto g;
    Animale a = g; // slicing. 'g' perde la derivazione di 'a'
    a.suono(); // STAMPA "Indefinito"
}