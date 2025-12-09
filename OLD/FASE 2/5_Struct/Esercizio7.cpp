/*
Usa struct Prodotto { string codice; string nome; float prezzo; }

Inserisci 5 prodotti.

Fai cercare un prodotto per codice inserito dall’utente.

Se trovato, stampalo; altrimenti stampa “non trovato”.
*/

#include <iostream>
#include <string>

using namespace std;

typedef struct{
    string codice, nome;
    float prezzo;
} Prodotto;

int main(){

    Prodotto prodotti[5];

    // Dividi il numero totale di byte per dimensione di un singolo elemento
    int size = sizeof(prodotti)/sizeof(prodotti[0]);

    for(int i=0; i<size; i++){
        cout<<"Inserisci il "<<i+1<<" prodotto:";
        getline(cin, prodotti[i].nome);
        cout<<"Inserisci il codice:";
        getline(cin, prodotti[i].codice);
        cout<<"Inserisci il prezzo:";
        cin>>prodotti[i].prezzo;
        cin.ignore();
    }

    string codice;
    cout<<"Inserisci codice del prodotto da cercare:";
    getline(cin, codice);

    for(int i=0; i<size; i++){
        if(prodotti[i].codice==codice){
            cout<<"Prodotto trovato:"<<endl;
            cout<<"Nome: "<<prodotti[i].nome;
            cout<<"Codice: "<<prodotti[i].codice;
            cout<<"Prezzo: "<<prodotti[i].prezzo;
        }

    }
}