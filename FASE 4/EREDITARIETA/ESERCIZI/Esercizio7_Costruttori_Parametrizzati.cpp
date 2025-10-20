/*
Persona(string nome) → Studente(string nome, string corso)
Mostra come chiamare il costruttore della base dal costruttore della derivata usando : Base(nome).
*/

#include <iostream>
#include <string>
using namespace std;

class Persona{
    private: 
        string nome;
    public:
        // Costruttore parametrico
        Persona(string nome){
            this->nome = nome;
        }

        // Metodo getPersona
        string getNome() const{
            return nome;
        }
};

class Studente : public Persona{
    private:
        string corso;

    public:
        //Costruttore
        Studente(string nome, string corso) : Persona(nome){
            this->corso = corso;
        }
        // Metodo getCorso
        string getCorso() const{
            return corso;
        }
};

int main(){

    Studente s("Gianni", "Marescialli");
    cout<<"Nome: "<<s.getNome()<<" Corso: "<<s.getCorso();
}