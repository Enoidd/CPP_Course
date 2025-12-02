/*

- signed int può rappresentare numeri negativi e positivi (es. da 02.147.483.648 a 2.147.483.648) per un int a 32bit
- unsigned int non ha numeri negativi, ma rappresenta 0 a 4.294.967.295

*/

#include <iostream>
#include <climits> // per INT_MIN, INT_MAX, UINT_MAX, UINT_MIN
using namespace std;

int main(){

    cout << "INT_MIN: "<<INT_MIN<<"\n";
    cout << "INT_MAX: "<<INT_MAX<<"\n";
    cout << "UINT_MAX: "<<UINT_MAX<<"\n";
}