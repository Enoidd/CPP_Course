/*

Definisci una classe Contatore con:

un attributo int valore

un costruttore che inizializza valore

un metodo incrementa() che aumenta valore

un metodo stampa()

Nel main:

Crea un unique_ptr<Contatore>

Chiama i metodi tramite unique_ptr

Lascia finire main senza usare delete

*/

#include <iostream>
#include <memory>
using namespace std;

class Contatore{
    protected:
        int valore;
    public:
        Contatore(int val):valore(val){}; // Costruttore

        void incrementa(){
            valore++;
        }

        void stampa(){
            cout<<"Valore:"<<valore<<endl;
        }
};

int main(){

    unique_ptr<Contatore> p = make_unique<Contatore>(10);

    p->stampa();
    p->incrementa();
    p->stampa();

    return 0;
}