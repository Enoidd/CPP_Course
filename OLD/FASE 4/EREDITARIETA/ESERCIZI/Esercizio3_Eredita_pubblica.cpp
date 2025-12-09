/*
Crea una classe Dispositivo con metodo accendi().
Deriva la classe Telefono in modalità public.
Verifica che accendi() sia accessibile nel main() usando un oggetto Telefono.
*/

#include <iostream>
#include <string>
using namespace std;

class Dispositivo{
    public:
        void accendi(){
            cout<<"Dispositivo acceso\n";
        }
};

class Telefono : public Dispositivo{};

int main(){
    Telefono t;

    t.accendi();
}