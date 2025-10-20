/*
Crea classi Animale e Gatto, Cane. Usa un puntatore a Animale* per invocare verso() 
e osserva la differenza tra con e senza virtual.
*/

#include <iostream>
#include <string>
using namespace std;

class Animale{  // Classe base
    public:
        // Metodo verso
        virtual void verso(){
            cout<<"Verso indefinito\n";
        }
};

class Gatto : public Animale{ // Classe derivata
    public:
        void verso() override{  // ridefinizione del metodo verso della classe base
            cout<<"Miao Miao\n";
        }
};

class Cane : public Animale{ // Classe derivata
    public:
        void verso() override{ // ridefinizione del metodo verso della classe base
            cout<<"Bau bau\n";
        }
};

int main(){

    Animale a;
    a.verso(); // STAMPA "Verso indefinito"

    Gatto g;
    g.verso(); // STAMPA "Miao Miao"

    Cane c;
    c.verso(); // STAMPA "Bau Bau";

    Animale* ptr = &g;
    ptr->verso(); // STAMPA "Miao Miao";
}