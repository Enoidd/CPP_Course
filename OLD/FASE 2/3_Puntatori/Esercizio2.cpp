/*
Dichiara int x = 10

Crea una funzione void raddoppia(int* p) che raddoppia il valore

Chiama la funzione e stampa x prima e dopo
*/

#include <iostream>
using namespace std;

void raddoppia(int* p){

     cout << "Valore raddoppiato: " << (*p)*2 << endl;
}

int main(){

    int x = 10;

   raddoppia(&x);
}