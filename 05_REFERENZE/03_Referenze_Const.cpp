/*

REFERENCE CONST
    - Protegge il valore da modifiche
    - Evita copie inutili

*/

#include <iostream>
using namespace std;

int main(){

    int x = 10;
    const int& ref = x;

    cout<<"x: "<<x<<endl;
    cout<<"ref: "<<ref<<endl;

    //ref=11; // non lo permette
}