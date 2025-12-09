/*

Cosa stampa il seguente codice? Perché?

int          a = -1;
unsigned int b = 5;

if (a < b)
    std::cout << "a < b\n";
else
    std::cout << "a >= b\n";


*/

#include <iostream>
using namespace std;

int main(){

    int          a = -1;
unsigned int b = 5;

if (a < b)
    std::cout << "a < b\n";
else
    std::cout << "a >= b\n";

}

/*

Stampa a>=b perché il confronto trasforma 'a' in unsigned int a 32bit (dimensione 2^32) pertanto 2^32 >= di 'b' che è anch'esso unsigned int 

*/