/*



*/

#include <iostream>
#include <memory>
using namespace std;

void trasferita(int* p){
    cout<<"Owner trasferita.\n";
}

int main(){

    unique_ptr<int> p = make_unique<int>(5);
    // 'p' possiede l'int
    // 'p' è l'owner

    // get - osserva senza possedere
    // ossia restituisce un puntatore grezzo senza trasferire l'ownership (move)
    
    // interoperabiolità, passaggio del puntatore senza perdere l'ownership
    int* raw = p.get();

    cout<<"*raw: "<<*raw<<endl; // atteso: 5

    // chiamare delete ma 'p' rimane vuoto (nullptr)
    //p.reset(); // l'int viene distrutto

    cout<<"*p: "<<*p<<endl; // atteso 0/nullptr - non è dnagling pointer

    p.reset(new int(10)); // se voglio riusare il puntatore con un nuovo int

    cout<<"*p: "<<*p<<endl; // atteso 10

    unique_ptr<int> pr = make_unique<int>(5);
    
    trasferita(pr.release()); // trasferisce l'ownership

}