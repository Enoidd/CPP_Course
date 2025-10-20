/*
Crea una classe Veicolo con un metodo muovi(). 
Crea una classe derivata Auto che eredita muovi() e aggiunge clacson().
*/

#include <iostream>
using namespace std;

class Veicolo{ // Classe base
    public:
        void muovi(){
            cout<<"Il Veicolo si sta spostando"<<endl;
        }
};

class Auto : public Veicolo{ // Classe derivata
    public:
        void clacson(){
            cout<<"BepBep"<<endl;
        }
};

int main(){

    Auto a;

    a.muovi();
    a.clacson();
}