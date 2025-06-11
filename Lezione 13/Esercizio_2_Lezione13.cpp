/*
Obiettivo: Usare metodi per acquisire dati.

Richiesto:

    Aggiungi alla classe Libro un metodo inserisciDati() che:

        Chiede all’utente il titolo, autore, numero di pagine

        Salva i dati nei membri dell’oggetto

    Nel main(), chiama inserisciDati() e poi info()
*/

#include <iostream>
#include <string>

using namespace std;

class Libro{
    public:

    string titolo;
    string autore;
    int pagina;

    void info(){
        cout << "\nTitolo: " << titolo << "\nAutore: " << autore << "\nPagine: " << pagina;
    }

    void inserisciDati(){
        cout << "Titolo: ";
        getline(cin, titolo);
        cout << "Autore: ";
        getline(cin, autore);
        cout << "Pagine: ";
        cin >> pagina;
    }
};

int main(){
    Libro l1;
    cout << "\nInserisci i dati del tuo libro\n";
    l1.inserisciDati(); // Prende in input i dati del libro da inserire
    l1.info(); // Info del libro
}