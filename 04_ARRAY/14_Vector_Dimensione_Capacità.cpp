/*

DIMENSIONE vs CAPACITA'

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v(5); // 5 elementi inizializzati a 0

    cout<<"v.size(): "<<v.size()<<endl;

    // INSERIMENTO DI 6 elementi in vector di 5
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6); // Qui raddoppia la size (da 5 passa a 10 + l'elemento inserito: 11)
                    // Qui raddoppia la capacità (da 5 passa a 10)
    v.push_back(7);

    cout<<"v.size(): "<<v.size()<<endl;
    cout<<"v.capacity(): "<<v.capacity()<<endl;
}