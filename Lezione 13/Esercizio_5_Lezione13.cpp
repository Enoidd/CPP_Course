/*
Obiettivo: Applicazione reale più articolata

Richiesto:

    Crea una classe Film con:

        string titolo

        string regista

        float durata (in ore)

    Aggiungi:

        void descrizione() → stampa una frase tipo “Il film TIT titolo, diretto da REG, dura DUR ore.”

        bool èLungo() → ritorna true se durata > 2.5

    Crea 3 oggetti Film, e stampa la descrizione solo dei film lunghi
*/

#include <iostream>
#include <string>

using namespace std;

class Film{
    public:

        string titolo;
        string regista;
        float durata;

        void descrizione(){
            cout << "Il film " << titolo << ", diretto da " << regista << ", dura " << static_cast<float>(durata) << " ore";
        }

        bool èLungo(){
            return durata>2.5; // Ritorna true se è vero, false altrimenti
        }

        void inserisciDati(){
            cout << "\nTitolo: ";
            getline(cin, titolo);
            cout << "Regista: ";
            getline(cin, regista);
            cout << "Durata: ";
            cin >> durata;
            cin.ignore();
        }
};

int main(){
    Film f1, f2, f3;

    f1.inserisciDati();
    f2.inserisciDati();
    f3.inserisciDati();

    cout << "Il film più lungo:";
    if(f1.èLungo()==1 && f2.èLungo()==0 && f3.èLungo()==0){
        f1.descrizione();
    }
    else if(f1.èLungo()==0 && f2.èLungo()==1 && f3.èLungo()==0){
        f2.descrizione();
    }
    else if(f1.èLungo()==0 && f2.èLungo()==0 && f3.èLungo()==1){
        f3.descrizione();
    }
}
