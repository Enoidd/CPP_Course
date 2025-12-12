/*

RESIZE vs RESERVE

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n; // vector size
    
    cout<<"Dim: ";
    cin>>n;

    vector<int> v(n);

    int num;
    // in
    for(size_t i = 0; i<v.size(); i++){
        cout<<"Num: "<<endl;
        cin>>v[i];
    }

    // Cambia la size aggiungendo elementi
    cout<<"Nuova size: ";
    cin>>n;
    v.resize(n); // Aggiungi size / riduci size (rimuove elementi presenti)

    // Riserva memoria
    int nuovaMem;
    cout<<"Riserva memoria: ";
    cin>>nuovaMem;
    v.reserve(nuovaMem);

    cout<<"Nuova memoria riservata. v.size(): "<<v.size()<<" v.capacity(): "<<v.capacity();

}