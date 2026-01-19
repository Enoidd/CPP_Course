#include <iostream>
using namespace std;

class Contatore{
    private:
        int valore;
    
    public:
        Contatore(){
            valore = 0;
        }

        Contatore(const int& val){
            this->valore = val;
        }

        /* --- OVERLOADING ---*/
        void incrementa(){
            valore++;
        }

        void incrementa(int x){
            valore+=x;
        }

        void incrementa(int x, bool reset){
            if(reset)
                valore = 0;
            valore+=x;
        }

        void stampa() const{
            cout<<"Valore: "<<valore<<endl;
        }
};

int main(){

    Contatore* c = new Contatore;
    c->incrementa();
    c->stampa(); // 1
}