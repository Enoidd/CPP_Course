/*
 Esercizio 3 – Studente evoluto

Partendo dalla classe Studente (nome, età, media):

    Rendi tutti gli attributi privati

    Usa getter/setter con:

        età > 0

        media tra 0.0 e 30.0

    Aggiungi un metodo info() che stampa i dati
*/

#include <iostream>
#include <string>

using namespace std;

class Studente{
    private:
        string nome;
        int eta;
        float media=0;

    public:
        void setNome(string nuovoNome){
            nome = nuovoNome;
        }

        string getNome(){
            return nome;
        }

        bool setEta(int nuovaEta){
            if(nuovaEta>0){
                eta = nuovaEta;
                return true;
            }
            else{
                return false;
            }
        }

        int getEta(){
            return eta;
        }

        bool setMedia(float nuovaMedia){
            if(nuovaMedia>0.0 && nuovaMedia<30.0){
                media = nuovaMedia;
                return true;
            }
            else{
                return false;
            }
        }

        void info(){
            cout << "\nNome: " << nome << " - Età: " << eta << " - Media: " << media << "\n";
        }
};

int main(){

    Studente s1;
    string input;
    int integer;
    float integ;
    bool mediaInserita;

    cout << "Nome: ";
    cin >> input;
    s1.setNome(input);

    cout << "Eta: ";
    cin >> integer;
    if(s1.setEta(integer)){
        cout << "\nEtà inserita correttamente.\n";
    }
    else{
        cout << "\nValore: " << integer << " non valido.\n";
    }

    cout << "Media: ";
    cin >> integ;
    if(s1.setMedia(integ)){
        cout << "\nMedia inserita correttamente.\n";
    }
    else{
        cout << "\nValore: " << integ << " non valido.\n";
    }

    s1.info();



}