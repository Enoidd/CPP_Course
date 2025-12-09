/*
Crea un array dinamico di stringhe (string*) e inserisci nomi di città.
Scrivi una funzione che li stampi in ordine inverso.
Poi libera la memoria con delete[].

void stampaInverso(string* arr, int n);
*/

#include <iostream>
#include <string>
using namespace std;

void stampaInverso(string* arr, int n){

    for(int i=n; i>=0; i--){
        cout<<""<<arr[i]<<endl;        
    }
}

int main(){
    
    int* n = new int;
    cout << "Dimensione: ";
    cin >> *n;

    string* arrayDiStringhe = new string[*n];

    for(int i=0; i<*n; i++){
        cout<<"Inserisci la " << i+1 << "° città: ";
        cin>>arrayDiStringhe[i];
    }

    stampaInverso(arrayDiStringhe, *n);

    delete n;
    delete[] arrayDiStringhe;
}