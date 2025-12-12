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

    /*
    L'overload dei costruttore permette di definire un oggetto con più parametri. Non prevede i set.
    */

        // Costruttore di default - vuoto
        Studente(){
            nome = "nessuno";
            media = 0.0;
        }

        // Costruttore parametrico
        Studente(string nome, float media){
            this->nome=nome;
            this->media=media;
        }

        void stampa(){
            cout<<"Nome: "<<nome<<" Media: "<<media<<endl;
        }
};

int main(){

    Studente s = {"Mario", 28.9};

    s.stampa();
}