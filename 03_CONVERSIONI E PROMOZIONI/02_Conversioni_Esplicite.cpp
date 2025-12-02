/*

Le conversioni esplicite vengono direttamente riportate nel codice.


Cast C++:
- static_cast<T>(expr) -> conversioni normali, controllate a compile-time
- reinterpret_cast<T>(expr) -> reinterpretazione di bit
- const_cast<T>(expr) -> rimozione / aggiunta di const
- dynamic_cast<T>(expr) -> per gerarchie di classi polimorfe


Per le conversioni numeriche 'static_cast'
*/

#include <iostream>
using namespace std;

int main(){

    double d = 3.7;
    int i = static_cast<int>(d); // 3

    cout << "i: "<< i; // atteso: 3
}
