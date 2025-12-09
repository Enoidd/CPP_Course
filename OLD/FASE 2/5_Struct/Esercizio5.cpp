/*
Usa struct Persona { string nome; int eta; }

Scrivi una funzione const Persona& piuVecchio(const Persona& a, const Persona& b);

Crea due persone, confrontale e stampa chi è più anziano.
*/

#include <iostream>
#include <string>
using namespace std;

typedef struct{
    string nome;
    int eta;
} Persona;

/* Ritorna un riferimento costante a un oggetto di tipo 'Persona'*/
const Persona& piuVecchio(const Persona& a, const Persona& b){

    if(a.eta>b.eta)
        return a;
    else
        return b;
}

int main(){

    Persona p1={"Giancarlo", 29};
    Persona p2={"Manuel", 40};

    const Persona& anziano = piuVecchio(p1, p2);
    cout<<""<<anziano.nome<<","<<anziano.eta<<" anni."<<endl;
}