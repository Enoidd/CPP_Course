/*
Crea una classe ValoreDinamico che gestisce un intero con new. Implementa:

Costruttore normale

Costruttore di copia profonda

Distruttore

Verifica che modificando l’oggetto copiato, l’originale non cambi.
*/

#include <iostream>
using namespace std;

class ValoreDinamico{
    private:
        int* intero;
    public:
        // Costruttore 
        ValoreDinamico(int valore){
            intero = new int(valore); // crea dinamicamente una variabile int nel heap
        }

        // Costruttore di copia profonda
        ValoreDinamico(const ValoreDinamico& daCopiare){
            intero = new int(*daCopiare.intero);
        }

        ~ValoreDinamico(){ // libera memoria dinamica
            delete intero;
        }

        void stampa(){
            cout<<"Valore: "<<intero<<endl;
            cout<<"Valore: "<<*intero<<endl;
        }
};

int main(){

    ValoreDinamico v1=10;

    ValoreDinamico v2 = v1; // Richiama il costruttore di copia

    v1.stampa();
    v2.stampa();
}