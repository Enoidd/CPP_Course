/*
Crea classe Animale con metodo verso().
Deriva Gatto e ridefinisci verso().
Usa Animale* a = new Gatto(); e chiama a->verso();
Mostra che senza virtual non si ottiene override dinamico.
*/

#include <iostream>
using namespace std;

class Animale{
    public:
        void verso(){
            cout<<"Verso indefinito\n";
        }
};

class Gatto : public Animale{
    public:
        void verso(){ // Ridefinisci ma non in modo dinamico
            cout<<"Miao miao\n";
        }
};

int main(){

    Animale* ptr = new Gatto();
    ptr->verso(); // STAMPA "Verso sconosciuto"
}

/*
NON STAMPA "Miao Miao" perché il compiler guarda il tipo del puntatore e quindi
l'esecuzione non avviene a runtime (se la ridefinizione fosse stata dinamica) ma a compile-time
*/