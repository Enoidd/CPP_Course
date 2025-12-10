/*

Int + double

Dichiara:

int i = 3;
double d = 2.5;
auto r = i + d;


Domanda:

Quale conversione avviene?

Qual è il tipo finale di r? La conversione che avvie

*/

#include <iostream>
using namespace std;

int main(){

    int i = 3; // 4
    double d = 2.5; // 8
    auto r = i + d; // auto cast a 8 byte per 'i', quindi 'r' è double -> 8 Byte

    cout<<"sizeof(i): "<<sizeof(i)<<endl; // 4
    cout<<"sizeof(d): "<<sizeof(d)<<endl; // 8
    cout<<"sizeof(r): "<<sizeof(r)<<endl; // 8

}