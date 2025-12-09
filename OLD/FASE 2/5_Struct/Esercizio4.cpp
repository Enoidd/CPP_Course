/*
Crea struct Data { int giorno, mese, anno; }

Crea struct Evento { string nome; Data data; }

Fai inserire 3 eventi all’utente.

Stampa il più vicino temporalmente (assumi stesso anno, confronta mese e giorno).
*/


#include <iostream>
#include <string>

using namespace std;

typedef struct{
    int giorno, mese, anno;
} Data;

typedef struct{
    string nome;
    Data data; // struct annidata
} Evento;

void stampaPiuVicino(Evento (&ref)[3]){

    Data oggi={18,10,2025};
    int indicePiuVicino=0;
    int diffGiorno=0;
    int diffMese=0;
    for(int i=1; i<3; i++){
        // Se stesso anno
        if(ref[i].data.anno==oggi.anno){
            //Il mese corrente è maggiore del mese attuale
            if(ref[i].data.mese>oggi.mese)
                // al mese corrente tolgo il mese attuale
                diffMese = ref[i].data.mese - oggi.mese;
            // altrimenti, se il mese corrente è inferiore del mese attuale
            else if(ref[i].data.mese<oggi.mese)
                //al mese attuale tolgo il mese corrente
                diffMese = oggi.mese - ref[i].data.mese;

            // CHECK SUI GIORNI

            // il giorno corrente è maggiore del giorno attuale
            if(ref[i].data.giorno>oggi.giorno){
                // al giorno corrente tolgo il giorno attuale
                diffGiorno = ref[i].data.giorno - oggi.giorno;
                indicePiuVicino = i;
            }else if(ref[i].data.giorno - oggi.giorno){
                // al giorno attuale tolgo il giorno corrente
                diffGiorno = oggi.giorno - ref[i].data.giorno;
                indicePiuVicino = i;
            }
        }
    }

    cout<<"L'evento piu' vicino e': "<<endl;
    cout<<""<<ref[indicePiuVicino].nome<<" data: "<<ref[indicePiuVicino].data.giorno<<"/"<<ref[indicePiuVicino].data.mese<<"/"<<ref[indicePiuVicino].data.anno;
}

int main(){

    Evento evento[3]; // 3 eventi

    for(int i=0; i<3; i++){
        cout<<"Inserisci il " << i+1 << " evento:"<<endl;
        cout<<"Nome evento: ";
        getline(cin, evento[i].nome);
        cout<<"Giorno: ";
        cin >> evento[i].data.giorno;
        cout<<"Mese:";
        cin >> evento[i].data.mese;
        cout<<"Anno:";
        cin>> evento[i].data.anno;
        cin.ignore();
    }

    stampaPiuVicino(evento);
}