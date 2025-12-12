/*

PASSAGGIO DI ARRAY A FUNZIONI

*/

#include <iostream>
using namespace std;

void print_standard(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<""<<arr[i]<<" ";
    }
}

void print_pointer(int* arr, int size){

    for(int i=0; i<size; i++){
        cout<<""<<arr[i]<<" ";
    }
}

int main(){

    int arr[5];

    for(int i=0; i<5; i++){
        cout<<"Numero: ";;
        cin>>arr[i];
    }

    print_standard(arr, 5);
    cout<<endl;
    print_pointer(arr, 5);
}