/*
OPERATORI

Gli operatori permettono di effettuare calcoli, confronti, assegnazioni e manipolazioni sui dati 

TIPOLOGIE PRINCIPALI DI OPERATORI

+ - Addizione - a+b = 7
- - Sottrazione - a-b = 7
* - Moltiplicazione - a*b = 7
/ - Divisione intera - a/b=2
% - Modulo (resto) - a%b=1


OPERATORI RELAZIONALI

== - uguaglianza 
!= - Diverso
> - Maggiore
< - Minore
>= - Maggiore uguale
<= - Minore uguale

OPERATORI LOGICI

&& - AND logico - 1&&0=0
! - not logico - !0 = 1

OPERATORI DI ASSEGNAZIONE

= - Assegna un valore
+= - aggiunge e assegna
-= - sottrae e assegna
*= - moltiplica e assegna
/= - divide e assegna
%= - modulo e assegna

INCREMENTO E DECREMENTO

++ - inceremento
-- - decremento


ESEMPIO

int x = 5;
x++; // post-incremento -> prima usa x e poi lo incrementa
++x // pre-incremento -> prima incrementa e poi usa x

*/

// ESERCIZIO 3.

// Chiede due numeri interi, stampa: somma, differenza, prodotto, quoziente intero e resto.
// Verifichi e stampi se: 
// Il primo numero è > del secondo
// Il primo è pari o dispari
// Entrambi sono positivi. 
#include <iostream>

using namespace std;

int main(){
	int intero1;
	int intero2;

	cout << "Inserisci il primo intero: ";
	cin >> intero1;

	cout << "Inserisci il secondo intero: ";
	cin >> intero2;

	int somma = intero1 + intero2;
	cout << " Somma: " << somma;
	int differenza = intero1 - intero2;
	cout << " Differenza: " << differenza;
	int prodotto = intero1 * intero2;
	cout << "  Prodotto: " << prodotto;
	int quoziente = intero1 / intero2;
	cout << "Quoziente: " << quoziente;
	int resto = intero1 % intero2;
	cout << " Resto: " << resto;

	if(intero1>intero2)
		cout << " Il primo intero: " << intero1 << " è maggiore del secondo: " << intero2;
	if(intero1%2==0)
		cout << " Il primo intero: " << intero1 << " è pari.";
	if(intero1%2==1)
		cout << " Il primo intero: " << intero1 << " è dispari.";
	if(intero1>0 && intero2>0)
		cout << " Entrambi in numeri inseriti: " << intero1 << ", " << intero2 << " sono positivi.";

	return 0;
}
