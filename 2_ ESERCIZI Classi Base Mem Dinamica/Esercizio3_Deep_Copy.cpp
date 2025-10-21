/*
Partendo da Studente, aggiungi:

un costruttore di copia che effettui una deep copy dell’array dinamico dei voti;

nel main(), crea uno studente a, copialo in b, e verifica che le modifiche a a non influenzino b.
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

        // Costruttore di copia
        Studente(const Studente& other){
            
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