/*
somma/media/minimo/massimo degli elementi in un array dinamico.
*/

#include <iostream>
using namespace std;

int somma(int* array, int size){
    int* somma = new int;
    *somma = 0;
    for(int i=0; i<5; i++){
        *somma += array[i];
    }
    return somma;
}

int main(){

    int* array = new int[3];

    // Input
    for(int i=0; i<5; i++){
        cout<<""<<i+1<<" elemento: ";
        cin>>array[i];
    }

    // Output
    for(int i=0; i<5; i++){
        cout<<""<<array[i]<<",";
    }
}