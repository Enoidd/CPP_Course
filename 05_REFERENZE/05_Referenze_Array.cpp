/*

REFERENZE E ARRAY

*/

#include <iostream>
using namespace std;

int main(){

    int a[5]; 

    int (&r)[5] = a; // Referenza dell'array completo

    for(int i=0; i<5; i++){
        r[i] = i;
    }

    for(int i=0; i<5; i++){
        cout<<" "<<r[i]<<" ";
    }
}