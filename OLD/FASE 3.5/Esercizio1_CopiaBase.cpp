/*
Crea una classe Numero con un intero.
Definisci il costruttore di copia e stampa un messaggio ogni volta che viene chiamato. Usa Numero b = a; per provarlo.
*/

#include <iostream>
using namespace std;

class Numero{
    private:
        int numero;

    public:
        // Costruttore parametrico
        Numero(int n){
            numero = n;
        }

        // Costruttore di copia
        Numero(const Numero& daCopiare_n1){
            numero = daCopiare_n1.numero;
            cout<<"Costruttore di copia."<<endl;
        }

        // Metodo stampa
        void stampa(){
            cout<<"Numero: "<<numero<<endl;
        }
};

int main(){

    Numero n1=2; // sorgente

    n1.stampa();

    Numero n2 = n1; // Costruttore di copia - copio n2 con n1

    n2.stampa();

    n2 = 3;

    n2.stampa();
    n1.stampa();
}

/*

STACK
┌───────────────────────────────┐
│ n2 (oggetto originale)        │
│ indirizzo: 0x61ff10           │
│ numero = 2                    │
└───────────────────────────────┘
     ▲
     │ alias (riferimento)
     │
┌───────────────────────────────────────────┐
│ daCopiare_n1 (parametro)                  |
│ riferisce allo stesso indirizzo (0x61ff10)|
└───────────────────────────────────────────┘
     
┌───────────────────────────────┐
│ n2 (nuovo oggetto creato)     │
│ indirizzo: 0x61ff08           │
│ numero = 2                    │
└───────────────────────────────┘


*/