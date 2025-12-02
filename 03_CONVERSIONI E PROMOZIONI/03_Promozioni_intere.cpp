/*

L'integer promotion sono conversioni implicite applicate ai tipi interi "piccoli" ossia quando entrano in un espressione.

Cosa viene prossomo?

    Vengono promossi a 'int' o 'unsigned int' in casi particolari:
    - bool
    - char / signed char / unsigned char
    - short / unsigned short
    - enum (di dimensioni piccole)

Se tutti i valori del tipo più piccolo entrano in 'int' si promuove a 'int'
*/

#include <iostream>
using namespace std;

int main(){

    char c = 100;
    short d = 10000;

    auto r = c + d;
    /* 'c' e 'd'  vengono promossi almeno a 'int' e quindi 'r' è di tipo 'int' */

    cout<<"sizeof(c): "<<sizeof(c)<<endl; // atteso: 1
    cout<<"sizeof(d): "<<sizeof(d)<<endl; // atteso: 2

    cout<<"cast(c): "<<static_cast<int>(c)<<endl; // atteso: 100
    cout<<"cast(d): "<<static_cast<int>(d)<<endl; // atteso: 10000
}

