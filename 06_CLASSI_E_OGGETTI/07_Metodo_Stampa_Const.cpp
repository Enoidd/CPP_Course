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
        string titolo;
        string autore;
        int pagine;

    public:
        // Costruttore parametrico
        Libro(string titolo, string autore, int pagine){
            this->titolo=titolo;
            this->autore=autore;
            this->pagine=pagine;
        }

        void setTitolo(string titolo){
            this->titolo=titolo;
        }

        string getTitolo() const{
            return titolo;
        }

        void setAutore(string autore){
            this->autore=autore;
        }

        string getAutore() const{
            return autore;
        }

        void setPagine(int pagine){
            this->pagine=pagine;
        }

        int getPagine() const{ 
            return pagine;
        }

        void stampa() const{ // se un metodo non modifica i dati di un oggetto deve essere dichiarato const
            cout<<"Titolo: "<<getTitolo()<<" Autore: "<<getAutore()<<" Pagine: "<<getPagine()<<endl;
        }
};

int main(){

    Libro l = {"Il Signore degli Anelli", "J.R.R Tolkien", 700};

    l.stampa();
}