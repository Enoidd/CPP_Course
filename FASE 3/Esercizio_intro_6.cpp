/*
Crea una classe ContoBancario con:

Attributi: int saldo

Costruttori:

uno di default che imposta il saldo a 0

uno con parametro saldoIniziale

Metodi:

deposita(int importo)

preleva(int importo) (solo se sufficiente)

getSaldo()

Nel main():

Crea un conto con saldo iniziale

Fai depositi e prelievi, mostra saldo dopo ogni operazione

Obiettivo: usare costruttori overload, getter, logica condizionale
*/

#include <iostream>
using namespace std;

class ContoBancario{
    private:
        int saldo;

    public: 
        // Costruttore di default - vuoto
        ContoBancario(){
            saldo = 0;
        }

        // Costruttore prametrizzato
        ContoBancario(int saldoIniziale){
            saldo = saldoIniziale;
        }

        // Metodo deposita
        void deposita(int importo){
            saldo += importo;
        }

        // Metodo preleva
        void preleva(int importo){
            saldo -= importo;
        }

        // Metodo getSaldo
        int getSaldo() const{
            return saldo;
        }

};

int main(){

    ContoBancario conto;
    int importo;

    cout<<"Inserisci il saldo: ";
    cin>>importo;
    conto.deposita(importo);

    cout<<"Saldo: "<<conto.getSaldo()<<endl;

    cout<<"Preleva: ";
    cin>>importo;
    while(importo>conto.getSaldo()){
        cout<<"Saldo insufficiente. Saldo disponibile: "<<conto.getSaldo()<<endl;
        cout<<"Inserisci un nuovo importo da prelevare: ";
        cin>>importo;
    }
    conto.preleva(importo);
    cout<<"Importo: "<<importo<<" prelevato. Saldo attuale: "<<conto.getSaldo()<<endl;
}