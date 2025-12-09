/*
Esercizio riepilogativo argomento Operatori e Condizioni.
*/


/* RICHIESTA
Scrivi un programma che:

Chieda all’utente tre voti interi (da 0 a 30).

Calcoli la media.

Se la media è:

<18 → “Insufficiente”

18–23 → “Sufficiente”

24–26 → “Buono”

27–29 → “Ottimo”

30 → “Eccellente”

…e stampi il messaggio corrispondente.
*/

#include <iostream>
using namespace std;

int main(){
    int voto1, voto2, voto3;

    float media;

    cout << "Inserisci il primo voto: ";
    cin >> voto1;
    cout << "Inserisci il secondo voto: ";
    cin >> voto2;
    cout << "Inserisci il terzo voto: ";
    cin >> voto3;

    media = (voto1+voto2+voto3)/3.0;

    if(media<18)
        cout << "Insufficiente";
    if(media>=18 && media<=23)
        cout << "Sufficiente";
    if(media>=24 && media<=26)
        cout << "Buono";
    if(media>=27 && media<=29)
        cout << "Ottimo";
    if(media>=30)
        cout << "Eccellente";
}