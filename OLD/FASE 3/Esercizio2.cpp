/*
Classe Contatore con:

Attributo valore

Metodi incrementa(), decrementa(), stampa()

Costruttore di default che imposta a 0
*/

#include <iostream>
using namespace std;

class Contatore{
    private: 
        int valore;
    
    public:
        // Costruttore senza parametri perché includo i set
        Contatore(){
            valore = 0;
        }    

        //Metodo set
        void setValore(int nuovoValore){
            valore = nuovoValore;
        }

        // Metodo get
        int getValore(){
            return valore;
        }

        // Metodo incrementa
        void incrementa(){
            valore++;
        }

        //Metodo decrementa
        void decrementa(){
            valore--;
        }

        // Metodo stampa
        void stampa(){
            cout << "Valore incrementato: " << valore << endl;
        }
};

int main(){

    Contatore c;
    int valore;

    cout << "Inserisci un valore: ";
    cin >> valore;
    c.setValore(valore);

    cout << "Valore inserito: " << c.getValore() << endl;

    c.incrementa();
    cout << "Valore incrementato: ";
    c.stampa();

    c.setValore(valore);
    c.decrementa();
    cout << "Valore decrementato: ";
    c.stampa();
}