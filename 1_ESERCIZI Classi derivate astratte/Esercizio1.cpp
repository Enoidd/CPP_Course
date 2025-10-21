/*
Classe astratta Notifica:

Metodo puro void invia() const = 0

Distruttore virtuale

Classi derivate:

EmailNotifica: stampa "Email inviata a: <destinatario>"

SMSNotifica: stampa "SMS inviato al numero: <numero>"

Entrambe devono allocare dinamicamente il contenuto da notificare (es. destinatario / numero) con new string(...) e liberarlo nel distruttore

Nel main():

Usa un array di puntatori a Notifica (es. Notifica* notifiche[2];)

Crea dinamicamente i due oggetti EmailNotifica e SMSNotifica

Inseriscili nell’array

Chiama invia() su ciascuno tramite ciclo

Alla fine, dealloca la memoria correttamente (usando delete su ogni elemento
*/

#include <iostream>
#include <string>
using namespace std;

class Notifica{
    public:
        virtual void invia() const = 0; // funzione virtuale pura
        virtual ~Notifica() = default; // Distruttore virtuale
};

class EmailNotifica : public Notifica{ // Derivata
    private:
        string* destinatario; // puntatore allocato dinamicamente
    public:
        // Costruttore
        EmailNotifica(const string& dest){
            destinatario = new string(dest);
        }

        // Distruttore
        ~EmailNotifica(){
            cout<<"Elimino la notifica per:"<<*destinatario<<endl;
            delete destinatario; // libera mem
        }
        void invia() const override{
            cout<<"Email inviata a: "<<*destinatario<<endl;
        }
};

class SMSNotifica : public Notifica{ // Derivata
    private:
        string* numero; // puntatore allocato dinamicamente
    public:
        // Costruttore
        SMSNotifica(const string& num){
            numero = new string(num);
        }

        // Distruttore
        ~SMSNotifica(){
            cout<<"Elimino la notifica per: "<<*numero<<endl;
            delete numero;
        }
        void invia() const override{
            cout<<"SMS inviato al numero: "<<*numero<<endl;
        }
};

int main(){
    
    Notifica* n1 = new EmailNotifica("mario.rossi@gmail.com");

    n1->invia();

    Notifica* n2 = new SMSNotifica("3345724006");

    n2->invia();

    delete n1;
    delete n2;
}
