#include <vector>
#include <iostream>
using namespace std;

int main(){
    
    int size;
    cout<<"Size: ";
    cin>>size;

    vector<int> v(size);

    for(size_t i = 0; i<v.size(); i++){
        cout<<"Num: ";
        cin>>v[i];
    }

    int somma=0;
    for(int i=0; i<size; i++){
        somma+=v[i];
    }

    cout<<"somma: "<<somma;
    return 0;
}