/*

UNIQUE_PTR

    - Possiede solo un owner
    * Non è copiabile
    - Distrugge l'oggetto automaticamente
    - Smart pointer di default

*/

#include <iostream>
#include <memory>
using namespace std;

int main(){

    unique_ptr<int> p = make_unique<int>(5);

    //unique_ptr<int> pp = p1; // ERRORE - non posso copiarlo
}