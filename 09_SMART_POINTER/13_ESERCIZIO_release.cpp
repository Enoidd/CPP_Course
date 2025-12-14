/*

-Definisci:

una classe base Risorsa

una derivata Connessione

-Nel main:

crea un unique_ptr<Risorsa> che punta a Connessione

chiama release() e salva il raw pointer

verifica che il unique_ptr sia nullptr

distruggi manualmente l’oggetto con delete

*/

#include <iostream>
#include <memory>
using namespace std;

class Risorsa{
    public:
        Risorsa(){cout<<"Costruttore Risorsa\n";};
        virtual ~Risorsa(){cout<<"Distruttore Risorsa\n";};
};

class Connessione : public Risorsa{
    public:
        Connessione(){cout<<"Costruttore Connessione\n";};
        virtual ~Connessione(){cout<<"Distruttore Connessione\n";};
};

int main(){

    unique_ptr<Risorsa> p = make_unique<Connessione>();

    Risorsa* raw = p.release(); // p diventa nullptr perde l'ownership

    delete raw;
}