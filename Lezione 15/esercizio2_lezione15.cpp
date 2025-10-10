/*
Crea una classe `Persona` che:
- Ha attributi privati `nome` e `età`
- Ha un costruttore con due parametri per inizializzare `nome` e `età`
- Ha un metodo `info()` che stampa i dati
*/

#include <iostream>
#include <string>

using namespace std;

class Persona{
    private:
        string nome;
        int eta;

    public:
        Persona(string n, int e){ // Costruttore parametrico che inizializza 'nome' e 'eta'
            nome = n;
            eta = e;
        }
    
        void info(){
            cout << "\nNome: " << nome << " - Eta: " << eta << "\n";
        }
};

int main(){

    Persona p1("Giammaria", 30);
    string n = "Alessio";
    Persona p2(n, 29);
    
    p1.info();
    p2.info();
    
}