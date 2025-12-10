/*

Promozione char → int

Dichiara:

char c = 100;
short s = 20;
auto r = c + s;


Stampa:

sizeof(c)

sizeof(s)

sizeof(r)

Domanda: Che tipo ha r e perché?

'c' e 's' vengono promossi a int, dunque 4 Byte
*/

#include <iostream>
using namespace std;

int main(){

    char c = 100; // 1Byte
    short s = 20;  // 2Byte
    auto r = c + s; // Promozione a quello + grande quindi 'c' pesa 2Byte (short)

    cout<<"Sizeof(c): "<<sizeof(c)<<endl; // 1
    cout<<"Sizeof(s): "<<sizeof(s)<<endl; // 2
    cout<<"Sizeof(r): "<<sizeof(r)<<endl; // 4

}