/*

OPERATORE NEW OGGETTI + DELETE

Quando si alloca memoria, questa deve essere liberata.
Per liberarla si usa "delete X", ad ogni "new" corrisponde un "delete"
*/

#include <iostream>
using namespace std;

class A{
    public:
        int x;
        A(int v): x(v){}; // Costruttore

};

int main(){
    
    A* obj = new A(4); // Allocazione + chiamata costruttore

    delete obj; // Chiama il costruttore + libera memoria
}