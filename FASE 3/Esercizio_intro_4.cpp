/*
Crea la classe Studente con:

Attributi: nome, media

Costruttore senza parametri

Costruttore con parametri

Metodo stampa()

Usa entrambi nel main()

Obiettivo: esercizio diretto sull'overload dei costruttori
*/

#include <iostream>
#include <string>
using namespace std;


class Studente{
    private: 
        string nome;
        float media;
    
    public:
        // Costruttore di default - vuoto
        Studente(){
            nome = "Sconosciuto";
            media = 0.0;
        }

        // Costruttore parametrizzato
        Studente(string nome, float media){
            this->nome = nome;
            this->media = media;
        }

        void stampa() const{
            cout<<"Nome: "<<nome<<" Media: "<<media<<endl;
        }
};

int main(){

    Studente s;
    s.stampa(); // Output Nome: Sconosciuto Media: 0

    s = {"Maria", 27.29};
    s.stampa();

}