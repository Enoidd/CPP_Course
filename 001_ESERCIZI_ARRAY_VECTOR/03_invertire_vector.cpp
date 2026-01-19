#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v(5);

    for(size_t i = 0; i<5; i++){
        cout<<"Num: ";
        cin>>v[i];
    }

    for(size_t i = 0; i<v.size(); i++){
        cout<<""<<v[i];
    }

    vector<int> inv;
    while(!v.empty()){
        inv.push_back(v.back());
        v.pop_back();
    }

    cout<<"inv: ";
    for(size_t i = 0; i<inv.size(); i++){
        cout<<inv[i];
    }

    return 0;
}