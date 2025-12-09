/*
Legge 10 numeri interi in un array.

Conta e stampa quanti di questi sono:

positivi

negativi

uguali a zero

Usa una funzione separata per contare ciascuna categoria (contaPositivi, contaNegativi, contaZeri).
*/

#include <iostream>

using namespace std;

int contaPositivi(int arr[], int size){
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i]>0)
            count++;
    }
    return count;
}

int contaNegativi(int arr[], int size){
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i]<0)
            count++;
    }
    return count;
}

int contaZeri(int arr[], int size){
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i]==0)
            count++;
    }
    return count;
}

int main(){

    int size;
    cout << "Inserisci una dimensione del tuo array: ";
    cin >> size;

    int arr[size];
    //input
    for(int i=0; i<size; i++){
        cout << "Inserisci il " << i+1 << " numero: ";
        cin >> arr[i];
    }

    cout << "Elementi positivi: " << contaPositivi(arr, size) << endl;
    cout << "Elementi negativi: " << contaNegativi(arr, size) << endl;
    cout << "Elementi uguali a 0: " << contaZeri(arr, size) << endl;
}