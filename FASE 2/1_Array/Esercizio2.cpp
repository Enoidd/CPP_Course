/*
Chiede all’utente di inserire una dimensione massima di 10.

Salva i numeri interi in un array.

Calcola e stampa:

la somma

la media

il numero più grande e il più piccolo
*/

#include <iostream>

using namespace std;

int sommaElementiArray(int arr[], int size){
    int somma=0;
    for(int i=0; i<size; i++){
        somma+=arr[i];
    }
    return somma;
}

float media(int arr[], int size){
    return sommaElementiArray(arr, size)/size;
}

void maxMin(int arr[], int size){
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>=max) max=arr[i];
        if(arr[i]<=min) min=arr[i];
    }
    cout << "Valore massimo nell'array: " << max << endl;
    cout << "Valore minimo nell'array: " << min;
}

int main(){

    int sizeMax;
    cout << "Inserisci una dimensione massima di 10: ";
    cin >> sizeMax;

    while(sizeMax>10){
        cout << "Valore inserito non valido. Dimensione massima 10. Inserisci una nuova dimensione: ";
        cin >> sizeMax;
    }

    int arr[sizeMax];
    //input
    for(int i=0; i<sizeMax; i++){
        cout << "Inserisci il " << i+1 << " intero: ";
        cin >> arr[i];
    }

    int somma=sommaElementiArray(arr, sizeMax);
    cout << "La somma degli elementi dell'array vale: " << somma << endl;
    cout << "La media degli elementi dell'array vale: " << media(arr, sizeMax) << endl;
    maxMin(arr, sizeMax);
}