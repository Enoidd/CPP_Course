/*
Esercizio riepilogativo argomento Cicli e iterazioni.
*/


/* RICHIESTA
Scrivi un programma che:

Chieda all’utente un numero intero n.

Calcoli la somma dei primi n numeri pari.

Calcoli anche la somma dei primi n numeri dispari.

Stampi entrambe le somme.
*/

#include <iostream>
using namespace std;

int main(){

    int intero;
    int count=0; // contatore numeri
    cout << "Inserisci un intero: ";
    cin >> intero;

    int somma=0;
    for(int i=1; count<intero; i++){
        if(i%2==0){
            somma+=i;
            cout << " Numero: " << i;
            count++;
        }
    }
    cout << "Somma dei primi " << intero << ", numero pari: " << somma << endl;
    somma=0;
    count=0;
    for(int i=1; count<intero; i++){
        if(i%2==1){
            somma+=i;
            cout << " Numero: " << i;
            count++;
        }
    }
    cout << "Somma dei primi " << intero << ", numero dispari: " << somma;
}