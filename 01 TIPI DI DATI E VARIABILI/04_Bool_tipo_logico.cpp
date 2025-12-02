/*

"bool" rappresenta due stati: true o false. 
Internamente viene memorizzato come 0 o 1 (ma non va usato come numero)

*/

#include <iostream>
using namespace std;

int main(){

    bool a = true;
    bool b = false;

    cout << "a: "<<a<<"\n"; // atteso: true (1)
    cout << "b: "<<b<<"\n"; // atteso: false (0)

    bool c = (5>3); // atteso c: true
    cout << "5>3? : "<<c<<"\n"; // atteso: 1

    int x = 10;
    bool d = x; // qualsiasi valore != da 0 è true
    cout << "d: "<<d<<"\n"; // true
    
}

/* Per stampare tre/false come testo usare boolalpha */