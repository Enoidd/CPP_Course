#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v; // vector di 5 elementi

    int num; // input

    for(size_t i = 0; i<5; i++){
        cout<<"Num:";
        cin>>num;
        v.push_back(num);
    }


    cout<<"Vector: ";
    for(size_t i = 0; i < v.size(); i++){
        cout<<""<<v[i];
        cout<<"\n";
    }

    return 0;
}