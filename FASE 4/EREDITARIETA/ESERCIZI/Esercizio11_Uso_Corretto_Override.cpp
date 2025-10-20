/*
Crea una classe Base con virtual void mostra().
Crea una derivata Derivata che fa void mostra() override.
Mostra comportamento corretto con Base* b = new Derivata();
*/

#include <iostream>
using namespace std;

class Base{
    public:
        virtual void mostra(){
            cout<<"Base\n";
        }
};

class Derivata : public Base{
    public:
        void mostra() override{
            cout<<"Derivata\n";
        }
};

int main(){
    
    Base* b = new Derivata();
    b->mostra(); // Derivata
    delete b;
}

