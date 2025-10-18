/*
Crea struct Studente { string nome; int voti[5]; }

Chiedi all’utente di inserire nome e 5 voti.

Calcola la media voti con funzione e stampa il risultato.
*/

#include <iostream>
#include <string>

using namespace std;

typedef struct{
    string nome;
    int voti[5];
} Studente;

void calcolaMedia(Studente& s, int size){

    int media = 0;
    // check dei voti
    for(int i=0; i<size; i++){
        media += s.voti[i];
    }
    media = media/size;

    cout<<"La media dei voti vale:"<<media;
}

int main(){

    Studente s1;
    cout<<"Inserisci il nome dello studente:";
    getline(cin, s1.nome);

    int size = sizeof(s1.voti)/sizeof(s1.voti[0]);
    for(int i=0; i<size; i++){
        cout<<"Inserisci il "<<i+1<<" voto:";
        cin>>s1.voti[i];
    }

    calcolaMedia(s1, size);
}