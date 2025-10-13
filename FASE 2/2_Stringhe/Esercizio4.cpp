/*
Scrivi un programma che:

Chiede all’utente di inserire 5 parole (std::string parole[5])

Chiede una parola da cercare

Verifica se la parola è presente tra quelle inserite

Stampa la posizione (indice) se trovata, oppure “non trovata”
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string parole[5]; // chiede all'utente di inserire 5 parole

    // input 5 parole
    for(int i=0; i<5; i++){
        cout << "Inserisci la " << i+1 << " parola: " << endl;
        getline(cin, parole[i]);
    }

    string cerca;

    cout << "Inserisci la parola da cercare: ";
    getline(cin, cerca); // leggi la riga

    bool trovata = false;

    for(int i=0; i<5; i++){
        if(parole[i].find(cerca)!= string::npos)
            cout << "Trovata nella posizione: " << i+1 << endl;
            trovata=true;
        }
    
    if(!trovata)
        cout << "Parola non trovata." << endl;
}