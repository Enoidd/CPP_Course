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
        // Costruttore di default - vuoto
        Studente(){
            nome = "Sconosciuto";
            media = 0;
        }
        // Costruttore parametrizzato
        Studente(string nome, float media){
            this->nome = nome;
            this->media = media;
        }

        // Metodo setNome
        void setNome(string nome){
            this->nome = nome;
        }

        // Metodo getNome
        string getNome() const{
            return nome;
        }

        // Metodo setMedia
        void setMedia(float media){
            // Accetta valori compresi tra 0 e 10
            if(media>=0 && media<=10)
                this->media = media;
            else
                cout<<"Errore. Valore non valido."<<endl;
                
        }

        // Metodo getMedia
        float getMedia() const{
            return media;
        }

        void stampa() const{
            cout<<"Nome: "<<nome<<" Media: "<<media<<endl;
        }
};


int main(){

    Studente s;
    string nome;
    float media;

    cout<<"Nome studente: ";
    getline(cin, nome);
    
    cout<<"Media studente: ";
    cin>>media;

    s.setNome(nome);
    s.setMedia(media);

    s.stampa();
}