/*
Estendi la classe Persona per includere:

Un costruttore con parametri per inizializzare nome ed età

Nel main():

Crea due oggetti: uno con costruttore default e uno con costruttore parametrizzato.

Usa stampaDati() su entrambi.

Obiettivo: confronto tra inizializzazione manuale e costruttore.
*/

#include <iostream>
using namespace std;

class Persona{
    private:
        string nome;
        int età;

    public: 
        // Costruttore parametrizzato
        Persona(string nome, int età){
            this->nome = nome;
            this->età = età;
        }

        // Metodo getNome
        string getNome() const{
            return nome;
        }

        // Metodo getEta
        int getEta() const{
            return età;
        }

        // Metodo stampa
        void stampa() const{
             cout << "Nome: " << nome << " Eta': " << età << endl;
        }
};

int main(){

    string nome;
    int età;

    cout<<"Nome: ";
    getline(cin, nome);

    cout<<"Eta': ";
    cin>>età;

    Persona p = {nome, età};

    cout<<"====METODI GETTER===="<<endl;
    cout<<"Nome inserito: "<<p.getNome() << endl;
    cout<<"Eta' inserita: "<<p.getEta() << endl;

    cout<<"====METODO STAMPA===="<<endl;
    p.stampa();
}