/*

Valuta quali righe compilano e quali no:

double d = 3.9;

int   a = d;
int   b{d};
char  c{300};
short s{40000};

*/

#include <iostream>
using namespace std;

int main(){

    double d = 3.9;

    int   a = d; // NARROWING 'd' da 3.9 a 3 perché 'a' è int
    int   b{d}; // Non compila - Funzione?
    char  c{300}; // Non compila - Funzione?
    short s{40000}; // Non compila - Funzione?

}