/*

FUNZIONI


ESEMPIO 

tipo_di_ritorno nome_funzione(parametri) {
    // corpo della funzione
    return valore;
}

✅ Esempio semplice

int somma(int a, int b) {
    return a + b;
}

🔁 Chiamata della funzione

int risultato = somma(4, 5);

🔄 Passaggio di parametri
Tipo	                       Descrizione
Per valore	                   Copia il valore (modifiche non visibili)
Per riferimento (&)	           Passa l'indirizzo (modifiche visibili)

void raddoppia(int &x) {
    x = x * 2;
}

==============

🧠 Funzioni void

Funzioni che non restituiscono un valore:

void stampaBenvenuto(string nome) {
    cout << "Benvenuto, " << nome << "!" << endl;
}

==============

📌 Funzioni const

int getAnno() const; // usata dentro classi → vedremo dopo nella OOP

⚙ Overloading (Sovraccarico)

Stesso nome, parametri diversi:

ESEMPIO:

int somma(int a, int b);
float somma(float a, float b);

==============

*/

// ESERCIZIO

// Chieda all’utente due numeri interi

// Implementi funzioni separate per:

 // Calcolare la somma (int somma(int, int))

 // Calcolare il massimo (int massimo(int, int))

 // Stampare un saluto personalizzato (void saluto(string nome))

// Stampa i risultati delle funzioni nel main()

#include <iostream>

using namespace std;

int somma(int numero1, int numero2){
	int sum = numero1+numero2;

	return sum;
}

int massimo(int numero1, int numero2){
	
	if(numero1>numero2)
		return numero1;
	else
		return numero2;
}

void saluto(string nome){
	cout << "Ciao " << nome << endl;
}

int main(){

	int numero1;
	int numero2;

	cout << "Inserisci il primo numero: ";
	cin >> numero1;

	cout << "Inserisci il secondo numero: ";
	cin >> numero2;

	int sum = somma(numero1, numero2);
	cout << "La somma vale: " << sum << endl;

	int max = massimo(numero1, numero2);
	cout << "Il massimo vale: " << max << endl;

	cin.ignore(); // pulisci il buffer

	string nome;
	cout << "Come ti chiami? ";
	getline(cin, nome);
	saluto(nome);

	return 0;

}