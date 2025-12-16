/*

Abbiamo detto che Singleton deve avere:
    - Il costruttore 'private' per evitare la creazione di un oggetto di classe "Singleton"
    - Deve esserci un solo metodo pubblico per accedere all'istanza (che deve essere static) cosìcchè posso chiamare / accedere all'istanza senza creare l'oggetto, ma mediante una referenza al tipo.

    NUOVO:
    - Deve impedire la copia, 

*/

#include <iostream>
using namespace std;

class Singleton{
    private:
        Singleton(){cout<<"Singleton creato\n";};

        static Singleton instance; // unica instanza di accesso
    public:
    // Impedire la copia e l'assegnazione
        Singleton(const Singleton&) = delete; // impedisce copia
        Singleton& operator=(const Singleton&) = delete; // impedisce l'assegnazione
        static Singleton& getInstance(){
            return instance;
        }
};

Singleton Singleton::instance; 
// instance viene creato prima che inizi il main
// dichiara e definisce l'istanza statica, ma l'oggetto viene creato all'avvio del programma
// prima del main.

int main(){

    cout<<"Main iniziato\n";
    Singleton& a = Singleton::getInstance();
    Singleton& c = Singleton::getInstance();

    // NON COMPILA - Singleton c = a; copia e assegnazione non permessi
    /*
    OUTPUT:
        1. Singleton creato
        2. Main iniziato
    */

    /*
    SINGLETON EAGER:
        - Semplice, sicuro
        - Inutile senza controllo al momento della creazione
    */
}