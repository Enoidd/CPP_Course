/*

VIRTUAL - Per il polimorfismo, permette di usare il metodo corretto anche con un
puntatore a classe base.

*/

#include <iostream>
#include <string>
using namespace std;

class Animale{ // Base class
    public:
    /* Se una classe eredita da questa, ridefinisci questo metodo quando viene
    chiamato su un puntatore o riferimento alla classe base e usa la versione più
    specifica (quella derivata) */
        virtual void verso(){
            cout<<"Verso indefinito\n";
        }
};

class Cane : public Animale{ // Derivata
    public:
        void verso() override{ // Ridefinisci il metodo della classe 'Base'
            cout<<"Bau Bau\n";
        }
};

int main(){

    Animale* a = new Cane();
    //1° Animale* a -> Statico, vede metodo 'virtual'
    //2° non vede però a runtime quale oggetto concretamente c'è
    //3° a Runtime vede il tipo dinamico dell'oggetto che è 'Cane' dunque sceglie la funzione specifica

    a->verso(); // atteso: "Bau Bau"

    Cane c;
    Animale* ptr = &c; // 'c' contiene l'inidirizzo di memoria di 'c' che è della classe 'derivata'
    ptr->verso(); // Mi aspetto sempre "Bau Bau"
}