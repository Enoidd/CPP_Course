/*
Obiettivo: Creare una classe Libro e usare metodi semplici.

Richiesto:

    Crea una classe Libro con:

        string titolo

        string autore

        int pagine

    Crea un metodo info() che stampa tutte le info del libro

    Nel main(), crea un oggetto Libro, assegna i valori, chiama info()
*/

#include <iostream>
#include <string>

using namespace std;

class Libro{
    public:

    string titolo;
    string autore;
    int pagina;

    void info(){ // Metodo della classe
        cout << "Titolo: " << titolo << "\nAutore: " << autore << "\nPagina: " << pagina;
    }
};

int main(){
    Libro l1;
    l1.titolo = "Il Signore degli Anelli";
    l1.autore = "J.R.R Tolkien";
    l1.pagina = 600;

    l1.info();
}