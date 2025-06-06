/*

STRUTTURA DI UN PROGRAMMA IN C++:

1. Direttive al preprocessore - #include
2. Dichiarazioni di spazio dei nomi - using namespace std;
3. Funzione principale - main()

ESEMPIO:

#include <iostream> // direttiva per usare std::cout e std::cin

using namespace std; // per non scrivere std:: ogni volta

int main(){
	cout << "Benvenuto nel C++" << endl; // stampa su console
	return 0; // il programma termina correttamente
}

ESEMPIO

#include <iostream>

int main(){
	std::cout << "Benvenuto nel C++" << std::endl;
	return 0;
}


NOTE:

#include <iostream> -> include la libreria per input/output
using namespace std; -> permette di usare cout, cin, endl, senza std::
int main() -> punto di ingresso del programma; deve restituire un intero
return 0; indica che il programma è terminato correttamente

*/

// ESERCIZIO 1.

// 1. Stampa il tuo nome completo, data di nascita e frase (senza uso di variabili)

#include <iostream>

using namespace std; 

int main(){

	cout << "Marco Calli" << endl;
	cout << "Data di nascita: 04/03/1991" << endl;
	cout << "In adversa ultra adversa!" << endl << endl;
	return 0;
}

