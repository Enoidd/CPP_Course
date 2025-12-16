/*

Creare una classe base Device con:
    void status() const;
che stampa:
    "Device status"

Creare una classe derivata Printer che:
    - Eredita da Device
    - Singleton Meyer
    - ridefinisce status() stampando:
        "Printer status"

*/

#include <iostream>
using namespace std;

class Device{
    public:
        virtual void status() const{
            cout<<"Device status\n";
        }
};

class Printer : public Device{
    private:
        Printer(){}; // Costruttore private
    public:
        Printer(const Printer&)=delete; // copia
        Printer& operator=(const Printer&)=delete; // assegnazione

        static Printer& getIstance(){
            static Printer instance;
            return instance;
        }

        void status() const override{
            cout<<"Printer status\n";
        }
};

int main(){

    Printer& p1 = Printer::getIstance();
    Printer& p2 = Printer::getIstance();

    p1.status();
    p2.status();

    Device d1;
    Device d2;

    d1.status();
    d2.status();
}