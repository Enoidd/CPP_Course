/*

Scrivi un breve programma che:

Legge da input un double.

Converte esplicitamente quel valore in int tramite static_cast<int>().

Stampa sia il valore originale che quello troncato.

Spiega perché troncamento ≠ arrotondamento.

*/

#include <iostream>
using namespace std;

int main(){

    double x;

    cout<<"Inserisci un double: ";
    cin>>x;

    int t = static_cast<int>(x);

    cout<<"x: "<<x<<" sizeof()->double:"<<sizeof(x)<<endl;
    cout<<"t: "<<t<<" sizeof()->int:"<<sizeof(t)<<endl;

    /* Il troncamento taglia la parte decimale del double, l'arrotondamento aggiunge alla parte decimale per raggiungere la cifra intera */


}