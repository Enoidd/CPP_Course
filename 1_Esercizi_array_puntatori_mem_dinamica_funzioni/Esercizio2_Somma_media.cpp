/*
Scrivi una funzione che riceve un puntatore a un array dinamico e la sua lunghezza, e calcola somma e media dei valori.

void calcolaSommaMedia(int* arr, int n, int& somma, double& media);
*/

#include <iostream>
using namespace std;

int sommaElementi(int** array, int** n){
    int somma = 0;

    for(int i=0; i<**n; i++){
        somma+=(*array)[i];
    }
    cout<<"\nSomma: "<<somma;
    return somma;
}

void mediaElementi(int** array, int** n){
    float* media = new float;
    *media = 0;
    
    *media = (float)sommaElementi(array, n) / **n;

    cout<<"\nMedia: "<<*media<<endl;

    delete media;
}

int main(){

    int* n = new int;
    cout<<"Dimensione: ";
    cin>>*n;

    int* array = new int[*n];
    for(int i=0; i<*n; i++){
        cout<<""<<i+1<<" elemento: ";
        cin>>array[i];
    }

    sommaElementi(&array, &n);
    mediaElementi(&array, &n);

    delete n;
    delete[] array;
}