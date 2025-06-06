/*

STRINGHE (char[] vs std::string)

Dichiarazione:

#include <string>
string nome = "Giulia";

==============

Metodi utili di std::string:
Metodo				Descrizione
.length()			Lunghezza della stringa
.substr(pos, len)	Sottostringa da posizione pos
.find(sub)			Trova posizione di sottostringa
.append(str)		Aggiunge una stringa
+	Concatena due stringhe
==, !=, <	Operatori logici già implementati

==============

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome, cognome;
    cout << "Nome: ";
    getline(cin, nome);
    cout << "Cognome: ";
    getline(cin, cognome);

    string completo = nome + " " + cognome;
    cout << "Nome completo: " << completo << endl;
    cout << "Lunghezza: " << completo.length() << " caratteri." << endl;
    return 0;
}

==============

*/

// ESERCIZIO 8

// Chieda all’utente il nome completo

// Stampi:

//     Solo il nome

//     Solo il cognome

//     Il numero di caratteri totali (escludendo spazi)

// Se il nome contiene la lettera "a", stampa "Nome contenente 'a'", altrimenti "Nessuna 'a' trovata"

// Concatena una stringa fissa " - Studente CPA" al nome completo e stampala

#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string nome, cognome;
	cout << "Nome: ";
	getline(cin, nome);
	cout << "Cognome: ";
	getline(cin, cognome);

	cout << "Nome: " << nome << " - Cognome: " << cognome << endl;

	if(nome.find('a')){
		cout << "Nome contenente 'a'." << endl;
	}
	else{
		cout << "Nessuna 'a' trovata." << endl;
	}

	string nomeCompleto = nome+cognome;
	cout << "Caratteli totali: " << nomeCompleto.length() << endl;

	string parola;
	string stringaFissa = " - Studente CPA";
	cout << "Inserisci una frase - parola: ";
	getline(cin, parola);
	//parola.append(stringaFissa); (si può fare al posto di 'parola+stringaFissa')
	
	cout << " " << parola+stringaFissa;
}
