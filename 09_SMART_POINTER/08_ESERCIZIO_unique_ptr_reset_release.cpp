/*

Definisci una classe Risorsa che:

stampa un messaggio nel costruttore

stampa un messaggio nel distruttore

Nel main:

Crea un unique_ptr<Risorsa>

Usa reset() per distruggere l’oggetto

Crea un nuovo oggetto

Usa release() e distruggilo manualmente

*/

#include <iostream>
#include <memory>
using namespace std;

class Risorsa{
    public:
        Risorsa(){cout<<"Costuttore\n";};
        virtual ~Risorsa(){cout<<"Distruttore\n";};
};

int main(){

    unique_ptr<Risorsa> r = make_unique<Risorsa>();

    r.reset(); // distrugge l'oggetto 'r' Risorsa

    unique_ptr<Risorsa> rr = make_unique<Risorsa>();

    // release() e distruggi manualmente
    Risorsa* raw = rr.release(); // rr diventa nullptr, raw punta all'oggetto

    delete raw;
}