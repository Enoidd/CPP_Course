/*
Scrivi un programma che:

Chiede all’utente di inserire una parola (massimo 20 caratteri)

Calcola e stampa la lunghezza usando strlen

Copia la parola in un secondo array

Stampa entrambe

Usa: char, cin, strlen, strcpy, cout
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char parola[20];

    cout << "Inserisci una parola: ";
    cin >> parola;

    // Calcola e stampa la lunghezza usando strlen(str)
    cout << "Lunghezza parola: " << strlen(parola) << endl;

    // Copia la parola in un secondo array
    char parola2[20];
    strcpy(parola2, parola); // (destinatario, sorgente)
    cout << "Parola sorgente: " << parola << " ,Parola destinatario: " << parola2 << endl;

}