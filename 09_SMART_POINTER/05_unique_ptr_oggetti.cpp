/*

unique_ptr accesso a oggetto

*/

#include <iostream>
#include <memory>
using namespace std;

class A{
    public:
        int x;
        A(int v): x(v){};

        void stampa(){
            cout<<"CIAO\n"<<endl;
        }
};

int main(){

    unique_ptr<A> pA = make_unique<A>(2);

    pA->stampa();
}