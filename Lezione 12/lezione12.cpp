/*

CLASSI E OGGETTI IN C++ 

Una classe è un modello per creare oggetti che contengono:

1. dati (chiamati attributi o membri dati)
2. funzioni (chiamate metodi o membri funzione)

Un oggetto è un'istanza concreta di una classe.

SINTASSI base:

class Studente{
	public:

		string nome;
		int eta;

		void saluta(){ // Metodo
			cout << "Ciao, sono " << nome << "!" << endl;
		}
};

VISIBILITÀ: 

1. public - accessibile dall'esterno
2. private - accessibile solo all'interno della classe (valore predefinito)

CREAZIONE OGGETTI:

Studente s1;
s1.nome = "Marco";
s1.eta = 21;
s1.saluta();

DIFFERENZA RISPETTO ALLE STRUCT

ELEMENTO					STRUCT			CLASS
Visibilità di default		public			private
Uso tipico 					Dati aggregati	OOP
Incapsulamento				OPZIONALE		Standard

*/

// ESERCIZIO 12

// Definisca una classe Studente con:

//     Attributi string nome, int eta, float media

//     Metodo void saluta() → stampa "Ciao, sono [nome] e ho [età] anni."

//     Metodo void info() → stampa nome, età e media

// Nel main():

//     Crea due oggetti della classe Studente

//     Imposta i dati direttamente

//     Chiama saluta() e info() per entrambi


#include <iostream>
#include <string>


using namespace std;

class Studente{
	public:

		string nome;
		int eta;
		float media;

		void saluta(){ // Metodo saluta
			cout << "\nSALUTA";
			cout << "\nCiao, sono " << nome << " e ho " << eta << " anni.\n";
		}

		void info(){
			cout << "\n\n INFO \n";
			cout << "Nome: " << nome << endl;
			cout << "Età: " << eta << endl;
			cout << "Media: " << media << endl;
		}

};

int main(){

	// Creazione dei due oggetti di classe studente
	Studente studente1, studente2;

	cout << "\nDati del primo studente\n";
	cout << "Nome: ";
	getline(cin, studente1.nome);
	cout << "Età: ";
	cin >> studente1.eta;
	cout << "Media: ";
	cin >> studente1.media;
	cin.ignore(); // pulisci il buffer


	cout << "\nDati del secondo studente\n";
	cout << "Nome: ";
	getline(cin, studente2.nome);
	cout << "Età: ";
	cin >> studente2.eta;
	cout << "Media: ";
	cin >> studente2.media;
	

	studente1.info();
	studente2.info();

	studente1.saluta();
	studente2.saluta();
}