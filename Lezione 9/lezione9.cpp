/*

PUNTATORI C++

int numero = 10;
int* ptr = &numero; // ptr contiene l’indirizzo di numero

Simboli fondamentali:

    & → operatore di indirizzo (es. &x è l’indirizzo di x)

    * → operatore di dereferenziazione (es. *ptr accede al valore puntato)

ESEMPIO:

int x = 5;
int* px = &x;

cout << "Valore: " << *px << endl;      // accede al valore di x
cout << "Indirizzo: " << px << endl;    // stampa l'indirizzo di x

MODIFICARE UNA VARIABILE TRAMITE PUNTATORE

void raddoppia(int* p) {
    *p = *p * 2;
}

Puntatori non inizializzati = undefined behavior

Uso di nullptr al posto di NULL in C++ moderno

int* p = nullptr;

*/

// ESERCIZIO 9

// Dichiari una variabile intera x e la inizializzi

// Dichiari un puntatore p che punta a x

// Stampi:

//     Il valore di x

//     L’indirizzo di x

//     Il valore puntato da p

//     L’indirizzo contenuto da p

// Modifichi il valore di x tramite il puntatore (es. raddoppialo)

// Stampi il nuovo valore di x


#include <iostream>

using namespace std;

int main(){
	int x = 10;
	int* px = &x;

	cout << "Valore di x: " << x << endl;
	cout << "Indirizzo di x: " << &x << endl;
	cout << "Valore di px: " << *px << endl;
	cout << "Indirizzo contenuto in px: " << px << endl;

	cout << "Inserisci un intero: ";
	cin >> *px;

	cout << "AGGIORNAMENTI: " << endl << endl;
	cout << "Valore di x: " << x << endl;
	cout << "Indirizzo di x: " << &x << endl;
	cout << "Valore di px: " << *px << endl;
	cout << "Indirizzo di x: " << &x << endl;

}

// ESERCIZIO DI PROVA

#include <iostream>

using namespace std;

int main(){

	int x = 10;
	int* p = &x;

	cout << "Indirizzo di px: " << p << endl;
	cout << "Indirizzo di x: " << &x << endl;
	cout << "Valore di px: " << *p << endl;
	cout << "Valore di x: " << x << endl;

}
