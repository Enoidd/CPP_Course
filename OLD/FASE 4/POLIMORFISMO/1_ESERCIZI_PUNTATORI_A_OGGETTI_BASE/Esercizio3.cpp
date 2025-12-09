/*
Confrontare comportamento con e senza virtual (introduzione a 14.2).
Istruzioni dettagliate:

Riprendi uno degli esercizi sopra.

Modifica il metodo della classe base (muovi() o verso()) aggiungendo la parola chiave virtual.

Ricompila ed esegui.

Osserva la differenza: viene ora eseguito il metodo della classe derivata.

Concludi: Perché ora funziona?

Funziona perché essendoci il virtual nel metodo della classe base e l'override nel metodo
della classe derivata, viene eseguito il metodo specifico della classe a cui punta "ptr", poiché
contiene l'indirizzo di un oggetto di tipo "Auto". La risoluzione è a runtime. 
*/

/*

POLIMORFISMO DINAMICO QUANDO C'E' VIRTUAL - Metodo della classe derivata se esiste

SE NON ESISTE: Metodo della classe base.

*/

#include <iostream>
using namespace std;

class Veicolo{
    public: 
        virtual void muovi() const{
            cout<<"Il veicolo si muove genericamente.\n";
        }
};

class Auto : public Veicolo{
    public:
        void muovi() const override{
            cout << "L'auto si muove su strada.\n";
        }
};

int main(){

    Auto a; // Base
    Veicolo* ptr = &a;
    ptr->muovi(); // STAMPA "L'auto si muove su strada.

}