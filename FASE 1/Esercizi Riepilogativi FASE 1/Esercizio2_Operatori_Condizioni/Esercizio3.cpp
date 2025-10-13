/*
Esercizio riepilogativo argomento Operatori e Condizioni.
*/


/* RICHIESTA
Scrivi un programma che chieda all’utente un numero intero e:
- Stampi "Pari" se è pari
- Stampi "Dispari" se è dispari
*/

#include <iostream>
using namespace std;

int main(){
    int numero;

    cout << "Inserisci un numero: ";
    cin >> numero;

    if(numero%2==0)
        cout << "Pari";
    else
        cout << "Dispari";
}
