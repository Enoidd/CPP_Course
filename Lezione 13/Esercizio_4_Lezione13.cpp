/*
Obiettivo: Confrontare attributi tra oggetti.

Richiesto:

    Aggiungi una funzione esterna libroPiuLungo(Libro l1, Libro l2) che:

        Ritorna l’oggetto con più pagine

    Nel main(), crea 2 libri, usa la funzione e stampa quello con più pagine
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
        cout << "\nTitolo: ";
        getline(cin, titolo);
        cout << "Autore: ";
        getline(cin, autore);
        cout << "Pagine: ";
        cin >> pagina;
        cin.ignore();
    }
};

Libro libroPiuLungo(Libro l1, Libro l2){

    if(l1.pagina > l2.pagina){
        return l1;
    }
    else{
        return l2;
    }
}

int main(){

    Libro l1, l2;

    l1.inserisciDati();
    l2.inserisciDati();

    l1.info();
    l2.info();

    Libro l3 = libroPiuLungo(l1, l2);

    cout << "\n\nIl Libro con il maggior numero di pagine: ";
    l3.info();
}