/*
Scrivi un programma che chiede all’utente di inserire 5 numeri interi in un array. Il programma deve:

Stampare solo i numeri pari inseriti.
*/

#include <iostream>

using namespace std;

int main(){

    int arr[5]; // Dichiarazione senza inizializzazione

    // input
    for(int i=0; i<5; i++){
        cout << "Inserisci il " << i+1 << " elemento: ";
        cin >> arr[i];
    }

    // output arr[]
    for(int i=0; i<5; i++){
        cout << "[";
        cout << arr[i];
        cout << "]"; 
    }
}