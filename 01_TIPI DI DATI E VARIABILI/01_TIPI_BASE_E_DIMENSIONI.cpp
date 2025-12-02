/*

TIPI BASE:
============

- bool (non intero ma memorizzato come 0 e 1)
- char 
- short
- int 
- long
- long long

MODIFICATORI:
=============

- signed -> può rappresentare numeri positivi o negativi
- unsigned -> solo numero >= 0, ma raddoppiaa il massimo rappresentabile

COMBINAZIONI TIPICHE:
=====================

- signed int // di solito uguale a: int
- unsigned int
- short int
- unsigned short int
- long int
- unsigned long int
- long long int
- unsigned long long int
- signed char
- unsigned char

DIMENSIONI TIPICHE:
===================

tipo                    dimensione (RAM)                 
char                    1 byte                           
short                   2 byte                           
int                     4 byte                           
long                    4 / 8 byte                       
long long               8 byte                          

*/

#include <iostream>

using namespace std;

int main() {

    cout << "sizeof(char) : " << sizeof(char) << "byte\n"; // Atteso: 1
    cout << "sizeof(short) : " << sizeof(short) << "byte\n"; // Atteso: 2
    cout << "sizeof(int) : " << sizeof(int) << "byte\n"; // Atteso: 4
    cout << "sizeof(long) : " << sizeof(long) << "byte\n"; // Atteso: 8
    cout << "sizeof(long long) : " << sizeof(long long) << "byte\n"; // Atteso: 8

}