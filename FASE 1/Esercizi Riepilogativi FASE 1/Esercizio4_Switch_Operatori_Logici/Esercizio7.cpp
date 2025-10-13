/*
Esercizio riepilogativo argomento Switch e Operatori logici.
*/


/* RICHIESTA
Scrivi un programma che:

Chieda all’utente di inserire un numero da 1 a 7,

Stampa il giorno della settimana corrispondente (1 = lunedì, 2 = martedì, ecc.),

Se il numero non è tra 1 e 7, stampa un messaggio di errore.
*/

#include <iostream>

using namespace std;

int main(){

    int numero;
    cout << "Inserisci un numero compreso tra 1 e 7: ";
    cin >> numero;

    while(numero<1 || numero>7){
        cout << "Hai inserito un numero non valido. Inserisci un numero compreso tra 1 e 7: ";
        cin >> numero;     
    }

    switch(numero){
        case 1: 
            cout << "Lunedi'" << endl;
            break;
        case 2: 
            cout << "Martedi'" << endl;
            break;
        case 3: 
            cout << "Mercoledi'" << endl;
            break;
        case 4:
            cout << "Giovedi'" << endl;
            break;
        case 5:
            cout << "Venerdi'" << endl;
            break;
        case 6:
            cout << "Sabato" << endl;
            break;
        case 7:
            cout << "Domenica" << endl;
            break;
    }
}