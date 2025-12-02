/*
Alloca dinamicamente una matrice NxM di int con new.
Riempila con valori numerici e calcola la somma di ogni riga e colonna.

Usa doppi puntatori int** matrice;
Ricorda di deallocare ogni riga e poi l’array dei puntatori.
*/

#include <iostream>
using namespace std;

int sommaRiga(int** matrice, int n, int m){
    
    int somma = 0;
    for(int j=0; j<m; j++){ // colonne
        for(int i=0; i<n; i++){ // righe
            somma += matrice[j][i];
        }
    }
    return somma;
}

int main(){

   int* n = new int;
   int* m = new int;
   cout<<"Dimensione N: ";
   cin>>*n;
   cout<<"Dimensione M: ";
   cin>>*m;

   // NxM
   int** matrice = new int*[*n];
   for(int i=0; i<*n; i++){
    matrice[i] = new int[*m];
   }

   // IN
   for(int i=0; i<*n; i++){
    for(int j=0; j<*m; j++){
        cout<<"Numero: ";
        cin>>matrice[i][j];
    }
   }

   // OUT
    for(int i=0; i<*n; i++){
        cout<<endl;
     for(int j=0; j<*m; j++){
        cout<<matrice[i][j];
     }
   }

   cout<<endl<<"Somma: "<<sommaRiga(matrice, *n, *m);
}