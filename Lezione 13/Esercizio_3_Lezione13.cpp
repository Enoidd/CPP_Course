/*
Obiettivo: Lavorare con più oggetti della stessa classe.

Richiesto:

    Crea un array di 3 oggetti Libro

    Usa un ciclo per:

        Chiamare inserisciDati() su ciascun libro

        Stampare i dati con info()
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
            cin.ignore(); // pulisci il buffer
        }
};

int main(){

    Libro l1[3];     // Un array di oggetti "Libro"
    
    // INPUT
    for(size_t i=0; i<3; i++){ // Per visitare tutti gli elementi di tipo "Libro" dell'array di tipo "Libro"
        cout << "\nInserisci il " << i+1 << " libro\n";
        l1[i].inserisciDati();
    }
    
    // OUTPUT
    cout << "Libri inseriti: ";
    for(size_t i=0; i<3; i++){
        l1[i].info();
    }
}
