
/*

CONTROLLO DI FLUSSO IN C++

Istruzione if, else if, else

int eta = 18;

if (eta < 18) {
    cout << "Minorenne";
} else if (eta == 18) {
    cout << "Appena maggiorenne";
} else {
    cout << "Maggiorenne";
}

==============

Istruzione switch

Alternativa a if per confronti con costanti intere (o char/enum):

int voto = 10;

switch(voto) {
    case 10:
        cout << "Eccellente";
        break;
    case 6:
        cout << "Sufficiente";
        break;
    default:
        cout << "Altro voto";
}

    ⚠️ Ricorda sempre il break per evitare il "fall through"!

==============

Ciclo for

for (int i = 0; i < 5; i++) {
    cout << "Iterazione: " << i << endl;
}

==============

Ciclo while

int x = 0;
while (x < 5) {
    cout << x << endl;
    x++;
}

==============

Ciclo do...while

Esegue almeno una volta il blocco:

int x = 0;
do {
    cout << x << endl;
    x++;
} while (x < 5);

==============

Altri comandi

    break: esce da un ciclo

    continue: salta alla prossima iterazione

    return: termina l’esecuzione della funzione corrente

*/

// ESERCIZIO 5

// Scrivi un programma che:

  // Chieda all'utente la sua età.

  // Se ha meno di 18 anni, stampa "Non puoi votare".

  // Se ha esattamente 18 anni, stampa "Appena maggiorenne".

  // Se ha più di 18 anni, stampa "Puoi votare".

  // Poi chiedi di inserire un numero da 1 a 5:

   //   Usa uno switch per stampare un messaggio diverso per ogni numero.

   //   Se il numero è fuori range, stampa "Numero non valido".

  // Infine, stampa i numeri da 10 a 0 (incluso) usando un for.

#include <iostream>
#include <string>

using namespace std;

int main(){

	string nomeCompleto;
	int eta;
	string indirizzo;
	int numero;

	cout << "Inserisci il tuo nome: ";
	getline(cin, nomeCompleto);

	cout << "Inserisci la tua età: ";
	cin >> eta;

	cin.ignore(); // pulisci il buffer

	cout << "Inserisci il tuo indirizzo: ";
	getline(cin, indirizzo);

	if(eta==18)
		cout << "Appena maggiorenne." << endl;
	else if(eta>18){
		cout << "Puoi votare." << endl;
	}
	else{
		cout << "Non puoi votare." << endl;
	}

	cout << "Inserisci un numero: ";
	cin >> numero;

	switch(numero){
		case 1:
			cout << "Ciao" << endl;
			break;
		case 2:
			cout << "Hola" << endl;
			break;
		case 3:
			cout << "Hello" << endl;
			break;
		case 4:
			cout << "Hallo" << endl;
			break;
		case 5: 
			cout << "Priviet" << endl;
			break;
		default:
			cout << "Numero non valido." << endl;
			break;
	}

	for(int i = 10; i >= 0; i--){
    	cout << " " << i;
	}
	return 0;
}
