/*

Macro per convertire minuti in secondi

Crea una macro:

#define TO_SECONDS(m) (m * 60)


Nel main:

chiedi all’utente quanti minuti vuole convertire

stampa il risultato usando la macro

*/

#include <iostream>
using namespace std;

#define MINUTI_SECONDI(m) (m * 60)

int main(){

    double minuti;

    cout<<"Inserisci un minuto qualsiasi mm/ss: ";
    cin>>minuti;

    cout<<"Secondi: "<<MINUTI_SECONDI(minuti);
}