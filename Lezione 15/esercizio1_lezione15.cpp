/*
Crea una classe `Messaggio` che:
- Ha un costruttore senza parametri
- Quando viene creato un oggetto, stampa "Oggetto creato!"
*/

#include <iostream>
#include <string>

using namespace std;

class Messaggio{
    public: 
        Messaggio(){ // Costruttore senza parametri
            cout << "Oggetto 'Messaggio' creato.\n";
        }
};

int main(){

    Messaggio m1; 

    // OUTPUT - Stampa il messaggio mostrato nel costruttore di 'default'. 
}