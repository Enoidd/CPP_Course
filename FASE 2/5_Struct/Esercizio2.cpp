/*
Usa la struct Libro { string titolo; string autore; int pagine; }

Scrivi una funzione Libro creaLibro() che chiede i dati all’utente e restituisce un Libro.

In main(), chiama la funzione, stampa il libro ottenuto.
*/

#include <iostream>
#include <string>

using namespace std;

typedef struct{
    string titolo, autore;
    int pagine;
} Libro;

Libro creaLibro(){

    Libro l1;
    cout << "Titolo: ";
    getline(cin, l1.titolo);
    cout << "Autore: ";
    getline(cin, l1.autore);
    cout << "Pagine: ";
    cin >> l1.pagine;

    return l1;
}

int main(){

    Libro l1;

    l1 = creaLibro();

    cout << "Libro inserito: " << endl;
    cout << "Titolo: " << l1.titolo << ", Autore: " << l1.autore << ", Pagine: " << l1.pagine << endl;
}