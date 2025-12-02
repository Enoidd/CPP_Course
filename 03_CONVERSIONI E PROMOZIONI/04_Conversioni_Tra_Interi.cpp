/*

Se viene convertito un valore negativo in un tipo 'unsigned' il risultato è il modulo2^N dove N rappresenta il numero di bit

*/

#include <iostream>
using namespace std;

int main(){

    // supponendo 'unsigned int' a 32bit
    int i = -1;
    unsigned int u = static_cast<unsigned int>(i);

    cout<<"u: "<<u<<endl; // atteso: 2^32 -1 = 4294967295

    // Se il valore 'unsigned' non è rappresentabile nel tipo 'signed' il risultato dipende dal compilatore ed è implementation-defined
}
