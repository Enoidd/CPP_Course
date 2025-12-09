/*
Chiedi all’utente la dimensione n

Alloca dinamicamente int* arr = new int[n]

Inserisci i valori

Calcola media, massimo, minimo

Libera la memoria
*/

#include <iostream>
using namespace std;

void max(int* arr, int size){

    int max=*arr;
    int *end= arr+size;
    
    while(arr<end){
        if(*arr > max)
            max = *arr;
        arr++;
    }

    cout << "Max: " << max << endl;
}

void min(int* arr, int size){

    int min=*arr;
    int* end=arr+size;

    while(arr<end){
        if(*arr < min)
            min = *arr;
        arr++;
    }
    
    cout << "Min:" << min << endl;
}

void media(int* arr, int size){

    float media=0;
    int* end=arr+size;
    int somma = 0;

    while(arr<end){
        somma += *arr;
        arr++;
    }

    media = somma/(float)size;

    cout << "Media:" << media << endl;
}

int main(){

    int n; // dimensione
    int* arr = nullptr;

    cout << "Inserisci una dimensione:"; 
    cin >> n;

    arr = new int[n];
    int* p = arr; // Indirizzo di 'arr'
    int* end = arr+n;

    while(p < end){
        cout << "Inserisci un valore: ";
        cin >> *p;
        p++;
    }

    max(arr, n);
    min(arr, n);
    media(arr, n);
}