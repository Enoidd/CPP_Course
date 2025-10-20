/*
Crea una classe Animale con un metodo suono().
Deriva da essa una classe Cane che ridefinisce il metodo suono() stampando "Bau".
Nel main() crea un oggetto Cane e chiama suono().
*/

#include <iostream>
#include <string>
using namespace std;

class Animale{  // Base
    public: 
        // Metodo suono
        virtual void suono(){
            cout<<"Un suono sconosciuto.\n";
        }  
};

class Cane : public Animale{ // Derivata
    public:
        // Metodo suono della classe base ridefinito
        void suono() override{
            cout<<"Bau Bau\n";
        }
};

int main(){

    Cane c;
    c.suono();
}