/*
TIPI DI DATI E VARIABILI

Una variabile è uno spazio di memoria che ha un nome e può contenere un valore. 
Ogni variabile ha un tipo che termina la quantità di memoria da riservare e le operazioni ammesse.

TIPI DI DATI PRIMITIVI:

int - intero - int eta = 30;
float - reale prec. singola - float pi = 3.14f;
double - reale prec. doppia - double e = 2.718;
char - carattere singolo - char iniziale = 'M';
bool - booleano - bool acceso = true;


DICHIARAZIONE DI VARIABILI

int numero = 10; // inizializzazione
chat lettera; // dichiarazione
lettera = 'A'; // assegnazione
float temperatura = 36.6f; // notare la 'f'

DICHIARAZIONE INSIEME DI VARIABILI

int a = 1, b = 2, c = 3;

UTILIZZO DELLE COSTANTI 

Usa 'const' se il valore non deve cambiare: const double PI = 3.1459;

CONVERSIONI DI TIPO

Converse automaticamente alcuni tipi (int in float), ma puoi forzare la conversione

int a = 5;
float b = (float)a/2;

*/

// ESERCIZIO 2. 

// Dichiara una variabile 'int' per l'età, una double per l'altezza, un char per l'iniziale del nome
// bool che indica se sei iscritto a un corso. Stampa tutti i valori con messaggio descrittivo.

#include <iostream>

using namespace std;

int main(){
	int eta;
	double altezza;
	char iniziale;
	bool iscrizione;

	cout << "Eta: " << eta << ", Altezza: " << altezza << ", iniziale: " << iniziale << ", iscrizione: " << iscrizione;

	return 0;
}
