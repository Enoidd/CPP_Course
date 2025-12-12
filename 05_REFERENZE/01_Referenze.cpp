/*

Una referenza è un alias per un'altra variabile.

*/

#include <iostream>
using namespace std;

int main(){

    int x = 10;
    int& refX = x; // 'refX' è un altro nome di 'x'

    cout<<"x: "<<x<<endl; // atteso 10
    cout<<"refX: "<<refX<<endl; // atteso 10
}