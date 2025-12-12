/*

ARRAY DINAMICI

    - Dimensione nota solo a runtime

*/

#include <iostream>
using namespace std;

void print_pointer(int* arr, int size){
    for(int i=0; i<size; i++){
        cout<<""<<arr[i]<<" ";
    }
}

int main(){

    int n; // dimensione array

    cout<<"Dimensione: ";
    cin>>n;

    int* arr = new int[n];

    for(int i=0; i<n; i++){
        cout<<"Numero: ";
        cin>>arr[i];
    }

    print_pointer(arr, n);

    delete[] arr;
}
