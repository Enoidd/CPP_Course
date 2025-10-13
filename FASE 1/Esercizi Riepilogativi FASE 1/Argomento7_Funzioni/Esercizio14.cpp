/*
Esercizio riepilogativo argomento Funzioni.
*/


/* RICHIESTA
Scrivi una funzione float media(float a, float b, float c) che calcoli la media di 3 numeri reali.
Nel main():

Acquisisci i 3 numeri da input

Stampa la media calcolata dalla funzione
*/

#include <iostream>

using namespace std;

float media(float a, float b, float c){

    float m;
    float somma = a+b+c;
    m = somma/3;
    return m;
}

int main(){

    float a, b, c;

    cout << "Inserisci il primo numero: ";
    cin >> a;
    cout << "Inserisci il secondo numero: ";
    cin >> b;
    cout << "Inserisci il terzo numero: ";
    cin >> c;

    cout << "La media di: " << a << "," << b << "," << c << " vale: " << media(a,b,c);
}