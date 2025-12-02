/*

Es. per comprendere meglio le MACRO.

*/

#include <iostream>
using namespace std;

#define DODICI 10+2
#define QUINDICI (5+5)

int main(){

    int x = 3 * DODICI;
    /* Il preprocessore trasforma '3 * DODICI' in '3 * 10 + 2'*/

    cout << "x: "<<x<<endl; // atteso: 36

    /* Usando le parentesi nella macro quindi '(5+5)' */
    int x = 3 * QUINDICI; 
    /* Il preprocessore trasforma '3 * QUINDICI' in '3 * 5 + 5' */

    cout << "x: "<<x<<endl; // atteso: 30
}