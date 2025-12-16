/*

Anche per gli array dinamici il delete avviene in maniera automatica

*/

#include <iostream>
#include <memory>
using namespace std;

int main(){

    unique_ptr<int []> p = make_unique<int []>(5); // inizializzazione automatica a 0

    for(int i=0; i<5; i++){
        cout<<" "<<""<<i+1<<": "<<p[i];
    }
}