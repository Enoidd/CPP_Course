/*
Comprendere il comportamento del polimorfismo statico (senza virtual).
Istruzioni dettagliate:

Crea una classe base Veicolo con un metodo void muovi(), che stampa: "Il veicolo si muove genericamente."

Crea una classe derivata Auto che ridefinisce muovi() e stampa: "L'auto si muove su strada."

NON usare la parola chiave virtual.

Nel main():

Crea un oggetto Auto chiamato a.

Crea un puntatore Veicolo* ptr e fallo puntare a a.

Chiama ptr->muovi();

Osserva il comportamento. Perché stampa il metodo della classe base?
*/

#include <iostream>
#include <string>
using namespace std;

class Veicolo{
    public: 
        void muovi(){
            cout<<"Il veicolo si muove genericamente.\n";
        }
};

class Auto : public Veicolo{
    public:
        void muovi(){
            cout << "L'auto si muove su strada.\n";
        }
};

int main(){
    Auto a;
    Veicolo* ptr = &a;
    ptr->muovi(); // STAMPA "Il veicolo si muove genericamente."

    /* Perché non sto ridefinendo il metodo della classe derivata e pertanto ciò che stampa
    è il metodo della classe base, nonostante il puntatore contiene l'indirizzo dell'oggetto 
    della classe derivata. 
    
    La risoluzione non avviene a runtime ma a compiler-time */
}