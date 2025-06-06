/*

STRUCT

Una struct è una struttura ossia un contenitore personalizzato di dati
eterogenei (con tipi diversi) che rappresenta un entità logica.

SINTASSI base:

struct Studente {
	string nome;
	int eta;
	float media;
};

nel main può essere usata così:

Studente s1;
s1.nome = "Marco";
s1.eta = "eta";
s1.media = 23.2;

DIFFERENZE TRA STRUCT E CLASSI

DIFFERENZA				STRUCT			CLASS
Visibilità default		public			private
Uso tipico 				Dati aggregati	OOP Completa
SUpporta metodi			Si 				Si

LA STRUCT È UNA CLASSE CON TUTTI PUBLIC DI DEFAULT	

ESEMPIO:

#include <iostream>
using namespace std;

struct Studente {
	string nome;
	int eta;
	float media;

	void stampa() {
	cout << "Nome: " << nome << ", Età: " << eta << ", Media: " << media << endl;
	}
}

*/

// ESERCIZIO 11

//     Definisce una struct Studente con:

//         nome (string)

//         eta (int)

//         voti[3] (array di int)

//     Nel main():

//         Chiedi all’utente di inserire i dati di 2 studenti

//         Calcola la media voti per ciascuno

//         Stampa nome, età, voti e media

//     Implementa una funzione void stampaStudente(const Studente& s)

//         Stampa tutti i dati dello studente


#include <iostream>
#include <string>
using namespace std;

struct Studente{
	string nome;
	int eta;
	int voti[3];
};

float mediaVoti(const Studente& s){
		
	float media=0.0;
	for(int i=0; i<3; i++){
		media += s.voti[i];
	}
	media = media/3;
	return media;
}

void stampaStudente(const Studente& s){

	cout << "DATI DEGLI STUDENTI\n\n";
	cout << "Nome: " << s.nome << endl;
	cout << "Eta: " << s.eta << endl;
	cout << "\nVOTAZIONE\n";
	for(int i=0; i<3; i++){
		cout << "" << i << "° voto:	" << s.voti[i] << endl;
	}
	cout << "\nMEDIA VOTI CALCOLATA\n";
	float media = mediaVoti(s);
	cout << "Studente: " << s.nome << " - Media voti: " << media << endl; 
}

int main(){

	Studente studente1;
	Studente studente2;

	cout << "Inserisci il nome dello studente: ";
	getline(cin, studente1.nome);
	cout << "Inserisci l'età dello studente " << studente1.nome << ": ";
	cin.ignore();
	cin >> studente1.eta;
	cout << "Inserisci i voti dello studente" << endl;
	for(int i=0; i<3; i++){
		cout << "" << i << "° voto: ";
		cin >> studente1.voti[i];
	}

	cout << "Inserisci il nome dello studente: ";
	getline(cin, studente2.nome);
	cout << "Inserisci l'età dello studente " << studente2.nome << ": ";
	cin.ignore();
	cin >> studente2.eta;
	cout << "Inserisci i voti dello studente" << endl;
	for(int i=0; i<3; i++){
		cout << "" << i << "° voto: ";
		cin >> studente2.voti[i];
	}

	stampaStudente(studente1);
	stampaStudente(studente2);
}
