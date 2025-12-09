/*
Con virtual

Stesso codice, ma ora verso() in Animale è virtual.
Mostra come viene eseguito il metodo corretto.
*/

#include <iostream>
using namespace std;

class Animale{
    public:
        virtual void verso(){
            cout<<"Verso indefinito\n";
        }
};

class Gatto : public Animale{
    public:
        void verso() override{ // Ridefinisci in modo dinamico
            cout<<"Miao miao\n";
        }
};

int main(){

    Animale* ptr = new Gatto();
    ptr->verso(); // STAMPA Miao Miao
}