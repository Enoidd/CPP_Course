/*
Esercizio 2 – Banca

Crea una classe ContoBancario:

    Attributi privati: int saldo

    Metodo pubblico deposita(int), preleva(int) (non prelevare oltre il saldo)

    Metodo mostraSaldo()

Nel main():

    Simula un piccolo menu: deposita, preleva, mostra
*/

#include <iostream>
#include <string>

using namespace std;

class ContoBancario{
    private:
        int saldo=0;

    public:
        void deposita(int soldi){
            saldo += soldi;
        }

        void preleva(int soldiPrelievo){
            saldo -= soldiPrelievo;
        }

        int mostraSaldo(){
            return saldo;
        }
};

int main(){

    ContoBancario c1;
    int scelta;
    
    int input;

    do {
        cout << "\nInserisci 1 per depositare - 2 per prelevare - 3 per mostrare il saldo corrente - 0 per uscire: ";
        cin >> scelta;

        switch (scelta) {
            case 1:
                cout << "Inserisci l'importo da depositare: ";
                cin >> input;
                c1.deposita(input);
                break;
            case 2:
                cout << "Inserisci l'importo da prelevare: ";
                cin >> input;
                if(input>=c1.mostraSaldo()){
                    cout << "\nIMPORTO INSUFFICIENTE\n";
                }
                else{
                    c1.preleva(input);
                    //break;
                }
                break;
            case 3:
                cout << "SALDO DISPONIBILE: " << c1.mostraSaldo() << "\n";
                break;
            case 0:
                cout << "\nPROGRAMMA TERMINATO\n";
                break;
            default:
                cout << "\nHai inserito un valore non valido.\n";
                break;
        }
    } while (scelta != 0);

    return 0;
}