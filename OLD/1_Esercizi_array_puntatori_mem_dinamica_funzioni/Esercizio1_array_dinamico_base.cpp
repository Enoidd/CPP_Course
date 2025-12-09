/*
Scrivi un programma che:

Chiede all’utente la dimensione n dell’array.

Alloca dinamicamente un array di int di lunghezza n.

Permette di inserire i valori e poi li stampa al contrario.

Dealloca la memoria.

Usa new int[n] e una funzione stampaInvertita(int*, int).
*/

#include <iostream>
using namespace std;

// Funzione di somma elementi
void sommaElementi(int** array, int* n){

    int* somma = new int;
    *somma=0;

    for(int i=0; i<*n; i++){
        *somma += (*array)[i];
    }   
    cout<<"Somma: "<<*somma<<endl;
    delete somma;
}

int main(){

    int* n = new int; // dimensione

    cout<<"Inserisci una dimensione: ";
    cin>>*n;

    int* array = new int[*n]; // array dinamico

    // INPUT
    for(int i=0; i<*n; i++){
        cout<<""<<i+1<<" elemento: ";
        cin>>array[i];
    }

    // Da pos n-1 fino a posizione 0
    for(int i=*n-1; i>=0; i--){
        cout<<""<<array[i]<<",";
    }

    sommaElementi(&array, n);

    delete[] array;
    delete n;
}