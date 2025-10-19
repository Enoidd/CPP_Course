/* 
Classe Studente con:

nome, voti[5]

Metodo media()

Metodo aggiungiVoto(int voto, int posizione)

Stampa media e dati
*/

#include <iostream>
using namespace std;

class Studente{
    private:
        string nome;
        int voti[5];

    public:
        // Costruttore di default - vuoto
        Studente(){
            nome = "Sconosciuto";
            for(int i=0; i<5; i++)
                voti[i] = 0;
        }

        // Metodo setNome
        void setNome(string nome){
            this->nome = nome;
        }

        // Metodo getNome
        string getNome() const{
            return nome;
        }

        // Metodo aggiungi voto
        void aggiungiVoto(int voto, int posizione){
            if(posizione>=0 && posizione<5)
                voti[posizione] = voto;
            else 
                cout<<"Posizione non valida"<<endl;
        }

        // Metodo stampa
        void stampa(){
            cout<<"Nome: "<<nome<<endl;
            for(int i=0; i<5; i++){
                cout<<"Voto: "<<voti[i]<<endl;
            }
        }

        // Metodo media
        void media() const{
            float media=0;
            for(int i=0; i<5; i++){
                media += voti[i];
            }
            media = media/5;
            cout<<"Media: "<<media<<endl;
        }
};

int main(){

    Studente s; // richiama il costruttore di default

    string nome;
    cout<<"Nome: ";
    getline(cin, nome);
    s.setNome(nome);
    int i=0;
    int voto=0;
    while(i<5){
        cout<<"Voto "<<i+1<<": ";
        cin>>voto;
        s.aggiungiVoto(voto, i);
        i++;
    }
    s.stampa();
    s.media();
}