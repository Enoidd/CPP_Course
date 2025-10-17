/*
Dichiara int x = 5; int* p = &x; int** pp = &p;

Stampa x, *p, **pp

Cambia x usando **pp = 9
*/

#include <iostream>
using namespace std;

int main(){

    int x = 5;
    int* p = &x; // contiene l'indirizzo di 'x' dove si trova '5'
    int** pp = &p; // contiene l'indirizzo di 'p' (puntatore a puntatore a variabile)

    cout << "x: " << x << endl; // STAMPA 5
    cout << "*p: " << *p << endl; // STAMPA 5
    cout << "**pp: " << **pp << endl; // STAMPA 5

    **pp = 9; // DEFERENZIAZIONE

    cout << "x:" << x; 
}