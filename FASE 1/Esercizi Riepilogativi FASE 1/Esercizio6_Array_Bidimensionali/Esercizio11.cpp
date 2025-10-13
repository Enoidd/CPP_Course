/*
Esercizio riepilogativo argomento Array Bidimensionali.
*/


/* RICHIESTA
Scrivi un programma che:

Crea una matrice 3x3 di interi,

Chiede all’utente di riempirla,

Calcola la somma degli elementi.
*/

#include <iostream>
using namespace std;

int main(){

    int matrice[3][3];

    cout << "Riempi la matrice [3][3]." << endl;
    
    int j=0;
    int i=0;
    int somma=0;
    while(i<3){
        while(j<3){
            cout << "Inserisci l'elemento in posizione: " << i+1 << "," << j+1 << ":";
            cin >> matrice[i][j];
            somma+=matrice[i][j];
            j++;
            cout << "j: " << j << endl;
        }
        j=0;
        i++;
        cout << "i: " << i << endl;;
    }
    cout << "La somma degli elementi vale: " << somma;
}