/*
Esercizio riepilogativo argomento Funzioni.
*/


/* RICHIESTA
Scrivi un programma che:

Chieda all’utente quanti numeri (massimo 10) vuole inserire.

Li salvi in un array.

Passi l’array a una funzione che restituisce:

il numero più grande

il numero più piccolo

la media

Usa solo ritorni di valore, niente passaggio per riferimento (&) e niente std::string, solo int, float, void, ecc.
Richiama la funzione e stampa i risultati

Funzione int trovaMassimo(int arr[], int size)

Funzione int trovaMinimo(int arr[], int size)

Funzione float calcolaMedia(int arr[], int size)

Il main() gestisce l’input/output, le funzioni elaborano i dati.
*/

#include <iostream>

using namespace std;

int trovaMassimo(int arr[], int size){

    int max=arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]>=max)
            max = arr[i];
    }
    return max;
}

int trovaMinimo(int arr[], int size){
    int min=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]<=min)
            min = arr[i];
    }
    return min;
}

float calcolaMedia(int arr[], int size){
    int media;
    int somma=0;

    for(int i=0; i<size; i++){
        somma+=arr[i];
    }
    media = somma/size;
    return media;
}

int main(){

    int dimensione;

    cout << "Inserisci la dimensione dell'array: ";
    cin >> dimensione;

    while(dimensione>10){
        cout << "La dimensione deve essere massimo di 10. Inserisci una nuova dimensione:";
        cin >> dimensione;
    }

    int array[dimensione];
    for(int i=0; i<dimensione; i++){
        cout << "Inserisci il " << i+1 << " numero:";
        cin >> array[i];
    }

    cout << "Massimo numero nell'array: " << trovaMassimo(array, dimensione);
    cout << "Minimo numero nell'array: " << trovaMinimo(array, dimensione);
    cout << "Calcolo della media nell'array: " << calcolaMedia(array, dimensione);
}