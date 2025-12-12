/*

EMPLACE_BACK costruisce l'oggetto direttamente in memoria

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    // Costruisce l'oggetto in memoria
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(5);
}