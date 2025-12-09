/*
Esercizio riepilogativo argomento Switch e Operatori logici.
*/


/* RICHIESTA
Scrivi un programma che:

Chieda all’utente un voto da 0 a 30.

Se il voto è tra 18 e 30 → stampa il giudizio con uno switch:

18-23 = "Sufficiente"

24-26 = "Buono"

27-29 = "Ottimo"

30 = "Eccellente"

Se il voto è < 18 → stampa "Insufficiente"

Se il voto è fuori dal range [0-30] → stampa "Voto non valido"
*/

#include <iostream>
using namespace std;

int main(){

    int voto;
    cout << "Inserisci un voto: ";
    cin >> voto;

    while(voto<0 || voto>30){
        cout << "Voto non valido. Inserisci un numero compreso tra 0 e 30: ";
        cin >> voto;
    }
    
    int categoria=0;

    if(voto>=18 && voto<=23) categoria=1;
    if(voto>=24 && voto<=26) categoria=2;
    if(voto>=27 && voto<=29) categoria=3;
    if(voto==30) categoria=4;

    switch(categoria){
        case 1:
            cout << "Sufficiente.";
            break;
        case 2:
            cout << "Buono.";
            break;
        case 3:
            cout << "Ottimo.";
            break;
        case 4:
            cout << "Eccellente.";
            break;
    }
}