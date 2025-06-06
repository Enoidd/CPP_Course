// ESERCIZIO CUMULATIVO – GESTIONE UTENTI E VALUTAZIONE VOTO UNIVERSITARIO

// Specifiche funzionali richieste

//     Acquisisci da input:

//         Nome completo dello studente (string)

//         Età (int)

//         Città di provenienza (string)

//         3 voti espressi in trentesimi (int, da 18 a 30)

//     Funzioni da implementare:

//         void stampaDati(string nome, int eta, string citta)
//         → stampa in modo ordinato i dati anagrafici

//         float calcolaMedia(int v1, int v2, int v3)
//         → restituisce la media dei voti

//         char valutaMedia(float media)
//         → restituisce:

//             'A' se media ≥ 28

//             'B' se media ≥ 25

//             'C' se media ≥ 21

//             'D' se media ≥ 18

//             'F' se media < 18

//         bool promozione(float media)
//         → restituisce true se media ≥ 18, altrimenti false

//     Nel main():

//         Chiedi i dati all’utente

//         Usa le funzioni per stampare i dati e calcolare la media

//         Stampa il voto medio e la valutazione (A-F)

//         Se non promosso, stampa: "Lo studente deve ripetere l'esame"

//         Altrimenti: "Studente promosso"

//     Extra avanzato (facoltativo, ma consigliato):

//         Stampa i numeri da 30 a 18 decrescenti usando un for

//         Stampa solo i voti pari usando continue

#include <iostream>

using namespace std;


void stampaDati(string nome, int eta, string citta){

	// Stampa in modo ordinato i dati anagrafici dello studente
	cout << "Nome: " << nome << endl;
	cout << "Età: " << eta << endl;
	cout << "Provenienza: " << citta << endl;
}

float calcolaMedia(int v1, int v2, int v3){
	int somma = v1+v2+v3;
	int media = somma/3.0;
	return media;
}

char valutaMedia(float media){

	// char mediaChar;
	// int temp = media;

	// switch(temp){
	// 	case 28:
	// 		mediaChar = 'A';
	// 		break;
	// 	case 25:
	// 		mediaChar = 'B';
	// 		break;
	// 	case 21:
	// 		mediaChar = 'C';
	// 		break;
	// 	case 18:
	// 		mediaChar = 'D';
	// 		break;
	// 	default:
	// 		mediaChar = 'F';
	// 		break;	
	// }
    if (media >= 28) return 'A';
    else if (media >= 25) return 'B';
    else if (media >= 21) return 'C';
    else if (media >= 18) return 'D';
    else return 'F';

	// return mediaChar;
}

bool promozione(float media){

	return media>=18;
}

int main(){

	string nomeCompleto;
	int eta;
	string cittaProvenienza;
	int voto1, voto2, voto3;

	cout << "Inserimento dati" << endl;
	cout << "Nome: ";
	getline(cin, nomeCompleto);
	cout << "Età: ";
	cin >> eta;
	cin.ignore(); // pulisci buffer
	cout << "Città di provenienza: ";
	getline(cin, cittaProvenienza);

	cout << "Inserisci il voto: ";
	cin >> voto1;
	if(voto1>30){
		cout << "Il voto inserito non è un valore valido. Inserisci nuovamente il voto: ";
		cin >> voto1;
	}

	cout << "Inserisci il voto: ";
	cin >> voto2;
	if(voto2>30){
		cout << "Il voto inserito non è un valore valido. Inserisci nuovamente il voto: ";
		cin >> voto2;
	}

	cout << "Inserisci il voto: ";
	cin >> voto3;
	if(voto3>30){
		cout << "Il voto inserito non è un valore valido. Inserisci nuovamente il voto: ";
		cin >> voto3;
	}

	cout << "Dati inseriti dallo studente: " << endl;
	stampaDati(nomeCompleto, eta, cittaProvenienza);
	cout << endl << "Voti inseriti: " << voto1 << ", " << voto2 << ", " << voto3 << endl;
	
	float media = calcolaMedia(voto1, voto2, voto3);
	cout << "Media dei voti calcolata: " << media << endl;

	char mediaChar = valutaMedia(media);
	cout << " - Valutazione: " << mediaChar;

	if(promozione(media))
		cout << "Studente promosso." << endl;
	else
		cout << "Lo studente deve ripetere l'esame" << endl;

	cout << "Numeri decrescenti da 30 a 18" << endl;
	for(int i=30; i>=18; i--){
		cout << i << endl;
	}
}