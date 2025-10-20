/*
Crea una classe base Macchina e una derivata Tesla. 
Mostra l’ordine dei costruttori e distruttori.
*/

#include <iostream>
#include <string>
using namespace std;

class Macchina{ // Classe base
    public:
        // Costruttore base
        Macchina(){
            cout<<"Costruttore classe BASE Macchina\n";
        }
        // Distruttore base
        ~Macchina(){
            cout<<"Distruttore classe BASE Macchina\n";
        }
};

class Tesla : public Macchina{  // Classe derivata
    public:
        //using Macchina::Macchina; // Eredita i costruttori/distruttori di Macchina?
        // Costruttore derivata
        Tesla(){
            cout<<"Costruttore classe DERIVATA Tesla\n";
        }
        // Distruttore derivata
        ~Tesla(){
            cout<<"Distruttore classe DERIVATA Tesla\n";
        }
};

int main(){

    Tesla t;

    /*
    STAMPA:
    1° COSTRUTTORE CLASSE BASE
    2° COSTRUTTORE CLASSE DERIVATA
    3° DISTRUTTORE CLASSE DERIVATA
    4° DISTRUTTORE CLASSE BASE
    */
}