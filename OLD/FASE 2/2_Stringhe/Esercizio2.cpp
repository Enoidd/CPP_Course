/*
Scrivi un programma che:

Chiede due parole all’utente (char parola1[30], char parola2[30])

Confronta le parole usando strcmp

Stampa:

“Le parole sono uguali” oppure

“Le parole sono diverse”

Estensione: chiedi di riprovare finché non scrive due parole uguali
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
    char parola1[30], parola2[30];

    cout << "Inserisci una parola: ";
    cin >> parola1;

    cout << "Inserisci un'altra parola: ";
    cin >> parola2;

    if(!strcmp(parola1, parola2))
        cout << "Le parole sono uguali." << endl;
    else
        cout << "Le parole sono diverse." << endl;

}
