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

        // Costruttore parametrico
        ContoBancario(int saldoIniziale){
            saldo = saldoIniziale;
        }

        void deposita(int importo){
            saldo += importo;
            cout<<"Saldo: "<<getSaldo()<<endl;
        }

        void preleva(int importo){
            if(importo<saldo)
                saldo -= importo;
                cout<<"Saldo: "<<getSaldo()<<endl;
            cout<<"Valore non valido"<<endl;
        }

        int getSaldo(){
            return saldo;
        }
};

int main(){

    ContoBancario conto = {20000};

    conto.deposita(20); // atteso: 20020

    conto.preleva(1020); // atteso: 19000
}