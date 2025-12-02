/*

#define fa parte del preprocessore. Prima che il compilatore analizzi il codice,
il preprocessore sostituisce testualmente tutte le occorrenze del nome definito.

SINTASSI BASE:
=============

#define NOME valore // non c'è nessun controllo sul tipo finché non viene compilato

*/

#include <iostream>
using namespace std;

#define PI 3.14159
#define IVA 0.22
#define MAX_ITEM 100

int main(){

    int raggio;
    cout << "Inserisci il raggio: ";
    cin >> raggio;

    double area = PI * raggio * raggio;
    double prezzo = MAX_ITEM * (1+IVA);

    cout << "Area: "<<area<<endl;
    cout <<"Prezzo: "<<prezzo<<endl;


}

