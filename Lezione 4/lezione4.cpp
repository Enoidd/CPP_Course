/*

Input/Output Avanzato in C++

Nel C++, l’input/output è gestito dalla libreria <iostream>, che mette a disposizione:

    std::cout → per scrivere su console

    std::cin → per leggere input da console

    std::endl → va a capo e svuota il buffer

    std::getline() → legge un’intera riga, spazi inclusi


DIFFERENZE tra cin e getline()

string nome;
cin >> nome;         // si ferma allo spazio
getline(cin, nome);  // legge l’intera riga, spazi inclusi


ESEMPIO: 

#include <iostream> // input/output
#include <string>	// utilizzo delle funzionei 'string'
using namespace std; // esclude l'utilizzo di 'std' e lo usa implicitamente 

int main() { // funzione principale
    string nomeCompleto;	// dichiarazione di una stringa
    int eta; // dichiarazione di un intero

    cout << "Inserisci la tua età: "; // output
    cin >> eta; // legge l'intero

    cin.ignore(); // pulisce il buffer prima di getline

    cout << "Inserisci il tuo nome completo: ";	// output
    getline(cin, nomeCompleto);	// legge il nome

    cout << "Hai inserito: " << nomeCompleto << ", " << eta << " anni." << endl;

    return 0;
}

ESEMPIO - Altri formati di output

int a = 42;
cout << "Hex: " << hex << a << endl;    // esadecimale
cout << "Dec: " << dec << a << endl;    // decimale
cout << "Oct: " << oct << a << endl;    // ottale

*/

// ESERCIZIO 4. 

//Chieda all’utente:

  // Nome completo (getline)

  // Età (cin)

  // Indirizzo (getline)

// Stampi tutti i dati formattati su più righe.

#include <iostream>
#include <string>

using namespace std;

int main(){

	string nomeCompleto; // rappresenta il nome completo della persona
	int eta; // età della persona
	string indirizzo; // indirizzo della persona

	cout << "Inserisci il nome completo della persona: ";
	getline(cin, nomeCompleto);

	cout << "Inserisci l'età: ";
	cin >> eta;

	cin.ignore(); // pulisce il buffer prima della età

	cout << "Inserisci l'indirizzo: ";
	getline(cin, indirizzo);

	// OUTPUT
	cout << "Nome: " << nomeCompleto << endl;
	cout << "Età: " << eta << endl;
	cout << "Indirizzo: " << indirizzo << endl;
	return 0;
}
