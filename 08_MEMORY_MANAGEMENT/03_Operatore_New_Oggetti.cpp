/*

OPERATORE NEW PER OGGETTI

*/

#include <iostream>
using namespace std;

class A{
    public:
        int x;
        A(int v) : x(v){}; // costruttore
};

int main(){

    A* obj = new A(3); // Alloca memoria e chiama il costruttore
}