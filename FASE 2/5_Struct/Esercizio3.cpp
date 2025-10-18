/*
Definisci struct Film { string titolo; int anno; float voto; }

Inserisci 5 film da tastiera.

Calcola e stampa la media dei voti.

Trova e stampa il titolo del film con il voto più alto.
*/

#include <iostream>
#include <string>
using namespace std;

typedef struct{
    string titolo; 
    int anno;
    float voto;
} Film;

void votoPiuAlto(Film (&ref)[2]){
    int indice = 0;
    for(int i=1; i<2; i++){
        if(ref[i].voto > ref[indice].voto)
            indice = i;
    }
    cout << "FILM con voto piu' alto: "<<endl;

    cout << "Titolo: " << ref[indice].titolo << endl;
    cout << "Anno: " << ref[indice].anno << endl;
    cout << "Voto: " << ref[indice].anno << endl;
}

void mediaVoti(Film (&ref)[2], int& media){

    for(int i=0; i<2; i++){
        media += ref[i].voto;
    }
    media = media/2;
}

int main(){

    Film array[2]; // 5 Film da inserire

    for(int i=0; i<2; i++){
        cout << "" << i+1 << " FILM:" <<endl;
        cout << "Titolo: ";
        getline(cin, array[i].titolo);
        cout << "Anno: ";
        cin >> array[i].anno;
        cout << "Voto: ";
        cin >> array[i].voto;
        cin.ignore();
    }
    cout << endl << "FINE INSERIMENTO." << endl;

    cout << "CALCOLO DEL FILM CON VOTO PIU' ALTO" << endl;

    votoPiuAlto(array);

    int media=0;
    mediaVoti(array, media);
    cout << "Media dei voti: " << media;
}