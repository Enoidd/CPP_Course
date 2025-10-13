/*
Scrivi un programma che:

Chiede all’utente di inserire al massimo 10 numeri.

Salva i numeri in un array.

Usa una funzione che restituisce true se l’array è palindromo, false altrimenti.

Un array è palindromo se si legge uguale da sinistra e da destra.
Esempio: Input: 1 2 3 2 1 → Palindromo - Input: 1 2 3 4 5 → Non palindromo
*/

#include <iostream>

using namespace std;

bool palindromo(int arr[], int size){

    bool isPalindromo = true;

    for(int i=0; i<size/2; i++){
        if(arr[i]!=arr[size-1-i])
            isPalindromo=false;
    }
    return isPalindromo;
}

int main(){

    int size;
    cout << "Quanti numeri vuoi inserire? (max 10): ";
    cin >> size;

    while(size>10){
        cout << "Valore non valido. Inserisci nuovamente un numero: ";
        cin >> size;
    }

    int arr[size];
    //input
    for(int i=0; i<size; i++){
        cout << "Inserisci il " << i+1 << " numero: ";
        cin >> arr[i];
    }

    if(palindromo(arr, size)){
        cout << "Palindromo" << endl;
    }
    else
        cout << "Non è' Palindromo." << endl;

}