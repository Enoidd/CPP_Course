#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int s;
    cout<<"Size: ";
    cin>>s;

    vector<int> v(s); 


    for(int i = 0; i<s; i++){
        cout<<"Num: ";
        cin>>v[i];
    }

    int min = v[0];
    for(int i = 1; i<s; i++){
        if(v[i]<min)
            min = v[i]; 
    }

    cout<<"Min: "<<min<<endl;

    /* --- min_element --- */
    vector<int> vv(s);

    for(auto iterator = vv.begin(); iterator != vv.end(); ++iterator){
        cout<<"Num second vector: ";
        cin>>*iterator;
    }

    int mini = *vv.begin();
    for(auto it = vv.begin(); it!=vv.end(); ++it){
        if(mini>*it)
            mini = *it;
    }
    cout<<"Mini: "<<mini<<endl;

    auto element = min_element(vv.begin(), vv.end());
    cout<<"Min (min_element): "<<*element;

    return 0;
}