/*
Funzione void stampaInvertito(int* arr, int size)

Usa puntatori per stampare gli elementi da fine a inizio

Funzione che restituisce array invertito: Ritorna un nuovo array dinamico invertito

Usa solo puntatori

Main lo stampa e dealloca
*/

#include <iostream>
using namespace std;

void stampaInvertito(int* arr, int size){

    int* p = arr+size-1;

    while(p>=arr){
        cout << "" << *p << ",";
        p--;
    }
}

int* inverti(int* arr, int size){

    int* array = new int[size]; // array di dimensione 'size'
    int* end = arr+size-1; // parti dall'ultimo elemento dell'array
    int* p = array; // puntatore di lavoro/appoggio

    while(end>=p){ // fintanto che 'end' non supera l'inizio
        *p = *end; // mette dentro *p che punta al nuovo array l'elemento puntato da 'end'
        end--; // passa al prossimo decrescendo nell'array
    }

    return array;
}

int main(){

    int n=0;
    int* arr = nullptr;

    cout << "Dimensione:"; 
    cin >> n;

    arr = new int[n];
    int* p = arr;

    int* end = arr+n;

    while(p<end){
        cout << "Inserisci un valore: ";
        cin >> *p;
        p++;
    }

    stampaInvertito(arr, n);

    int* array = inverti(arr, n);

    end = array+n;

    while(array>end){
        cout << "" << *array;
    }
    delete[] array; // dealloca l'array creato
}