/*
Usa struct Corso { string nome; int durataOre; }

Inserisci 5 corsi.

Ordinali in ordine crescente di durata e stampali.
*/

#include <iostream>
#include <string>

using namespace std;

typedef struct{
    string nome;
    int durataOre;
} Corso;

int main(){

    Corso corsi[5];
    int size = sizeof(corsi)/sizeof(corsi[0]);

    for(int i=0; i<size; i++){
        cout<<"Inserisci il "<<i+1<<" corso:";
        getline(cin, corsi[i].nome);
        cout<<"Inserisci la durata:";
        cin>>corsi[i].durataOre;
        cin.ignore();
    }

    
}