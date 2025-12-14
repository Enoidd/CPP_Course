/*

GESTIONE DINAMICA DEGLI ARRAY

*/

#include <iostream>
using namespace std;

int main(){

    int* arr = new int[5]; // Elementi non inizializzati

    int* a = new int[5]{1,2,3,4,5}; // Elementi inizializzati

    int* array = new int[5](); // Elementi inizializzati a 0

    delete[] arr;
    delete[] a;
    delete[] array;

}