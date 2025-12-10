/*

Narrowing con inizializzazione a graffe

Valuta quali dichiarazioni compilano:

double x = 4.9; - Compila: dichiarazione + assegnazione
int    a = x; - Compila: dichiarazione + assegnazione
int    b{x}; - Compila: 
char   c{300}; - Non compila


Spiega perché.

*/

#include <iostream>
using namespace std;

int main(){

    double x = 4.9;
    int a = x; // Compila con possibile perdita di dati (cast implicito da int a double)
    int b{x}; // Le graffe proibiscono la conversione da int a double
    char c{300}; // char rappresenta valori da -128 +127 (signed) e da 0 a 255 (unsigned) - 300 non rientra 
}
