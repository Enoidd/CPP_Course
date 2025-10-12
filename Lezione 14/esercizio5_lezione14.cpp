/*
Classe Utente con password privata

    Attributi privati: username, password

    Metodi:

        login(string user, string pass) → ritorna true solo se le credenziali coincidono

        setPassword(string) → cambia solo se la password è lunga almeno 6 caratteri
*/

#include <iostream>
#include <string>

using namespace std;

class Utente{
    private:
        string username="admin";
        string password="admin01";

    public:
        bool login(string user, string pass){
            if(user==username && pass==password){
                return true;
            }
            else{
                return false;
            }
        }

        bool setPassword(string nuovaPassword){
            if(nuovaPassword.size()>=6){
                password = nuovaPassword;
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    Utente u1;
    string user, pass;
    int count=0;

    cout << "\n=====LOGIN=====\n";
    cout << "Username: ";
    getline(cin, user);
    cout << "Password: ";
    getline(cin, pass);

    while(u1.login(user, pass)==false && count!=1){
        cout << "\nPassword inserita non valida. Inserisci nuovamente le tue credenziali.\n";
        cout << "Username: ";
        getline(cin, user);
        cout << "Password: ";
        getline(cin, pass);
        count++;
    }

    bool tmp = u1.setPassword(pass); // la nuova password è >=6?
    if(count==1){ // hai inserito la password errata per 1 volta
        cout << "Password inserita non valida, imposta una nuova password: ";
        //cin.ignore();
        while(tmp==false){
            getline(cin, pass);
            tmp = u1.setPassword(pass);
            if(tmp==true){
                cout << "Password cambiata con successo.\n";
                cout << "\nInserisci nuovamente le credenziali.\n";
                cout << "Username: ";
                getline(cin, user);
                cout << "\nPassword: ";
                getline(cin, pass);
                tmp = u1.login(user, pass);

                while(tmp==false && count!=1){
                    cout << "\nPassword inserita non valida. Inserisci nuovamente le tue credenziali.\n";
                    cout << "Username: ";
                    getline(cin, user);
                    cout << "Password: ";
                    getline(cin, pass);
                    count++;
                }
                cout << "\nLOGIN effettuato con successo.\n";
            }
            else{
                cout << "Password non valida. Inserisci una password di almeno 6 caratteri.\n";
            }
        }
    }
    else{ // Hai inserito la password corretta
        cout << "\nLOGIN effettuato con successo.\n";
    }
}