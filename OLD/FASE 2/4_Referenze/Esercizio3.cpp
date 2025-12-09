/*
6. Scrivi una funzione int& massimo(int& a, int& b) che restituisce una referenza al valore maggiore. Poi assegnagli un nuovo valore.

7. Scrivi una funzione void leggiValori(int& a, int& b) che chiede all’utente due numeri e li restituisce tramite referenze.
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

int& massimo(int& a, int& b){
    if(a>b)
        return a;
    else if(b>a)
        return b;
}

void leggiValori(int& a, int& b){
    cout<<"inserisci un numero: ";
    cin >> a;
    cout<<"inserisci un altro numero: ";
    cin >> b;
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

    int& max = massimo(a, b);
    cout << "Max: "<< max << endl;

    leggiValori(a,b);
    cout << "Valori inseriti: " << a << ", " << b;

    string stringa;
    cout << "Inserisci una stringa: ";
    getline(cin, stringa);
}