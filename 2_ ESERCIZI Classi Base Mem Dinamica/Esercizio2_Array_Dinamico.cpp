/*
Crea una classe Studente con:

un puntatore int* voti;

un intero numeroVoti;

un costruttore che allochi dinamicamente l’array dei voti;

un metodo media() che calcoli la media;

un distruttore che liberi la memoria.
*/

#include <iostream>
using namespace std;

class Studente{
    private:
        int numeroVoti; // Dimensione dell'array dinamico
        int* voti; // Array dinamico
    public:
        // Costruttore
        Studente(const int* votiInput, int numeroVoti){
            this->numeroVoti = numeroVoti;
            voti = new int[numeroVoti];

            // Copia dei voti
            for(int i=0; i<numeroVoti; i++){
                voti[i] = votiInput[i];
            }
        }

        // Distruttore
        ~Studente(){
            cout<<"Elimino array dinamico.\n";
            delete[] voti;
        }

        // Metodo media
        void media(){
            int somma=0;
            for(int i=0; i<numeroVoti; i++){
                somma += voti[i];
            }
            double media = static_cast<double>(somma)/numeroVoti;
            cout<<"Media: "<<media<<endl;
        }
};

int main(){
    
    int voti[] = {1,2,3,4,5};
    Studente* s = new Studente(voti, 5);

    s->media();

    delete s;
    return 0;
}