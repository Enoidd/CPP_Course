/*
Crea una classe Persona con attributo nome.
Crea una classe Studente con attributo matricola.
Deriva una classe StudenteUniversitario da entrambe.
In main(), crea un oggetto StudenteUniversitario, inizializza tutti gli attributi e stampali.
*/

#include <iostream>
#include <string>
using namespace std;

class Persona{ // Base
    private:
        string nome;

    public:
        // Costruttore di default - vuoto
        Persona(){
            nome = "Sconosciuto";
        }

        // Metodo setNome
        void setNome(string nome){
            this->nome = nome;
        }

        // Metodo getNome
        string getNome() const{
            return nome;
        }
};

class Studente{ // Base
    private:
        string matricola;
    
    public:
        Studente(){ // Costruttore di default
            matricola = "Indefinita\n";    
        }

        // Metodo setMatricola
        void setMatricola(string matricola){
            this->matricola = matricola;
        }

        // Metodo getMatricola
        string getMatricola() const{
            return matricola;
        }
};

// Derivazione multipla
class StudenteUniversitario : public Persona, public Studente{
    public:
        void stampa(){
            cout<<"Nome: "<<getNome();
            cout<<" Matricola: "<<getMatricola();
        }
};

int main(){

    StudenteUniversitario su; // Chiama solo i costruttori di default
    string nome, matricola;

    cout<<"Nome: ";
    getline(cin, nome);
    su.setNome(nome);
    cout<<"Matricola: ";
    getline(cin, matricola);
    su.setMatricola(matricola);

    su.stampa();
}