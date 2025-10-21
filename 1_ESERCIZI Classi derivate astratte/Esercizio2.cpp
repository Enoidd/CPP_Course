/*
Crea una classe astratta Dispositivo con metodo puro void usa().

Deriva due classi:

Stampante (con puntatore dinamico a modello)

Scanner (con puntatore dinamico a risoluzione)

Nel main, crea puntatori Dispositivo* e usa usa() su oggetti dinamici.
*/

#include <iostream>
#include <string>
using namespace std;

class Dispositivo{ // Astratta
    public:
        virtual void usa() const = 0; // funzione virtuale pura
        virtual ~Dispositivo() = default; // distruttore virtuale
};

class Stampante : public Dispositivo{ // Derivata
    private:
        string* modello;
    public:
        // Costruttore parametrico
        Stampante(const string& model){
            modello = new string(model);
        }

        // Distruttore
        ~Stampante(){
            cout<<"Elimino il modello: "<<*modello<<endl;
            delete modello;
        }

        // Metodo usa
        void usa() const override{
            cout<<"Modello usato: "<<*modello<<endl;
        }
};

class Scanner : public Dispositivo{ // Derivata
    private:
        string* risoluzione;
    public:
        // Costruttore parametrico
        Scanner(const string& resolution){
            risoluzione = new string(resolution);
        }  

        // Distruttore
        ~Scanner(){
            cout<<"Elimino la risoluzione: "<<*risoluzione<<endl;
        }

        // Metodo usa
        void usa() const override{
            cout<<"Risoluzione: "<<*risoluzione<<endl;
        }
};

int main(){

    Dispositivo* d1 = new Stampante("Xerox C7120");
    Dispositivo* d2 = new Scanner("XXXX");

    d1->usa();
    d2->usa();

    delete d1;
    delete d2;
}