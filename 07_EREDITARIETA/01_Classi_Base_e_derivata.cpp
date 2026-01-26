/*

L'Ereditarietà permette di riutilizzare e specializzare una classe esistente. 

La classe Base definisce tutto cià che è comune.
La classe Derivata definisce tutto ciò che è specifico alla classe Derivata.

*/

#include <iostream>
#include <string>
using namespace std;

class Persona{
    protected: 
        string nome;

    public:
    // Costruttore di default - vuoto
    Persona(){
        nome = "sconosciuto";
    }
        void setNome(string n){
            nome = n;
        }

        void stampaPersona(){
            cout<<" Nome: "<<nome;
        }
};

/*
Studente eredita tutto ciò che è public e protected di 'Persona' (tutto ciò che è 'private' non viene ereditato).


========================================
EREDITARIETA' PUBBLICA, PROTETTA, PRIVATA
========================================

Obiettivo:
- Comprendere la differenza tra 3 tipi di ereditarietà:
    - class Derivata : public Base{} ( pubblica )
    - class Derivata : protected Base{} ( protetta )
    - class Derivata : private Base{} ( privata )

- Pubblica: i membri public/protected rimangono tali nella Derivata
- Protected: i membri public/protected diventano protected nella Derivata
- Private: tutto diventa private
*/

class Studente : public Persona{
    private:
        int matricola;
    
    public:
        void setMatricola(int m){
            matricola = m;
        }

        void stampaStudente(){
            stampaPersona();
            cout<<" Matricola: "<<matricola<<endl;
        }
};

int main(){

    Persona p;
    string nome;.
    cout<<"Nome: ";
    getline(cin, nome);
    p.setNome(nome);

    Studente s;
    cout<<"Nome studente: ";
    getline(cin, nome);
    s.setNome(nome);
    int matricola;
    cout<<"Matricola: ";
    cin>>matricola;
    s.setMatricola(matricola);


    cout<<"Stampa persona"<<endl;
    p.stampaPersona();
    cout<<endl;
    cout<<"Stampa studente"<<endl;
    s.stampaStudente();
}

