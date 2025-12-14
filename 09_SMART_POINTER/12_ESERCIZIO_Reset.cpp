/*

-Definisci:

una classe base Risorsa (costruttore che stampa, distruttore virtual)

una derivata Buffer

-Nel main:

crea un unique_ptr<Risorsa> che punta a Buffer

stampa se il puntatore è nullptr

chiama reset()

stampa di nuovo se il puntatore è nullptr

*/

#include <iostream>
#include <memory>
using namespace std;

class Definisci{
    public:
        Definisci(){cout<<"Definisci Costruttore\n";};
        virtual ~Definisci(){cout<<"Definisci Distruttore\n";};
};

class Buffer : public Definisci{
    public:
        Buffer(){cout<<"Buffer Costruttore\n";};
        virtual ~Buffer(){cout<<"Buffer Distruttore\n";};
};

int main(){

    unique_ptr<Definisci> p = make_unique<Buffer>();

    cout<<"p==nullptr: "<<(p==nullptr)<<endl; // atteso: 0

    p.reset(); // distrugge l'oggetto posseduto posto a nullptr

    cout<<"p==nullptr: "<<(p==nullptr)<<endl; // atteso: 1
}