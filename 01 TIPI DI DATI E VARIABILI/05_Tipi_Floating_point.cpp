/*

Servono per rappresentare numeri con la virgola:
    
    - float (precisione singola 32 bit)
    - double (precisione doppia 64 bit)
    - long double (ancora più precisione)

*/

#include <iostream>
using namespace std;


int main(){

    float f = 3.1415926f; 
    double d = 3.14159265358979;
    long double ld = 3.141592653589793238L;

    cout <<"f: "<<f<<"\n";
    cout <<"d: "<<d<<"\n";
    cout <<"ld: "<<ld<<"\n";

    //float f = 3.14159265358979;
    //cout <<"f: "<<f<<"\n";
}