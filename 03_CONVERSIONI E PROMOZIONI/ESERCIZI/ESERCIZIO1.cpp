/*

Promozione di char e short

Scrivi un programma che dichiara: 

char  c = 120;
short s = 10;

Stampa il tipo risultate e il valore dell'espressione:

auto r = c + s;

QUALI PROMOZIONI AVVENGONO?
PERCHE' IL TIPO RISULTANTE E' QUELLO SCELTO DAL COMPILATORE?

*/

#include <iostream>
using namespace std;

int main(){

    char c = 120;
    short s = 100;

    auto r = c + s; // char & short -> int = r -> int

    cout<<"sizeof(c): "<<sizeof(c)<<endl; // atteso: 1
    cout<<"sizeof(c): "<<sizeof(s)<<endl; // atteso: 2
    
    cout<<"r: "<<sizeof(r)<<endl; // atteso: 4
}

/*

La promozione avviene perché char e short sono tipi interi più piccoli di int e vengono automaticamente promossi a int. 
*/
