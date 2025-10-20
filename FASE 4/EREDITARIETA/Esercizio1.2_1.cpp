/*
Prova a ereditare una classe Base usando tutti e 3 i modi. Prova a richiamare i metodi da un oggetto esterno. 
Cosa succede?
*/

#include <iostream>
#include <string>
using namespace std;

class Animale{ // Classe base  
    public:
        // Metodo abbaia
        void abbaia(){
            cout<<"BauBau"<<endl;
        }
    protected:
        // Metodo guaisce
        void guaisce(){
            cout<<"KaiKai"<<endl;
        }
    private:
        // Metodo ringhia
        void ringhia(){
            cout<<"grrrr"<<endl;
        }
};

class Cane : public Animale{    // Classe derivata
    public:
        // Metodo mostra differenze
        void mostraDifferenze(){
            abbaia();
            guaisce(); // accessibile dalla derivata
            //ringhia(); // non è accessibile perché pvt in classe base
        }
};


int main(){

    Cane c;

    c.mostraDifferenze(); 
    /*
    Il cane 'c' abbaia e guaisce ma non ringhia perché il metodo ringhia è inaccessibile essendo pvt in classe base.
    Mentre guiasce perché anche se protected è accessibile dalla derivata.
    */
}
