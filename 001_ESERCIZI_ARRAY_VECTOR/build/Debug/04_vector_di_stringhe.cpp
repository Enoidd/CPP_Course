#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<string> stringhe;

    int size = 0;
    cout<<"Size: ";
    cin>>size;
    cin.ignore();

    for(size_t i = 0; i<size; i++){
        string s;
        cout<<"Stringa: ";
        getline(cin, s);
        stringhe.push_back(s);        
    }

    for(size_t i = 0; i<size; i++){
        cout<<"Stringa "<<i+1<<": "<<" ";
        cout<<stringhe[i];
    }
}