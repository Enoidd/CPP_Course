/*
Crea una classe Persona con attributi nome, età e un metodo parla().
Crea una classe Studente derivata con metodo studia().
*/

#include <iostream>
#include <string>
using namespace std;

class Persona{
    protected:
        string nome;
        int età;

    public:
        // Costruttore di default - vuoto
        Persona(){
            nome = "sconosciuto";
            età = 0;
        }

        // Costruttore parametrico
        Persona(string nome, int età){
            this->nome = nome;
            this->età = età;
        }

        void parla(){
            cout<<"BlaBlaBla"<<endl;
        }
};

class Studente : public Persona{
    public: 
        using Persona::Persona; // Eredita i costruttori di 'Persona'
        // Metodo studia
        void studia(){
            cout<<"StudiaStudiaStudiaStudia"<<endl;
        }
};

int main(){

    Persona p;
    p.parla();

    Studente s;
    s.parla();
    s.studia();

    Persona* pp = new Studente();

    pp->parla(); // atteso: BlaBla - perché il metodo "parla" non è virtual e non viene ridefinito per la classe specifica.

}