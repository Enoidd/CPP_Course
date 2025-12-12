/*

POP_BACK rimuove l'ultimo elemento

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    // in
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);

    // out
    for(size_t i = 0; i<v.size(); i++)
        cout<<""<<v[i]<<" ";
    
    v.pop_back();

    cout<<endl;

    // out
    for(size_t i = 0; i<v.size(); i++)
        cout<<""<<v[i]<<" "; // Atteso: 2 3

    // Elimina un elemento in posizione X
    v.erase(v.begin()+1); // elemento in pos 2°

    cout<<endl;

    // out
    for(size_t i = 0; i<v.size(); i++)
        cout<<""<<v[i]<<" "; // 2

    // Svuota il vector ma non libera la capacità
    v.clear();

    cout<<endl;
    cout<<"eseguito v.clear(), capacita': "<<v.capacity()<<" size: "<<v.size()<<endl;
}