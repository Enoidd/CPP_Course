/*

UNIQUE_PTR

    - Possiede solo un owner
    * Non è copiabile
        TRASFERIMENTO DI OWNERSHIP

*/

#include <iostream>
#include <memory>
using namespace std;

int main(){

    unique_ptr<int> p = make_unique<int>(5);
    unique_ptr<int> pp = move(p);

    // pp è owner 
    // p diventa nullptr

    cout<<"p==nullptr?: "<<(p==nullptr)<<endl; // atteso: 1/true
    cout<<"*pp: "<<*pp<<endl; // atteso: 5
}