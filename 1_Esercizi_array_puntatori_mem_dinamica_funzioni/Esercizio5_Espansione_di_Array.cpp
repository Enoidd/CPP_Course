/*Scrivi una funzione che raddoppia la dimensione di un array dinamico, copiando i valori esistenti e inizializzando i nuovi a 0.

Suggerimento: restituisci un nuovo puntatore e dealloca quello vecchio.
*/

#include <iostream>
using namespace std;

int* raddoppia(int* array, int* d){
    int dim = *d;
    *d = (*d)*2;    // raddoppia la dimensione

    int* raddoppiato = new int[*d];
    for(int i=0; i<dim; i++){
        raddoppiato[i] = array[i];
    }

    for(int i=dim; i<*d; i++){
        raddoppiato[i] = 0;
    }

    delete[] array;
    return raddoppiato;
}

int main(){

    int* d = new int;
    *d = 0;

    cout<<"Dimensione: ";
    cin>>*d;

    int* array = new int[*d];

    // Input
    for(int i=0; i<*d; i++){
        cout<<""<<i+1<<" elemento: ";
        cin>>array[i];
    }

    int* nuovoArray = raddoppia(array, d);

    cout<<"Array raddoppiato: [";
    for(int i=0; i<*d; i++){
        cout<<" "<<nuovoArray[i];
    }
    cout<<"]\n";
    
    delete[] nuovoArray;
    delete d;
}