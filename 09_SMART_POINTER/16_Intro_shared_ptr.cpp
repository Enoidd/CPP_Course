/*

E' uno smart pointer che implementa ownership condivisa, sostanzialmente più puntatori possono possedere lo stesso oggetto.
La risorsa viene distrutta soltanto quando l'ultimo puntatore che ne possiede l'ownership viene distrutto/resettato.

    - Ownership condivisa
    - Distruzione automatica
    - Più costoso di unique_ptr

Possiede un counter che ad ogni risorsa che ne prende l'ownership questo incrementa.

*/

#include <iostream>
#include <memory>
using namespace std;

int main(){

    shared_ptr<int> p1 = make_shared<int>(2);

    cout<<"use_count p1: "<<p1.use_count()<<endl; // atteso: 1

    shared_ptr<int> p2 = p1; // ownership condivisa

    // dopo la condivisione il counter passa a 2
    cout<<"use_cout p1: "<<p2.use_count()<<endl; // atteso: 2
    
    // ma cosa succede a p2?
    cout<<"use_count p2: "<<p2.use_count()<<endl; // atteso: 2
    
    /*
    unique_ptr<int> p = make_unique<int>(10);
    unique_ptr<int> pp = p; // non si può fare con gli 'unique'
    */

    cout<<"*p1: "<<*p1<<endl; // atteso: 2
    

    cout<<"*p2: "<<*p2<<endl; // atteso: 2
}