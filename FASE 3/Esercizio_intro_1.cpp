/*
Crea una classe Persona con:

Attributi nome (string) e età (int)

Costruttore di default

Metodi setNome, setEta, getNome, getEta

Metodo stampaDati() che stampa nome ed età

Obiettivo: pratica con getter/setter e costruttore vuoto.
*/

#include <iostream>
#include <string>

using namespace std;

class Persona{
    private: 
        string nome;
        int età;

    public:
        // Costruttore di default - vuoto
        Persona(){
            nome = "Nessuno";
            età = 0;
        }

        // Metodo setNome
        void setNome(string nome){
            this->nome = nome; // this serve per evitare l'ambiguità - Possono essere cambiati
        }

        // Metodo getNome
        string getNome() const{
            return nome;
        }

        // Metodo setEta
        void setEta(int età){
            this->età = età; // this serve per evitare l'ambiguità - Possono essere cambiati
        }

        // Metodo getEta
        int getEta() const{
            return età;
        }

        // Metodo stampa nome ed età
        void stampa() const{
            cout << "Nome: " << nome << " Eta': " << età << endl;
        }
};

int main(){

    Persona p;
    string nome;
    int età;

    cout<<"Nome: ";
    getline(cin, nome);
    p.setNome(nome);
    cout << "Nome inserito: " << p.getNome() << endl;

    cout<<"Eta': ";
    cin>>età;
    p.setEta(età);
    cout << "Eta' inserita: " << p.getEta() << endl;

    p.stampa();
}