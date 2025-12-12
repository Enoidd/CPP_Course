/*

INSERT - Inserisce in una posizione specifica un elemento

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    v.insert(v.begin() + 2, 99);

    // La posizione è indicata da: v.begin() + 2, ossia in posizione numero 3° anche se il vector ha già un elemento in pos 3. Questo viene inserito
    // e fa slittare gli altri nelle posizioni accanto
}