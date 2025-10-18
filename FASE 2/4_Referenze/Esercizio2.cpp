/*
3. Crea una funzione void scambia(int& a, int& b) che scambia i valori tra due variabili. Mostra il prima e dopo nel main.

4. Scrivi una funzione void invertiSegno(int& x) che inverte il segno di un intero (es: da 5 a -5).

5. Crea un array di 5 interi. Scrivi una funzione void aggiungiUno(int& x) e applicala a ogni elemento con un ciclo.
*/

#include <iostream>
using namespace std;

void raddoppia(int& x){
    x = x*2;
}

void scambia(int& a, int& b){
    int temp = a;
     a = b;
     b = temp;
}

void invertiSegno(int& y){
    if(y>0)
        y = -y;
    else if(y<0)
        y = +y;
}

void aggiungiUno(int& x){
    x = 1;
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

    int b = 2;
    int c = 3;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    cout << "Scambia valori: " << endl;

    scambia(b, c);

    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    cout << "Inverti segno: " << endl;

    cout << "b: " << b << endl;
    invertiSegno(b);
    cout << "b: " << b << endl;

    int array[5];

    for(int i=0; i<5; i++){
        aggiungiUno(array[i]);
    }

    cout << "Array: ";
    cout << "[";
    for(int i=0; i<5; i++){
        cout << "" << array[i] << ", ";
    }
    cout << "]";

}