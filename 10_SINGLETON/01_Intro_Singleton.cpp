/*

SINGLETON
    - Design pattern creazionale che garantisce:
        1. Una sola istanza di una classe
        2. Un punto di accesso globale controllato a tale istanza

" Non posso creare oggetti liberatamente, ma solo accedere a uno già esistente"
*/

/*
COSTRUTTORE private - non posso creare oggetti dall'esterno
*/
#include <iostream>
using namespace std;

class Singleton{
    private:
        Singleton(){cout<<"Singleton creato\n";} // non posso fare "Singleton s"

        static Singleton instance; // unica istanza di accesso come membro statico
    public:
        // Accesso all'istanza
        static Singleton& getIstance(){
            return instance;
        }
        /* getIstance deve essere static perché deve poter essere chiamato SENZA avere già un oggetto
        Singleton (Singleton s <- non va bene), dato che il costruttore è pvt non posso creare 's'*/
};

// definizione del membro statico
Singleton Singleton::instance;

int main(){
    Singleton& a = Singleton::getIstance(); // a stesso oggetto di b 
    Singleton& b = Singleton::getIstance(); // b stesso oggetto di a

    Singleton c = a; // Mi permette però di fare la copia. 
}