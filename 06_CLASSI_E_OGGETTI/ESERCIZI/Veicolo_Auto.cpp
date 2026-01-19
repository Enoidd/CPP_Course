#include <iostream>
#include <string>
using namespace std;

class Veicolo{
    private:
        string marca;

    public:
        // Costruttore di default
        Veicolo(){
            marca = "Sconosciuta";
        }

        Veicolo(const string& nomeMarca){
            this->marca = nomeMarca;
        }
    
        virtual void stampa() const{
            cout<<"Marca: "<<marca;
        }
};

class Auto : public Veicolo{
    private:
        int porte;
    
    public:
        Auto() : Veicolo(){
            porte=0;
        }

        Auto(const string& v, int porte) : Veicolo(v){
            this->porte=porte;
        }

        void stampa() const override{
            Veicolo::stampa();
            cout<<" , porte: "<<porte;
        }
};

int main(){

    cout<<"--- Auto default ---\n";
    Auto a1;
    a1.stampa();

    cout<<"--- Auto Parametrico ---\n";
    Auto a2("Mercedes", 5);
    a2.stampa();

    Veicolo* veicolo = new Auto("Fiat", 3);
    veicolo->stampa();

    return 0;
}
