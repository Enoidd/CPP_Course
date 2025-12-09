/*

Espressione con tipi misti (signed, unsigned, double)

Considera:

unsigned int u = 10;
int          s = -3;
double       d = 2.5;

auto r = u + s + d;


Quale tipo assume l’espressione finale?

In quale ordine avvengono le conversioni?

Quali effetti collaterali potrebbero verificarsi con determinate implementazioni?

's' viene convertito a unsigned

*/

#include <iostream>
using namespace std;

int main(){

    unsigned int u = 10;
    int          s = -3;
    double       d = 2.5;

    auto r = u + s + d; // tra 'u' e 's' rank + alto usigned quindi 's' a usigned int, tra usigned e double ha rank + alto tutto viene convertito a double
    cout<<"r: "<<r; // Output: 9.5
}