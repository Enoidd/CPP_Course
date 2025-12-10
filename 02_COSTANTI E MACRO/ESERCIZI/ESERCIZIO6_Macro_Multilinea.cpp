/*

Macro multilinea

Scrivi una macro che stampi due messaggi:

#define PRINT_HELLO \
    std::cout << "Hello\n"; \
    std::cout << "World\n";


Usala nel main.

*/

#include <iostream>
using namespace std;

#define MULTILINEA \
    cout<<"Hello\n"; \
    cout<<"Ciao\n";

int main(){

    MULTILINEA;
}