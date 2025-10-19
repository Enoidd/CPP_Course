/*
Classe Libro con:

Attributi privati titolo, autore, pagine

Metodi getter/setter

Costruttore con parametri

Metodo stampa() const
*/

#include <iostream>
#include <string>
using namespace std;

class Libro{
    private:
        string titolo, autore;
        int pagine;
    
    public:
        // Costruttore di default - vuoto
        Libro(){
            titolo = "Sconosciuto";
            autore = "Sconosciuto";
            pagine = 0;
        }

        // Costruttore parametrico
        Libro(string titolo, string autore, int pagine){
            this->titolo = titolo;
            this->autore = autore;
            this->pagine = pagine;
        }

        // Metodo setTitolo
        void setTitolo(string titolo){
            this->titolo = titolo;
        }

        // Metodo getTitolo
        string getTitolo() const{
            return titolo;
        }

        // Metodo setAutore
        void setAutore(string autore){
            this->autore = autore;
        }

        // Metodo getAutore
        string getAutore() const{
            return autore;
        }

        // Metodo stampa
        void stampa() const{
            cout<<"Titolo: "<<titolo<<" Autore: "<<autore<<" Pagine: "<<pagine<<endl;
        }

};

int main(){

    string titolo, autore;
    int pagine;

    cout << "Titolo: ";
    getline(cin, titolo);
    cout << "Autore: ";
    getline(cin, autore);
    cout << "Pagine: ";
    cin >> pagine;

    Libro l = {titolo, autore, pagine};

    l.stampa();
}