/*

NULLPTR

*/

#include <iostream>
using namespace std;

void f(int) {
    cout << "f(int)\n";
}

void f(int*) {
    cout << "f(int*)\n";
}

int main() {
    f(0);        // f(int)
    //f(NULL);     // f(int) o warning
    f(nullptr);  // f(int*)
}
