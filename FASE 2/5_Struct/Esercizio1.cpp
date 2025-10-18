/*
Definisci una struct Studente con nome, cognome, età.

Crea un array di 3 studenti.

Fai inserire i dati all’utente e poi stampali in modo ordinato.
*/

#include <string>
#include <iostream>
using namespace std;

struct Studente{
    string nome, cognome;
    int età;
};

int main(){

    Studente array[3]; // Creo array di 3 studenti

    // Input
    for(int i=0; i<3; i++){
        cout << "Nome: ";
        getline(cin, array[i].nome);
        cout << "Cognome: ";
        getline(cin, array[i].cognome);
        //cin.ignore(); // clear debuffer
        cout << "Eta: ";
        cin >> array[i].età;
        cin.ignore();
    }

    // Output
    for(int i=0; i<3; i++){
        cout << "" << i+1 << " Studente: " << endl;
        cout << "Nome: " << array[i].nome << ", Cognome: " << array[i].cognome << ", Eta': " << array[i].età << endl;
    }
}