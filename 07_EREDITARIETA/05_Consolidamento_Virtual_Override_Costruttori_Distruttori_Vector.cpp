/*

Crea una classe base Dipendente con:

protected: string nome, int eta

costruttore di default (vuoto) che imposta nome="N/D" e eta=0

costruttore parametrico (string nome, int eta)

metodo virtuale void stampa() const che stampa nome/eta e la parola "Dipendente"

distruttore virtuale virtual ~Dipendente()

Crea due classi derivate:

Programmatore con string linguaggio

costruttore default che imposta linguaggio="C++"

costruttore parametrico (string nome, int eta, string linguaggio) che inizializza anche la base

override di stampa() const che stampa anche il linguaggio e la parola "Programmatore"

Manager con int teamSize

costruttore default che imposta teamSize=0

costruttore parametrico (string nome, int eta, int teamSize) che inizializza anche la base

override di stampa() const che stampa anche teamSize e la parola "Manager"

Nel main():

crea un oggetto con costruttore default e uno con parametrico per ogni derivata (totale 4 oggetti)

inseriscili in un vector<Dipendente*>

itera il vector e chiama stampa() (polimorfismo)

libera la memoria con delete (così verifichi il distruttore virtuale)

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Dipendente{
    protected:
        string nome;
        int eta;
    public:
        Dipendente() : nome("N/D"), eta(0){} // Costruttore di default

        Dipendente(const string& nome, int eta) : nome(nome), eta(eta){} // Costruttore parametrico

        virtual ~Dipendente(){ // Distruttore virtuale
            cout<<"Distruttore Dipendente\n";
        }

        virtual void stampa() const{
            cout<<"Nome: "<<nome<<" Eta: "<<eta<<" Dipendente"<<endl;
        }
};

class Programmatore : public Dipendente{
    protected:
        string linguaggio;
    public:
        Programmatore():linguaggio("C++"){} // Costruttore di default
        
        // tipi piccoli 'int' (es) per valore, tipi grandi per allocazione 'string'
        Programmatore(const string& nome, int eta, const string& linguaggio): Dipendente(nome, eta), linguaggio(linguaggio) {};

        void stampa() const override{
            cout<<"Nome: "<<nome<<" Eta: "<<eta<<" Dipendente"<<" Linguaggio: "<<linguaggio<<" Programmatore\n";
        }
};

class Manager : public Dipendente{
    protected:
        int teamSize;
    public:
        Manager():teamSize(0){} // Costruttore di default - teamSize=0
        Manager(const string& nome, int eta, int teamSize): Dipendente(nome, eta), teamSize(teamSize) {}; // Costruttore parametrico

        void stampa() const override{
            cout<<"Nome: "<<nome<<" Eta: "<<eta<<" teamSize:"<<teamSize<<" Manager\n";
        }
};

int main(){

    vector<Dipendente*> v;

    v.push_back(new Programmatore()); // Costruttore di default
    v.push_back(new Programmatore("Giancarlo", 35, "Java"));

    v.push_back(new Manager()); // Costruttore di default
    v.push_back(new Manager("Carlo", 45, 10)); // Costruttore di default

    // Polimorfismo
    for(Dipendente* d : v){
        d->stampa();
    }

    // Distruttori
    for(Dipendente* d : v){
        delete d;
    }

    return 0;
}