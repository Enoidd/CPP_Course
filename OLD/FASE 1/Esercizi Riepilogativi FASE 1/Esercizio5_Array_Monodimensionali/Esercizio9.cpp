/*
Esercizio riepilogativo argomento Array Monodimensionali.
*/


/* RICHIESTA
Scrivi un programma che:

Chieda all’utente quanti numeri vuole inserire (massimo 10),

Salvi i numeri in un array,

Calcoli e stampi la somma e la media.
*/

#include <iostream>
using namespace std;

int main(){

    int dimensione;
    int somma=0;
    float media=0;
    cout << "Quanti numeri vuoi inserire? Scrivilo qui: ";
    cin >> dimensione;
    
    while(dimensione>10){
        cout << "Puoi inserire un massimo di 10 numeri. Inserisci nuovamente quanti numeri vuoi inserire: ";
        cin >> dimensione;
    }

    int a[dimensione];
    for(int i=0; i<dimensione; i++){
        cout << "Inserisci il " << i+1 << " numero: ";
        cin >> a[i];
        somma+=a[i];
    }
    
    media=(float)somma/(float)dimensione;
    cout << "Somma: " << somma << ", media: " << media;
}