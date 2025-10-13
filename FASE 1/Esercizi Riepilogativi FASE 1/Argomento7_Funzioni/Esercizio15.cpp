/*
Esercizio riepilogativo argomento Funzioni.
*/


/* RICHIESTA
Scrivi una funzione bool isPrime(int n) che ritorna true se il numero è primo, altrimenti false.
Nel main():

Chiedi un numero all’utente

Stampa un messaggio che indichi se è primo oppure no
*/

#include <iostream>

using namespace std;

bool isPrime(int n){

    return n%2!=0;
}

int main(){

    int numero;

    cout << "Inserisci un numero: ";
    cin >> numero;

    if(isPrime(numero))
        cout << "E' primo.";
    else
        cout << "Non e' primo.";
}