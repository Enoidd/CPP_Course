/*

REFERENZE 

Una referenza è un 'alias' (cioè un altro nome) per indicare una variabile già
esistente. Una referenza una volta legata ad una variabile non può essere più cambiata.

ESEMPIO SINTASSI

int a = 10;
int& ref = a; // 'ref' è una referenza ad 'a'

Ora 'ref' ed 'a' sono la stessa cosa, se modifichi uno, si modifica l'altro.

ref = 20;
cout << a; // stampa 20

USO TIPICO : PARAMETRI DI FUNZIONE

- SENZA REFERENZA 

void raddoppia(int x){
	x = x*2; // non modifica l'ordinale.
}

- CON REFERENZA 

void raddoppia(int& x){
	x = x*2; // modifica l'originale.
}

DIFFERENZE TRA REFERENZE E PUNTATORI

				REFERENZA 			PUNTATOREE
Sintassi		int& ref = x;		int* puntatore = &x;
Nullabilità		No(mai null)		Si (nullptr)	
Cambiabile		No 					Si (puntatore = altro)
Deferenziazione Non serve *			Si serve *
Uso principale	Parametri funzione 	Accesso dinamico

*/

// ESERCIZIO 10

// Scrivi un programma che:

//     Dichiari una variabile intera x

//     Dichiari una referenza a x

//     Passi x a una funzione triplica(int& ref) che triplica il suo valore

//     Stampa:

//         Il valore prima della chiamata

//         Il valore dopo la chiamata

//     Aggiungi anche una funzione void stampaIndirizzi(int& ref, int* ptr) che stampi:

//         L’indirizzo della referenza (usando &ref)

//         L’indirizzo del puntatore (ptr)

#include <iostream>

using namespace std;

void triplica(int& ref){
	ref = ref*3;
}

void stampaIndirizzi(int& ref, int* ptr){
	cout << endl << "STAMPA INDIRIZZI" << endl;
	cout << "Indirizzo referenza: " << &ref << endl; // Indirizzo di variabile
	cout << "Indirizzo puntatore: " << ptr << endl; // Indirizzo di variabile
}

int main(){

	int x;
	int& refx = x;	// referenza di x

	cout << "Inserisci un valore: ";
	cin >> x; // Input

	cout << "Valore di x: " << x << endl; // Stampa valore di input
	cout << "Valore di refx: " << refx << endl;	// Stampa valore di input

	cout << "Indirizzo referenza: " << &refx << endl;	// Indirizzo uguale a variabile
	cout << "Indirizzo variabile: " << &x << endl; // Indirizzo uguale a referenza

	triplica(refx);

	cout << endl << "TRIPLICA" << endl;
	cout << "Valore di x: " << x << endl;
	cout << "Valore di refx: " << refx << endl;

	int* ptx = &x;	// Puntatore che punta ad 'x'
	stampaIndirizzi(refx, ptx);
}