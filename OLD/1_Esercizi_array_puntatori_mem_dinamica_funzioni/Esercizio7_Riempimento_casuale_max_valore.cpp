/*
Alloca un array dinamico di int e riempilo con numeri casuali (rand()), poi trova il massimo valore usando una funzione dedicata.

Usa:int massimo(int* arr, int n);
*/

#include <iostream>
using namespace std;

int massimo(int* arr, int n){

    int max = arr[0];
    
    for(int i=1; i<n; i++){
        if(max<arr[i])
            max = arr[i];
    }
    return max;
}

int main(){

    int* n = new int;
    cout<<"Dimensione: ";
    cin>>*n;

    int* arr = new int[*n];
    
    for(int i=0; i<*n; i++){
        arr[i] = rand() % 100 + 1;
    }

    for(int i=0; i<*n; i++){
        cout<<" "<<arr[i];
    }

    cout<<"Max: "<<massimo(arr, *n);
    delete[] arr;
}