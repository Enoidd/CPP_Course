/*
Crea una classe Persona con:

    Attributi privati: nome, cognome, età

    Metodi pubblici set e get

    Il setter per età non permette valori negativi

Nel main():

    Crea un oggetto e prova a inserire un’età negativa → NON DEVE funzionare
*/

#include <iostream>
#include <string>

using namespace std;

class Persona{
    private:
        string nome, cognome;
        int eta;

    public: // accessibili dal main
        
        void setNome(string nuovoNome){
            nome = nuovoNome;
        }

        string getNome(){
            return nome;
        }

        void setCognome(string  nuovoCognome){
            cognome = nuovoCognome;
        }

        string getCognome(){
            return cognome;
        }
        
        void setEta(int nuovaEta){
            if(nuovaEta>0){
                eta = nuovaEta;
            }
            else{
                cout << "Valore non valido.\n";
            }
        }

        int getEta(){
            return eta;
        }

};

int main(){

    Persona p1;
    string input;
    int inputEta;

    cout << "Nome: ";
    getline(cin, input);
    p1.setNome(input);

    cout << "Cognome: ";
    getline(cin, input);
    p1.setCognome(input);

    cout << "Eta: ";
    cin >> inputEta;
    p1.setEta(inputEta);
    cin.ignore();

    cout << "\nOUTPUT\n";
    cout << "Nome: " << p1.getNome() << " - Cognome: " << p1.getCognome() << " - Eta: " << p1.getEta() << "\n";

    //return 0;
}