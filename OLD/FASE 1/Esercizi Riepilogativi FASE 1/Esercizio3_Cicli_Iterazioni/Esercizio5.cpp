/*
Esercizio riepilogativo argomento Cicli e iterazioni.
*/


/* RICHIESTA
Scrivi un programma che stampi tutti i numeri da 1 a 50, ma:

salti i multipli di 3,

e termini il ciclo se trova un numero divisibile per 37.
*/

#include <iostream>
using namespace std;

int main(){

    int i=1;
    while(i!=-1 && i<=50){
        if(i%3!=0) // Salta i multipli di 3
            cout << "" << i << endl;
        i++;
        if(i%37==0){
            i = -1;
            cout << "Numero divisibile per 37 trovato. Ciclo interrotto." << endl;
        }
    }
}