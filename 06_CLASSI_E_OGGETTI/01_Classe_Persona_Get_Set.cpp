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
        int eta;

    public:
        // Costruttore di default - vuoto
        Persona(){
            nome = "nessuno";
            eta = 0;
        }

    void setNome(string n){
        nome = n;
    }

    string getNome(){
        return nome;
    }

    void setEta(int eta){
        this->eta = eta;
    }

    int getEta(){
        return eta;
    }


    void stampa(Persona p){
        cout<<"Nome: "<<p.getNome()<<" Eta: "<<p.getEta()<<endl;
    }
};

int main(){

    Persona p;
    cout<<"Nome: ";
    string nome;
    getline(cin, nome);
    p.setNome(nome);

    cout<<"Nome inserito: "<<p.getNome()<<endl;

    int eta;
    cout<<"Eta: ";
    cin>>eta;
    p.setEta(eta);

    cout<<"Eta inserita: "<<p.getEta()<<endl;

    cout<<"Funzione di stampa\n";
    p.stampa(p);
}

