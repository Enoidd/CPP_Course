#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"N: ";
    cin>>n;

    int* array = new int[n];

    for(int i=0; i<n; i++){
        cout<<"Elemento "<<i+1<<": ";
        cin>>array[i];
    }

    int somma = 0;

    for(int i=0; i<n; i++){
        somma+=array[i];
    }

    cout<<"Somma: "<<somma;

    delete[] array;
    return 0;
}