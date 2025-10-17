/*
Dichiarazione e dereferenziazione

Scrivi un programma che:

Dichiara un int x = 7

Usa un puntatore int* p = &x

Stampa:

L’indirizzo di x

Il contenuto di x tramite *p
*/

#include <iostream>
using namespace std;

int main(){

    int x = 7;
    int *p = &x;

    cout << "Indirizzo di x:" << p << endl;
    cout << "Contenuto di x tramite *p:" << *p << endl;
}