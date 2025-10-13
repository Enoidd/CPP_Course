/*
Esercizio riepilogativo argomento Array Monodimensionali.
*/


/* RICHIESTA
Scrivi un programma che:

Chieda all’utente di inserire 10 numeri interi in un array,

Stampi il massimo e il minimo,

Stampi quanti numeri pari e quanti dispari sono stati inseriti.
*/

#include <iostream>
using namespace std;

int main(){

    int dimensione=10;
    int max, min;

    int array[dimensione];
    for(int i=0; i<10; i++){
        cout << "Inserisci il: " << i+1 << " numero:";
        cin >> array[i];
    }

    // Calcola il max
    max=array[0];
    min=array[0];
    int countPari=0;
    int countDispari=0;
    for(int i=1; i<dimensione; i++){
        if(array[i]%2==0)
            countPari++;
        if(array[i]%2==1)
            countDispari++;
        if(array[i]>=max)
            max=array[i];
        if(array[i]<=min)
            min=array[i];
    }

    cout << "Max: " << max << ", Min: " << min << ", Pari: " << countPari << ", Dispari: " << countDispari;
}