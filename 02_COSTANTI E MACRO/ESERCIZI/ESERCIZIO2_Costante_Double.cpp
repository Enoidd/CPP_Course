/*

Costante di tipo double

Dichiara:

const double PI = 3.14159;


E usa PI per calcolare la circonferenza:

C = 2 * PI * r


con un raggio inserito dall’utente.

*/

#include <iostream>
using namespace std;

int main(){
    
    const double PI = 3.14159;
    double raggio;

    cout<<"Inserisci il raggio: ";
    cin>>raggio;

    double C = 2 * PI * raggio;
    cout<<"Circonferenza: "<<C<<endl;
}