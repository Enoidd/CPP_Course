/*
chiedere la dimensione da utente, creare array dinamico e popolarlo con cin
*/

#include <iostream>
using namespace std;

int main(){

    int* dimensione = new int;

    cout<<"Dimensione: ";
    cin>>*dimensione;

    int* array = new int[*dimensione];

    // INPUT
    for(int i=0; i<*dimensione; i++){
        cout<<""<<i+1<<" elemento: ";
        cin>>array[i];
    }

    // OUTPUT
    cout<<"Output:\n";
    for(int i=0; i<*dimensione; i++){
        cout<<""<<i+1<<" elemento: "<<array[i]<<endl;
    }

    delete dimensione;
    delete[] array;
}