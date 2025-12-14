/*

OPERATORE NEW

*/

#include <iostream>
using namespace std;

int main(){

    int* p = new int; // alloca memoria su heap
                      // restituisce un puntastore
                      // valore non inizializzato (solo dichiarato)

    int* i = new int(5); // valore inizializzato
}