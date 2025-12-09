/*
Esercizio riepilogativo argomento Array Bidimensionali.
*/

/* RICHIESTA
Scrivi un programma che:

Crea una matrice 4x4,

La riempie con numeri interi inseriti dall’utente,

Calcola la somma della diagonale principale e della diagonale secondaria
*/

#include <iostream>
using namespace std;

int main(){

    int matrice[4][4];
    int somma=0;
    int i=0;
    int j=0;
    while(i<4){ // input
        while(j<4){
            cout << "Inserisci l'intero in posizione " << i+1 << "," << "" << j+1 << ":";
            cin >> matrice[i][j];
            j++;
        }
        j=0;
        i++;
    }

    i=0;
    while(i<4){ // output-somma diagonale principale
        somma+=matrice[i][i];
        i++;
    }

    cout << "Somma diagonale principale: " << somma;

    i=0;
    while(j<4){ // output-somma diagonale secondaria
        somma+=matrice[i][3-i];
        j++;    
    }

    cout << "Somma diagonale secondaria: " << somma;
}