/*

PASSAGGIO DI REFERENCE A FUNZIONI
    - Evita copie
    - Permette di modificare argomento originale

*/

#include <iostream>
using namespace std;

void incrementa(int& refX){
    refX = refX+1;
}

int main(){

    int x = 10;
    int& ref = x;

    incrementa(ref);

    cout<<"x incrementato: "<<x<<endl;
}