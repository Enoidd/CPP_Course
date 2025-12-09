/*
Esercizio riepilogativo argomento Input/Output e tipi di dato base.
*/


/* RICHIESTA
1. Chieda all'utente tre numeri interi
2. Calcoli e stampi:
    - Somma
    - Media (in float)
    - Valore massimo
    - Valore minimo
3. Mostri tutto in una sola frase formattata come:
"La somma è X, la media è Y, il massimo è Z, il minimo è W"
*/

#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;

    int somma=0;
    float media;
    int max;
    int min;

    cout << "Inserisci il primo numero: ";
    cin >> n1;
    cout << "Inserisci il secondo numero: ";
    cin >> n2;
    cout << "Inserisci il terzo numero: ";
    cin >> n3;

    somma = n1+n2+n3;
    media = (float)somma/3;

    max=n1;
    if(max<=n2)
        max=n2;
    if(max<=n3)
        max=n3;
    if(n2<=n3 && max<=n3)
        max=n3;
    if(n3<=n2 && max<=n2)
        max=n2;
    
    min=n1;
    if(min>=n2)
        min=n2;
    if(min>=n3)
        min=n3;
    if(n2>=n3 && n3<=max)
        min=n3;
    if(n3>=n2 && n2<=max)
        min=n2;

    cout << "La somma vale " << somma << ", la media vale " << media << ", il massimo vale " << max << ", il minimo vale " << min << endl;

}