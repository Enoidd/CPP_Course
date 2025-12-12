/*

REFERENZA vs PUNTATORE

REFERENZA:
    - Deve essere inizializzata
    - Non può cambiare cosa punta
    - Uguale alla variabile (alias)
    - Occupazione memoria 0

PUNTATORE:
    - Non deve essere inizializzato
    - Può cambiare a cosa punta
    - Non è uguale alla variabile (non è un alias)
    - Occupa memoria

*/

#include <iostream>
using namespace std;

int main(){

    int x = 5;
    int* p = &x; // puntatore a 'x'

    int*& refP = p; // alias del puntatore 'p'

    // Dunque posso usare la reference al puntatore come alias di x
    cout<<"x: "<<x<<endl; // atteso: 5
    cout<<"*p: "<<*p<<endl; // atteso: 5
    cout<<"refP: "<<*refP<<endl; // atteso: 5

    // Memoria
    cout<<"indirizzo x: "<<&x<<endl; // atteso: 604
    cout<<"indirizzo p: "<<&p<<endl; // atteso: 967
    cout<<"indirizzo refP: "<<refP<<endl; // atteso: 604
}
