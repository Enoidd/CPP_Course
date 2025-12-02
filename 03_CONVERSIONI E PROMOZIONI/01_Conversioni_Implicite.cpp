
/*

Conversioni implicite in assegnazione, quando passi parametri a una funzione, in return e nelle espressioni con tipi misti.

*/

#include <iostream>
using namespace std;

// 2- quando passi i parametri a una funzione
double f(double x){

    // 3- nei return
    return 42; // da int '42' a double '42.0' tipo di ritorno della funzione
}

int main(){

    // 1- conversioni in assegnazione
    double d = 3; // da int '3' a double '3.0'
    int i = 3.5; // da double '3.0' a int '3'

    // 2- quando passi i parametri a una funzione
    f(i); // da int '3' a double '3.0' nella funzione sopra

    // 3- nei return
    cout <<"f: "<<f(i);

    // 4- Nelle espressioni con tipi misti
    int a = 3;
    double db = 2.5;
    auto r = a + db; // a è int e db è double quindi da int -> double -> 5.5

    auto r = a + db;
    cout << "r: "<<r<<endl; // atteso: 5.5
}