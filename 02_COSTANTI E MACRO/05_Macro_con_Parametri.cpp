/*

Esempio di MACRO con parametri, per comprensione del limite.

*/

#include <iostream>
using namespace std;

#define QUADRATO(x) ((x)*(x))

int main(){

    int a = 3;
    int b = QUADRATO(a+1); 
    /* QUADRATO(3+1) -> ((3+1)*(3+1)) */

    cout << "b: "<<b<<endl; // atteso: 16
}