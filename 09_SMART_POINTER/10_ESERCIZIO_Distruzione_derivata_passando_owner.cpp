/*

-Definisci una classe base Risorsa che:

stampa nel costruttore

ha un distruttore virtual che stampa

-Definisci una classe File derivata da Risorsa che:

stampa nel costruttore

stampa nel distruttore

-Scrivi una funzione consuma che:

riceve un unique_ptr<Risorsa>

stampa un messaggio

-Nel main:

crea un unique_ptr<Risorsa> che punta a un File

passalo a consuma con std::move

stampa se il puntatore nel main è nullptr

*/

#include <iostream>
#include <memory>
using namespace std;

class Risorsa{
    public:
        Risorsa(){cout<<"Risorsa Costruttore\n";};
        virtual ~Risorsa(){cout<<"Risorsa Distruttore\n";};

};

class File:public Risorsa{
    public:
        File(){cout<<"File Costruttore\n";};
        virtual ~File(){cout<<"File Distruttore\n";};
};

void consuma(unique_ptr<Risorsa> p){
    cout<<"Risorsa consumata\n";
}

int main(){

    unique_ptr<Risorsa> r = make_unique<File>();

    consuma(move(r)); // passaggio di ownership

    cout<<"r==nullptr: "<<(r==nullptr)<<endl;
}
