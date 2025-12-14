#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dispositivo{
    protected:
        string nome;
        bool acceso;
    public:
        Dispositivo() : nome("Dispositivo generico"), acceso(0){}; // Costruttore default
        Dispositivo(const string& nome) : nome(nome), acceso(0){}; // Costruttore parametrico

        virtual ~Dispositivo(){
            cout<<"Dispositivo distrutto\n";
        }

        virtual void stato() const{
            cout<<"Nome "<<nome
                <<" stato "; 
                if(acceso==0)
                    cout<<" spento Dispositivo\n";
                else
                    cout<<" acceso Dispositivo\n";
            }
};

class Computer : public Dispositivo{
    protected:
        int ram;
    public:
        Computer(): Dispositivo(), ram(8){}; // Costruttore default
        Computer(const string& nome, int ram): Dispositivo(nome), ram(ram){}; // Costruttore parametrico

        void stato() const override{
            cout<<"Nome "<<nome
                <<" stato "; 
                if(acceso==0)
                    cout<<" spento Dispositivo\n";
                else
                    cout<<" acceso Dispositivo\n";
                cout<<" ram "<<ram<<" Computer "<<endl;
        }
};

class Smartphone : public Dispositivo{
    protected:
        int batteria;
    public:
        Smartphone(): Dispositivo(), batteria(100){};   // Costruttore default
        Smartphone(const string& nome, int batteria):Dispositivo(nome), batteria(batteria){}; // Costruttore parametrico

        void stato() const override{
            cout<<"Nome "<<nome
                <<" stato "; 
                if(acceso==0)
                    cout<<" spento Dispositivo\n";
                else
                    cout<<" acceso Dispositivo\n";
                cout<<" batteria "<<batteria<<"% Smartphone"<<endl;
        }
};

int main(){

    vector<Dispositivo*> d;

    d.push_back(new Computer());
    d.push_back(new Computer("ASUS", 8));

    d.push_back(new Smartphone());
    d.push_back(new Smartphone("IPHONE", 56));

    for(Dispositivo* v : d){
        v->stato();
    }

    for(Dispositivo* v : d){
        delete v;
    }
    return 0;
}