/*
Estendi la classe Persona per includere:

Un costruttore con parametri per inizializzare nome ed età

Nel main():

Crea due oggetti: uno con costruttore default e uno con costruttore parametrizzato.

Usa stampaDati() su entrambi.

Obiettivo: confronto tra inizializzazione manuale e costruttore.
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
            nome = "nessuno";
            età = 0;
        }

        // Costruttore parametrico
        Persona(string nome, int età){
            this->nome = nome;
            this->età = età;
        }

    void setNome(string nome){
        this->nome = nome;
    }

    string getNome(){
        return nome;
    }

    void setEta(int età){
        this->età = età;
    }

    int getEta(){
        return età;
    }

    /*void stampa(Persona p){
        cout<<"Nome: "<<p.getNome()<<" Eta: "<<p.getEta()<<endl;
    }*/

    void stampa(){
        cout<<"Nome: "<<nome<<" Eta: "<<età<<endl;
    }
    
};

int main(){

    Persona p;

    string nome;
    int eta;

    cout<<"Nome: ";
    getline(cin, nome);
    p.setNome(nome);
    cout<<"Eta: ";
    cin>>eta;
    p.setEta(eta);

    p.stampa();

    Persona pp = {nome, eta};

    pp.stampa();
    
}