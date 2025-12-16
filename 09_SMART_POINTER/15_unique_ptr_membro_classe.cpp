/*

Crea una classe base Risorsa che:

    abbia un metodo virtual void usa() const
    abbia un distruttore virtuale
    stampi messaggi nei costruttori/distruttori

Crea una classe derivata FileSimulato che:

    possieda una risorsa tramite std::unique_ptr<int>
    inizializzi la risorsa nel costruttore
    override di usa()

Nel main:

    usa un std::unique_ptr<Risorsa>
    assegna un oggetto FileSimulato
    chiama usa()
    lascia terminare lo scope (RAII)

*/

#include <iostream>
#include <memory>
using namespace std;

class Risorsa{
    public:
        Risorsa(){cout<<"Costruttore Risorsa\n";};
        virtual ~Risorsa(){cout<<"Distruttore Risorsa\n";};

        virtual void usa() const{
            cout<<"Risorsa usata\n";
        }
};

class FileSimulato : public Risorsa{
    public:
        unique_ptr<int> p;
        FileSimulato() : Risorsa(), p(make_unique<int>(42)){cout<<"Costruttore FileSimulato\n";};
        void usa() const override{
            cout<<"Costruttore FileSimulato\n";
        }
};

int main(){

    unique_ptr<Risorsa> r = make_unique<FileSimulato>();

    r->usa();

    return 0;
}