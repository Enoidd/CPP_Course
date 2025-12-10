/*

Dichiara una costante:

const int MAX_SPEED = 120;


E prova a modificarla nel programma.
Cosa succede? Perché?

Il compilatore mostra un errore nella modifica della "costante" questo perché la variabile essendo dichiarata "const int" 
è un valore non modificabile. 

*/

#include <iostream>
using namespace std;

int main(){

    const int MAX_SPEED=120;
    MAX_SPEED = 20;


}