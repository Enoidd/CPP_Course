/*

-Definisci una classe base Risorsa con:

costruttore che stampa

distruttore virtual che stampa

-Definisci una derivata Socket

Scrivi due funzioni:

usa(const Risorsa&) → non prende ownership

prendi(unique_ptr<Risorsa>) → prende ownership

-Nel main:

crea un unique_ptr<Risorsa> che punta a Socket

chiama usa(*ptr)

poi chiama prendi(std::move(ptr))

verifica che ptr sia nullptr

*/

#include <iostream>
#include <memory>
using namespace std;

class Risorsa{
    public:
        Risorsa(){cout<<"Risorsa Costruttore\n";}; // 1°
        virtual ~Risorsa(){cout<<"Risorsa Distruttore\n";};
};

class Socket : public Risorsa{
    public:
        Socket(){cout<<"Socket Costruttore\n";}; // 2°
        virtual ~Socket(){cout<<"Socket Distruttore\n";};
};

void usa(const Risorsa& r){
    cout<<"Funzione usa chiamata\n";
}

void prendi(unique_ptr<Risorsa> p){
    cout<<"Ownership presa\n";
}

int main(){

    unique_ptr<Risorsa> r = make_unique<Socket>();

    usa(*r);
    cout<<"r==nullptr: "<<(r==nullptr)<<endl; // atteso: 0

    prendi(move(r)); // passa l'ownership
    cout<<"r==nullptr: "<<(r==nullptr)<<endl; // atteso: 1
}