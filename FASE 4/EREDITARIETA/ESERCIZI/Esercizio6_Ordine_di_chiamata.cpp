/*
Crea una classe Base con costruttore e distruttore che stampano messaggi.
Crea una classe Derivata da Base con propri costruttore/distruttore.
Mostra l’ordine di esecuzione nel main().
*/

#include <iostream>
using namespace std;

class Base{
    public:
        // Costruttore
        Base(){
            cout<<"Costruttore BASE\n";
        }
        // Distruttore
        ~Base(){
            cout<<"Distruttore BASE\n";
        }
};

class Derivata : public Base{
    public:
        // Costruttore
        Derivata(){
            cout<<"Costruttore DERIVATA\n";
        }
        // Distruttore
        ~Derivata(){
            cout<<"Distruttore DERIVATA\n";
        }
};

int main(){
    Derivata d;
}