/*

ARRAY E PUNTATORI

*/

#include <iostream> 
using namespace std;

int main(){

    int arr[5];
    int* p = arr; // arr --> &arr[0] (indirizzo primo elemento dell'array)

    // quindi

    p[2] == arr[2];
    *(p+3) == arr[3];

    // infatti
    cout<<"arr: "<<arr<<" arr[0]: "<<arr[0]<<" p[0]: "<<p[0]<<endl;
    cout<<"p[2]: "<<p[2]<<" arr[2]: "<<arr[2]<<endl;

    cout<<"sizeof(arr): "<<sizeof(arr); // output: 20 (10*4byte(int))
}