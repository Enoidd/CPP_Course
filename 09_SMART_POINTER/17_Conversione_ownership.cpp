/*

Capire:

ownership esclusiva vs condivisa

trasferimento corretto da unique_ptr a shared_ptr

distruttori virtuali



-Crea una classe base astratta Risorsa:

distruttore virtuale

metodo virtuale void usa() const = 0

stampa messaggi in costruttore/distruttore

-Crea una classe derivata SocketSimulato:

possiede una risorsa tramite std::unique_ptr<int>

inizializza la risorsa nel costruttore

override di usa()

-Nel main:

crea un std::unique_ptr<Risorsa> a SocketSimulato

trasferisci la ownership in uno std::shared_ptr<Risorsa>

verifica che:

il unique_ptr diventi nullptr

lo shared_ptr funzioni correttamente

crea una seconda copia dello shared_ptr

osserva i distruttori a fine scope

*/

#include <iostream>
#include <memory>
using namespace std;

class Risorsa{
    public:
        Risorsa(){cout<<"Costruttore Risorsa\n";};
        virtual ~Risorsa(){cout<<"Distruttore Risorsa\n";};
        
        virtual void usa() const{
            cout<<"Risorsa usata.\n";
        }
};

class SocketSimulato : public Risorsa{
    public:
        unique_ptr<int> p;
        SocketSimulato(): Risorsa(), p(make_unique<int>(40)){cout<<"Costruttore SocketSimulato valore: "<<*p<<"\n";};
        virtual ~SocketSimulato(){cout<<"Distruttore SocketSimulato.\n";};
        void usa() const override{
            cout<<"SocketSimulato usato.\n";
    }
};

int main(){

    unique_ptr<Risorsa> p = make_unique<SocketSimulato>();

    shared_ptr<Risorsa> s = move(p); // trasferimento ownership

    // check 'p' is nullptr
    cout<<"(p==nullptr): "<<(p==nullptr)<<endl; // atteso: 1 (ownership trasferita a 's')

    s->usa();

}