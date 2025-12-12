/* 
Classe Studente con:

nome, voti[5]

Metodo media()

Metodo aggiungiVoto(int voto, int posizione)

Stampa media e dati
*/

#include <iostream>
#include <string>
using namespace std;

class Studente{
    private:
        string nome;
        int voti[5];
    public:
        // Costruttore di default - vuoto
        Studente(){
            nome = "Sconosciuto";
            voti[5] = {}; // 0 0 0 0 0 
        }

        void setNome(string nome){
            this->nome=nome;
        }

        string getNome(){
            return nome;
        }

        float media(){
            int somma = 0;
            for(int i=0; i<5; i++){
                somma+=voti[i];
            }
            return somma/5;
        }

        void aggiungiVoto(int voto, int posizione){
            voti[posizione] = voto;        
        }

        void stampa(){
            for(int i=0; i<5; i++){
                cout<<""<<voti[i]<<" ";
            }
            cout<<"Media: "<<media()<<endl;
        }
};

int main(){

    Studente s;
    string nome = "Carlo";
    s.setNome(nome);

    s.aggiungiVoto(20, 0);
    s.aggiungiVoto(24, 1);
    s.aggiungiVoto(22, 2);
    s.aggiungiVoto(26, 3);
    s.aggiungiVoto(28, 4);
    
    s.stampa();
}