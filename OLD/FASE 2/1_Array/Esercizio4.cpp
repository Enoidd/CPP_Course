/*
Scrivi una funzione che prende un array di interi e restituisce un nuovo array con gli elementi invertiti.

Esempio: Input: 1 2 3 4 5 Output: 5 4 3 2 1.

Il main() deve mostrare l’array originale e quello invertito.

Usa una funzione invertiArray(int arr[], int size).
*/

#include <iostream>

using namespace std;

void invertiArray(int arr[], int size){
    for(int i=size-1; i>=0; i--){
        cout << "[";
        cout << "" << arr[i];
        cout << "]";
    }
}

int main(){

    int size;

    cout << "Inserisci il numero di elementi che vuoi memorizzare nell'array: ";
    cin >> size;

    int arr[size];
    // input
    for(int i=0; i<size; i++){
        cout << "Inserisci il " << i+1 << " elemento: ";
        cin >> arr[i];
    }

    // output
    cout << "Array: ";
    for(int i=0; i<size; i++){
        cout << "[";
        cout << "" << arr[i];
        cout << "]";
    }

    cout << "" << endl;

    cout << "Array invertito: ";
    invertiArray(arr, size);

}