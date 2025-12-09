/*
1. Scrivi un programma che dichiara una variabile int a = 10, crea una referenza int& ref = a, modifica ref e stampa a e ref.

2. Crea una funzione void raddoppia(int& x) che raddoppia il valore passato. Testala nel main.
*/

#include <iostream>
using namespace std;

void raddoppia(int& x){
    x = x*2;
}

int main(){

    int a = 10;
    int& refA = a;

    cout << "a: "<< a << endl;
    cout << "ref: "<< refA << endl;

    refA = 20;

    cout << "a: "<< a << endl;
    cout << "ref: "<< refA << endl;

    raddoppia(a);
    cout << "Raddoppiata:" << endl;

    cout << "a: "<< a << endl;
    cout << "ref: "<< refA << endl;
}