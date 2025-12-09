/*
Crea una classe Persona con attributi nome, età e un metodo parla().
Crea una classe Studente derivata con metodo studia().
*/

#include <iostream>
#include <string>
using namespace std;

class Persona{  // Classe base
    private:
        string nome;
        int età;
        
    public:
        // Costruttore di default - vuoto
        Persona(){
            nome = "Sconosciuto";
            età = 0;
        }

        // Costruttore parametrico
        Persona(string nome, int età){
            this->nome = nome;
            this->età = età;
        }

        // Metodo parla()
        void parla(){
            cout<<" "<<nome<<" blablabla"<<endl;
        }
};

class Studente : public Persona{ // Classe derivata
    public:
        using Persona::Persona; // eredita i costruttori di 'Persona'
        // Metodo studia
        void studia(){
            cout<<"  .......Studiando..."<<endl;
        }
};

int main(){

    Studente s = {"Giulia", 30};

    s.parla();
    s.studia();

    Studente s1("Carlo", 25);

    s1.parla();
    s1.studia();


}