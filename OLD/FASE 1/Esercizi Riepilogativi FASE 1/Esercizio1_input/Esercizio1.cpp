/*
Esercizio riepilogativo argomento Input/Output e tipi di dato base.
*/


/* RICHIESTA
1. Chiede all'utente il proprio nome e cognome (in due input disting)
2. Chiede l'età
3. Stampi un messaggio di benvenuto formattato come "Ciao NOME COGNOME, hai XX anni."
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string Nome;
    string Cognome;
    int età;

    cout << "Inserisci il tuo nome: ";
    getline(cin, Nome);
    cout << "Inserisci il tuo cognome: ";
    getline(cin, Cognome);
    
    cout << "Inserisci la tua età: ";
    cin >> età;

    cout << "Ciao " << Nome << " " << Cognome << " hai " << età << " anni." << endl;
}