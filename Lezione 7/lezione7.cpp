/*

FASE 2: ARRAY, STRINGHE, PUNTATORI E REFERENZE

/*

int numeri[5]; // array di 5 interi non inizializzati
int voti[3] = {25, 28, 30}; // inizializzazione diretta

oppure

int voti[] = {25, 28, 30};

🔁 Accesso agli elementi

Gli elementi si accedono tramite indice (parte da 0):

cout << voti[1]; // stampa 28

🔄 Riempimento con ciclo for

for (int i = 0; i < 5; i++) {
    cin >> numeri[i];
}

==============

 Operazioni comuni:
📈 Calcolare la media:

float somma = 0;
for (int i = 0; i < 5; i++) somma += numeri[i];
float media = somma / 5;

🔍 Trovare il massimo:

int max = numeri[0];
for (int i = 1; i < 5; i++)
    if (numeri[i] > max) max = numeri[i];

==============

*/

// ESERCIZIO 7

// Scrivi un programma che:

//     Chieda all’utente quanti numeri vuole inserire (massimo 100)

//     Riempia un array di int con quei numeri

//     Calcoli e stampi:

//         la somma

//         la media

//         il valore massimo

//         il valore minimo

//     Stampi tutti i numeri pari dell’array

//     Stampi quanti numeri maggiori della media sono stati inseriti

#include <iostream>

using namespace std;
const int MAX = 100;

int somma(int array[], int dimensione){

	int sum=0;
	for(int i=0; i<dimensione; i++){
		sum += array[i];
	}
	return sum;
}

float calcolaMedia(int array[], int dimensione){

	float m;
	m = somma(array, dimensione)/dimensione;
	return m;
}

int valoreMassimo(int array[], int dimensione){

	int tmp= array[0]; // il max è il primo valore
	for(int i=0; i<dimensione; i++){
		if(tmp<array[i])
			tmp = array[i];
	}
	return tmp;
}

int valoreMinimo(int array[], int dimensione){

	int tmp= array[0];
	for(int i=0; i<dimensione; i++){
		if(tmp>array[i])
			tmp = array[i];
	}
	return tmp;
}

int numeroMaggioriMedia(int array[], int dimensione){

	int media = calcolaMedia(array, dimensione);
	int count = 0;

	for(int i=0; i<dimensione; i++){
		if(array[i]>media)
			count++;
	}
	return count;
}

void stampaPari(int array[], int dimensione){

	cout << endl << "Stampa numeri pari: ";
	for(int i=0; i<dimensione; i++){
	    if(array[i]%2==0)
		    cout << "" << array[i] << ", ";
	}
}


int main(){
	
	
	int dimensione = 0;

	cout << "Inserisci la dimensione del tuo array: ";
	cin >> dimensione;
	while(dimensione>MAX){
		cout << "Dimensione troppo grande, aggiungi una nuova dimensione compresa tra 0 e 100: ";
		cin >> dimensione;
	}
	int array[dimensione];
	cout << endl << "Inserisci gli elementi dell'array: " << endl;
	for(int i=0; i<dimensione; i++){
	    cout << "Inserisci il " << i << "° elemento: ";
		cin >> array[i];
	}

	int sum = somma(array, dimensione);
	cout << "La somma vale: " << sum << endl ;
	float media = calcolaMedia(array, dimensione);
	cout << "La media vale: " << media << endl;
	int max = valoreMassimo(array, dimensione);
	cout << "Il valore massimo vale: " << max << endl;
	int min = valoreMinimo(array, dimensione);
	cout << "Il valore minimo vale: " << min << endl;
	int maggiori = numeroMaggioriMedia(array, dimensione);
	cout << "Numero maggiori media: " << maggiori << endl;
	stampaPari(array, dimensione);
	return 0;
}