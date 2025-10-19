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

    // ORDINAMENTO BASATO SU SELECTION SORT (ordine crescente per durata)
    for(int i = 0; i < size - 1; i++) {
        int min_index = i;
        for(int j = i + 1; j < size; j++) {
            if(corsi[j].durataOre < corsi[min_index].durataOre)
                min_index = j;
        }
        // Scambia l’intero oggetto Corso
        Corso temp = corsi[i];
        corsi[i] = corsi[min_index];
        corsi[min_index] = temp;
    }

    cout << "\nCorsi ordinati per durata:\n";
    for(int i = 0; i < size; i++) {
        cout << corsi[i].nome << " - " << corsi[i].durataOre << " ore" << endl;
    }

}