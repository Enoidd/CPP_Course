/*

DISTRUTTORE -> Metodo speciale di una classe che viene chiamato automaticamente quando un oggetto:
    - Esce dalo scope cioè esce dalle {}
    - Viene distrutto da delete
    - Termina il programma

    - Libera risorse/memoria

*/

#include <iostream>
using namespace std;

class Prova{
    public:
        // Costruttore 
        Prova(){
            cout<<"Costruttore Prova";
        }

        // Distruttore
        Prova(){
            
        }
};



int main(){

}