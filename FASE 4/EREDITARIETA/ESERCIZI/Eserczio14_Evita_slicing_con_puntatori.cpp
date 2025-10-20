/*
Usa Animale* a = new Gatto(); per evitare slicing.
Dimostra comportamento corretto. (Esercizio 13)
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
    Animale* a = &g; 
    a->suono(); // STAMPA "Miao Miao"
}