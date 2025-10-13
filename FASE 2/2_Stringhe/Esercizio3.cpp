/*
Chiede all’utente il nome e cognome in una riga (getline)

Usa substr per dividere nome e cognome

Stampa separatamente:

Il nome

Il cognome

Stampa anche la lunghezza totale della stringa

Suggerimento: usa find(" ") per separare nome e cognome
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){

    string nomeCompleto;

    cout << "Inserisci il nome e il cognome: ";
    getline(cin, nomeCompleto);

    size_t pos = nomeCompleto.find(' '); // individua la posizione dello spazio tra Nome e Cognome
    
    string nome = nomeCompleto.substr(0, pos);
    string cognome = nomeCompleto.substr(pos+1);

    cout << "Nome: " << nome << " - Cognome: " << cognome;
}