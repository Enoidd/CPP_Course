/*
Crea un array int arr[5]

Scrivi una funzione int somma(int* arr, int size)

Calcola la somma usando solo puntatori (no arr[i])

Funzione che restituisce il valore massimo
*/

#include <iostream>
using namespace std;

void somma(int* arr, int size){

    int somma = 0;
    int *end = arr+size;

    while(arr < end){
        somma += *arr;
        arr++;
    }

    cout << "somma: " << somma << endl;
}

void massimo(int* arr, int size){

    int max = *arr;
    int *end = arr+size;

    while(arr < end){
        if(*arr > max)
            max = *arr;
        arr++;
    }
    
    cout << "Valore massimo: " << max << endl;
}

int main(){

    int arr[5];

    for(int i=0; i<5; i++){
        cout << "Inserisci un valore: ";
        cin >> arr[i];
    }

    somma(arr, 5);

    massimo(arr, 5);
}