/*
Stessa struttura dell’esercizio precedente, ma la classe Telefono eredita protected.
Mostra come accendi() NON sia accessibile direttamente da main(), ma può essere chiamata da un metodo interno a Telefono.
*/

#include <iostream>
#include <string>
using namespace std;

class Dispositivo{  // Base
    public:
        void accendi(){
            cout<<"Dispositivo acceso\n";
        }
};

class Telefono : protected Dispositivo{
    public:
        void avvia(){
            accendi();
        }
};

int main(){

    Telefono t;
    t.avvia(); // Stampa: Dispositivo acceso
}