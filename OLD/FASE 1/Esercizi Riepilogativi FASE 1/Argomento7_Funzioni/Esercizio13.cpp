/*
Esercizio riepilogativo argomento Funzioni.
*/


/* RICHIESTA
Scrivi una funzione int quadrato(int n) che ritorni il quadrato di un numero intero.
Nel main():

Chiedi un numero all’utente

Stampa il suo quadrato usando la funzione
*/

#include <iostream>

using namespace std;

int quadrato(int numero){

    int q;
    q=numero*numero;
    return q; 
}

int main(){

    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;
    
    cout << "Il numero da te inserito vale: " << numero << ", il suo quadrato vale: " << quadrato(numero);
}