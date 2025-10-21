/*
Crea una classe Persona che contenga:

un puntatore a char per il nome;

un costruttore che allochi dinamicamente la memoria e copi il nome passato;

un distruttore che liberi la memoria;

un metodo stampa() che mostri il nome.
*/

#include <iostream>
#include <cstring>
using namespace std;

class Persona{
    private:
        char* nome; // puntatore a carattere per gestire una stringa dinamica
    public:
        // Costruttore parametrico
        Persona(const char* nome){
            // alloca dinamicamente la memoria per il nome (+1 per il \0)
            this->nome = new char[strlen(nome)+1];
            // copia la stringa passata al nuovo spazio di memoria
            strcpy(this->nome, nome);
        }

        // Distruttore
        ~Persona(){
            cout<<"Elimino: "<<nome<<endl;
            delete[] nome; 
        }

        // Metodo stampa
        void stampa(){
            cout<<"Nome: "<<nome<<endl;
        }
};

int main(){

    Persona* p = new Persona("Gianni");

    p->stampa();

    delete p;

    return 0;
}