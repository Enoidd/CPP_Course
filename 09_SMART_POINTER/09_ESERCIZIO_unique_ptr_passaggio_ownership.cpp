/*

-Definisci una classe Risorsa che:

stampa nel costruttore

stampa nel distruttore

-Scrivi una funzione usaRisorsa che:

riceve un unique_ptr<Risorsa>

stampa un messaggio

-Nel main:

crea un unique_ptr<Risorsa>

passalo a usaRisorsa usando std::move

verifica che dopo la move il puntatore nel main sia nullptr

*/

#include <iostream>
#include <memory>
using namespace std;

class Risorsa{
    public:
        Risorsa(){cout<<"Costruttore\n";};
    
        virtual ~Risorsa(){cout<<"Distruttore\n";};
  
        void usa(){cout<<"Risorsa usata.\n";};
};

void usaRisorsa(unique_ptr<Risorsa> p){ // 2° Prende ownership
    cout<<"Dentro usaRisorsa()\n";
    p->usa();
} // esce dallo scope, 'p' viene distrutto dal distruttore

int main(){

    unique_ptr<Risorsa> r = make_unique<Risorsa>();

    usaRisorsa(move(r)); // 1° trasferisce ownership

    cout<<"r==nullptr: "<<(r==nullptr)<<endl; // atteso: 1
    
}