/*
A → B → C.
Metodo descrizione() definito in A come virtual.
C ridefinisce il metodo.
Usa un puntatore a A* per vedere il comportamento virtuale a 3 livelli.
*/

#include <iostream>
using namespace std;

class A{
    public:
        virtual void descrizione(){
            cout<<"Classe A\n";
        }
};

class B : public A{
    public:
        virtual void descrizione(){
            cout<<"Classe B\n";
        }
};

class C : public B{
    public:
        void descrizione() override{
            cout<<"Classe C\n";
        }
};

int main(){
    A* ptr = new C();
    ptr->descrizione();
}