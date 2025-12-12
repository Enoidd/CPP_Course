/*

ARRAY E MEMORIA

    - Gli array statici (dimensione nota) vengono allocati:
        Nello stack (se definiti dentro una funzione)
        Nello static storage se definiti come globali

*/

#include <iostream>
using namespace std;

void f(){

    int a[10000]; // nello stack
}

int main(){


}

