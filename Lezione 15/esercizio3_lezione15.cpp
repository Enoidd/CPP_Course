/*
Crea una classe `Libro` che:
- Ha titolo e autore
- Ha un costruttore di copia che clona un oggetto
- Ha un metodo `info()` che stampa i dati
*/

#include <iostream>
#include <string>

using namespace std;

class Libro{
    private: 
        string titolo, autore;

    public:
        Libro(const Libro& t, string a){
            titolo = t.titolo;
            autore = a;
        }

        void info(){
            cout << "\nTitolo: " << titolo << " - Autore: " << autore << "\n";
        }
};

int main(){

    Libro l1("Il Signore degli Anelli", "J.R.R Tolkien");

    l1.info();
}