/*
Stessa struttura dell’esercizio precedente, ma la classe Telefono eredita protected.
Mostra come accendi() NON sia accessibile direttamente da main(), ma può essere chiamata da un metodo interno a Telefono.
*/

#include <iostream>
using namespace std;

class Dispositivo{
    public:
        void accendi(){
            cout<<"Dispositivo acceso\n";
        }
};

class Telefono : private Dispositivo{
    public:
        void avvia(){
            accendi();
        }
};

int main(){
    Telefono t;
    t.avvia();
}