/*

Macro costante

Definisci una macro:

#define TAX 0.22


E usala per calcolare il prezzo finale:

prezzo + (prezzo * TAX)

*/

#include <iostream>
using namespace std;

#define TAX 0.22

int main(){

    double prezzo;
    cout<<"Prezzo:";
    cin>>prezzo;

    auto prezzoFinale = prezzo + (prezzo * TAX);

    cout<<"Prezzo finale: "<<prezzoFinale<<endl;
}