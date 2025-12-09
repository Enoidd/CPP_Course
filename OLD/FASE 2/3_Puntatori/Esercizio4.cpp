/*
Dichiara un puntatore int* p = nullptr

Chiedi un valore all’utente

Usa new per allocare memoria dinamica e salvarlo

Stampa il valore inserito e libera la memoria
*/

#include <iostream>
using namespace std;

int main(){
    int* p = nullptr;

    cout << "Inserisci un valore: ";
    p = new int;
    cin >> *p;

    cout << "Valore inserito: " << *p << endl;
}