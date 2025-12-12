/*

Crea una classe Veicolo con:

attributo velocita

costruttore di default che:

inizializza velocita a 0

stampa

Costruttore Veicolo


Crea una classe Automobile che:

eredita pubblicamente da Veicolo

costruttore di default che stampa

Costruttore Automobile


Nel main():

crea un oggetto Automobile

Domanda

Quale costruttore viene chiamato per primo?

*/

#include <iostream>
#include <string>
using namespace std;

class Veicolo{
    protected:
        int velocita;

        // Costruttore di default - vuoto
        Veicolo(){
            velocita = 0;
            cout<<"Costruttore Veicolo"<<endl;
        }
};

class Automobile : public Veicolo{
    public:
        // Costruttore di default - vuoto
        Automobile(){
            cout<<"Costruttore Automobile"<<endl;
        }
};

int main(){

    Automobile a;

    // STAMPA prima il costruttore della classe Base
    // STAMPA dopo il costruttore della classe Derivata
    // Il COMPILER prima costruisce la Base e poi la Derivata
}