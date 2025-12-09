/*
Crea una classe astratta Notifica con metodo puro invia().

Derivare due classi:

EmailNotifica: stampa "Email inviata!"

SMSNotifica: stampa "SMS inviato!"

Nel main():

Usa Notifica* per puntare a un oggetto EmailNotifica e a un oggetto SMSNotifica

Chiama invia() su entrambi

Obiettivo: Comprendere come il metodo virtuale puro obbliga a implementare invia() nelle classi figlie.
*/

#include <iostream>
using namespace std;

class Notifica{
    public:
        virtual void invia() const = 0; // Metodo virtuale puro
};

class EmailNotifica : public Notifica{
    public: 
        void invia() const{
            cout<<"Email inviata\n";
        }
};

class SMSNotifica : public Notifica{
    public:
        void invia() const{
            cout<<"SMS inviato\n";
        }
};

int main(){

    EmailNotifica en;
    SMSNotifica sn;
    Notifica* ptrEmailNotifica = &en;
    Notifica* ptrSMSNotifica = &sn;

    ptrEmailNotifica->invia();  // STAMPA "Email inviata"
    ptrSMSNotifica->invia();    // STAMPA "SMS inviato"
}