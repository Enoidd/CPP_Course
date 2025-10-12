/*
Esercizio 4 – Calcolo area protetto

Crea una classe Rettangolo:

    Attributi lunghezza e larghezza (privati)

    Set con controllo (valori positivi)

    Metodo calcolaArea() e stampaArea()

Nel main, crea 2 rettangoli e confronta le aree.
*/

#include <iostream>
#include <string>

using namespace std;

class Rettangolo{
    private:
        float lung=0;
        float larg=0;

    public:
        bool setValori(float nuovaLung, float nuovaLarg){
            if(nuovaLung>0 &&nuovaLarg>0){
                lung = nuovaLung;
                larg = nuovaLarg;
                return true;
            }
            else{
                return false;
            }
        }

        float calcolaArea(){
            return lung * larg / 2;
        }

        void stampaArea(){
            cout << "\nArea: " << calcolaArea() << "\n";
        }
};

int main(){
    Rettangolo r1, r2;
    float lung, larg;

    cout << "\nInserisci la lunghezza del 1° rettangolo: ";
    cin >> lung;
    cout << "\nInserisci la larghezza del 1° rettangolo: ";
    cin >> larg;


    while(r1.setValori(lung, larg)==false){
        cout << "\nValori inseriti non validi.\n";
        cout << "Inserisci nuovamente la lunghezza del 1° rettangolo: ";
        cin >> lung;
        cout << "Inserisci nuovamente la larghezza del 1° rettangolo: ";
        cin >> larg;
    }

    r1.stampaArea();
    float lunr2, largr2;

    cout << "\nInserisci la lunghezza del 2° rettangolo: ";
    cin >> lunr2;
    cout << "\nInserisci la larghezza del 2° rettangolo: ";
    cin >> largr2;


    while(r2.setValori(lunr2, largr2)==false){
        cout << "\nValori inseriti non validi.\n";
        cout << "Inserisci nuovamente la lunghezza del 2° rettangolo: ";
        cin >> lunr2;
        cout << "Inserisci nuovamente la larghezza del 2° rettangolo: ";
        cin >> largr2;
    }

    r2.stampaArea();
    
    return 0;
}