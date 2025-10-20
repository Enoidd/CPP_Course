/*
Creazione e inizializzazione

Obiettivo: usare new per creare un array dinamico, assegnare valori e stamparli.
*/

#include <iostream>
using namespace std;

int main(){

    int* array = new int[5];

    // Input
    for(int i=0; i<5; i++){
        cout<<""<<i+1<<" elemento: ";
        cin>>array[i];
    }

    // Output
    for(int i=0; i<5; i++){
        cout<<""<<array[i]<<",";
    }

    delete[] array;
}