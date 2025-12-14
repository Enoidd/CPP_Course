#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account{
    protected:
        string username;
        int livello;
    public:
        Account() : username("anonimo"), livello(0){}; // Costruttore default
        Account(const string& username, int livello): username(username), livello(livello){}; // Costruttore parametrico

        virtual ~Account(){
            cout<<"Account distrutto\n";
        }

        virtual void stampa() const{
            cout << "Username: " << username
                << " livello " << livello 
                << " Account\n";
        }
};

class Admin : public Account{
    protected:
        string ruolo;
    public:
        Admin() : ruolo("SuperAdmin"){}; // Costruttore default
        Admin(const string& username, int livello, const string& ruolo) : Account(username, livello), ruolo(ruolo){}; // Costruttore parametrico

        void stampa() const override{
            cout << "Username "<< username
                << " livello " << livello
                << " ruolo " << ruolo
                << " Admin\n";
        }
};

class Cliente : public Account{
    protected:
        int puntiFedelta;
    public:
        Cliente(): puntiFedelta(0){}; // Costruttore default
        Cliente(const string& username, int livello, int puntiFedelta): Account(username, livello), puntiFedelta(puntiFedelta){}; // Costruttore parametrico
        
        void stampa() const override{
            cout << "Username "<< username
                << " livello " << livello
                << " punti fedelta " << puntiFedelta
                << " Cliente\n";
        }
};

int main(){

    vector<Account*> v;

    v.push_back(new Admin());
    v.push_back(new Admin("admin123", 2, "User"));

    v.push_back(new Cliente());
    v.push_back(new Cliente("cliente123", 3, 40)); 

    for(Account* d : v){
        d->stampa();
    }

    for(Account* d : v){
        delete d;
    }
    return 0;
}