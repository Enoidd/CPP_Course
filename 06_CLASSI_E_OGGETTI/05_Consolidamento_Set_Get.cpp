/*
Modifica i setter di Studente in modo che:

setMedia(float m) accetti solo valori tra 0 e 10

Se il valore non è valido, stampa un messaggio di errore

Obiettivo: capire l’utilità dei setter rispetto all’accesso diretto.
*/

#include <iostream>
#include <string>
using namespace std;

class Studente{
    private:
        string nome;
        float media;

    public:

    /*
    L'overload dei costruttore permette di definire un oggetto con più parametri. Non prevede i set.
    */

        // Costruttore di default - vuoto
        Studente(){
            nome = "nessuno";
            media = 0.0;
        }

        // Costruttore parametrico
        Studente(string nome, float media){
            this->nome=nome;
            this->media=media;
        }

        void setNome(string nome){
            this->nome=nome;
        }

        string getNome(){
            return nome;
        }

        void setMedia(float media){
            if(media>0 && media<10)
                this->media=media;
            cout<<"Errore. Valore inserito non valido.\n";
        }

        void stampa(){
            cout<<"Nome: "<<nome<<" Media: "<<media<<endl;
        }
};

int main(){

    Studente s = {"Mario", 28.9};

    Studente ss;
    float media;
    string nome;
    cout<<"Nome: ";
    getline(cin, nome);
    ss.setNome(nome);
    cout<<"Media: ";
    cin>>media;
    ss.setMedia(media);

    s.stampa();
}