/*
Conta elementi pari e dispari con puntatori

Array dinamico di n elementi

Funzione void contaPariDispari(int* arr, int size, int* pari, int* dispari);
*/

#include <iostream>
using namespace std;

void contaPariDispari(int* arr, int size, int* pari, int* dispari){
    
    int* end = arr+size; // end è l'ultimo elemento quindi ha dim 'size'
    int* p = arr;
    while(p<end){ // conta dall'inizio fino alla fine
        // l'elemento corrente è Pari?
        if(*p%2==0)
            *pari += 1;
        else if(*p%2==1)
            *dispari += 1;
        p++;
    }
}

int main(){

    int n; // dimensione array
    int* arr = nullptr;

    cout << "Dimensione: ";
    cin >> n;

    arr = new int[n];
    int* end = arr+n;
    int *p = arr;

    while(p<end){
        cout << "Valore:";
        cin >> *p;
        p++;
    }
    
    int pari=0;
    int dispari=0;

    contaPariDispari(arr, n, &pari, &dispari);

    cout << "Pari: " << pari << ", Dispari: " << dispari << endl;
}