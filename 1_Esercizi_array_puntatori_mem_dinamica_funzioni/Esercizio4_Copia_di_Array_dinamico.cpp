/*
Scrivi una funzione che, dato un array dinamico, crei una copia in un nuovo array dinamico.

int* copiaArray(int* src, int n);

*/

#include <iostream>
using namespace std;

int main(){

    int* n = new int;
    *n = 0;

    cout<<"Dimensione: ";
    cin>>*n;

    int* array = new int[*n];

    // Input
    for(int i=0; i<*n; i++){
        cout<<""<<i+1<<" elemento: ";
        cin>>array[i];
    }
    cout<<"\n";

    // Output
    for(int i=0; i<*n; i++){
        cout<<" "<<array[i];
    }

    int* arrayCopia = new int[*n];

    for(int i=0; i<*n; i++){
        arrayCopia[i] = array[i];
    }
    cout<<"\narray copiato."<<endl;
    // Output
    for(int i=0; i<*n; i++){
        cout<<" "<<arrayCopia[i];
    }
    
    delete n;
    delete[] array;
    delete[] arrayCopia;
}