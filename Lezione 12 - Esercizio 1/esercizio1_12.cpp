/* 

Definisci una classe Studente con:

    string nome, int eta, float media

    Metodo void saluta()

    Metodo void info()

Nel main():

    Chiedi all’utente quanti studenti inserire (massimo 30)

    Usa un array di oggetti Studente

    Per ogni studente:

        Acquisisci i dati da input

        Salva negli oggetti

    Alla fine:

        Stampa l’elenco degli studenti con info()

        Stampa il nome dello studente con la media più alta

        Stampa quanti studenti hanno una media ≥ 28

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Studente{
    public: 

        string nome;
        int eta;
        float media;

        void studenteMigliore(vector <Studente> studenti){

            // Se l'oggetto è vuoto
            if(studenti.empty()){
                cout << "Nessuno studente presente.";
                return;
            }

            float mediaMassima = studenti[0].media; // La media inizialmente è del primo elemento
            vector<Studente> migliori = {studenti[0]};  // Crea un array di studenti migliori se ce ne sono

            for(size_t i=1; i<studenti.size(); i++){ // (size_t unsigned per count)
                // Se la media dello studente corrente è maggiore del precedente
                if(studenti[i].media > mediaMassima){
                    mediaMassima = studenti[i].media; // Aggiorna la nuova media massima
                    migliori.clear(); // Clear svuota l'array "migliori"
                    migliori.push_back(studenti[i]);
                }
                else if(studenti[i].media == mediaMassima){
                    migliori.push_back(studenti[i]);    // Altrimenti hai trovato degli studenti con la stessa media quindi mettili nell'array "Studente" 'migliori'
                }
            } 
            cout << "Studenti con la media più alta: " << mediaMassima;
            for(const auto& stud : migliori){ // per ogni elemento nel container "migliori" dichiara una variabile di riferimento chiamata "stud" che si riferisce a quell'elemento
                cout << "- " << stud.nome;
            }
        }

        void info(vector<Studente> studenti){ // stampa info studenti

            for(auto& stud : studenti){
                cout << "\nNome: " << stud.nome << " - Età: " << stud.eta << " - Media: " << stud.media;
            }
        }
};

int main(){

    int n; // 'n' studenti

    cout << "Quanti studenti vuoi inserire? Digita qui il numero: ";
    cin >> n;
    
    while(n>30){
        cout << "\nValore non valido.\n";
        cout << "Inserisci un valore minore o uguale a 30: ";
        cin >> n;
    }
    cin.ignore();
    vector<Studente> studenti(n); // usa vector (struttura dinamica come std::vector)
    
    for(int i=0; i<n; i++){  // input
        cout << "Inserisci il nome del " << i+1 << " studente: ";
        getline(cin, studenti[i].nome);
        cout << "Inserisci l'età di " << studenti[i].nome << ": ";
        cin >> studenti[i].eta;
        cin.ignore(); // pulisce il buffer
        cout << "Inserisci la sua media: ";
        cin >> studenti[i].media;
        cin.ignore();
    }

    Studente s;
    /*
    Immagina la classe Studente come una fabbrica di oggetti studente.

    La funzione studenteMigliore() è scritta dentro quella fabbrica.

    Se vuoi usare quella funzione, devi dire:

    “Hey, oggetto Studente, per favore esegui studenteMigliore() su questi dati”.
    */
    s.studenteMigliore(studenti);
    s.info(studenti);

}