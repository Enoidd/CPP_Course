/*
Obiettivo: Osservare che senza virtual, anche se le classi derivate hanno metodi con lo stesso nome, il metodo chiamato tramite un puntatore alla base è quello della classe base, a causa della risoluzione statica.

Istruzioni dettagliate:

Crea una classe base Animale con un metodo void verso(), che stampa "Verso indefinito".

Crea due classi derivate:

Cane con metodo void verso() che stampa "Bau"

Gatto con metodo void verso() che stampa "Miao"

Nel main():

Istanzia un oggetto Cane e uno Gatto

Crea due puntatori Animale* e puntali rispettivamente a Cane e Gatto

Chiama verso() tramite entrambi i puntatori

Osserva e spiega:

Quali versioni del metodo vengono eseguite?

Perché non si attiva il polimorfismo?
*/


/*

POLIMORFISMO STATICO SENZA VIRTUAL - Metodo della classe "Base"

*/

#include <iostream>
#include <string>
using namespace std;

class Animale{
    public:
        void verso(){
            cout<<"Verso indefinito\n";
        }
};

class Cane : public Animale{
    public:
        void verso() {
            cout<<"Bau\n";
        }
};

class Gatto : public Animale{
    public:
        void verso() {
            cout<<"Miao\n";
        }
};

int main(){
    Cane c;
    Gatto g;

    Animale* ptrCane = &c;
    Animale* ptrGatto = &g;

    ptrCane->verso(); // STAMPA "Verso indefinito"
    ptrGatto->verso(); // STAMPA "Verso indefinito"

    /* Stesso concetto dell'Esercizio1, nonostante ai puntatori venga passato l'indirizzo di
    un oggetto di tipo Cane e Gatto, non essendoci il virtual la compilazione è compile-time e non runtime */
}