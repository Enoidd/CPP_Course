/* ESERCIZIO CUMULATIVO */

 // Requisiti funzionali

 //    Gestione per N studenti (max 50):

 //        Nome completo (std::string)

 //        Età (int)

 //        3 voti (array int[3])

 //    Per ogni studente:

 //        Calcolare media voti

 //        Valutazione (A/B/C/D/F) secondo scala:

 //            A: media ≥ 28

 //            B: media ≥ 25

 //            C: media ≥ 21

 //            D: media ≥ 18

 //            F: media < 18

 //    Funzioni richieste:

 //        void inserisciDati(string&, int&, int*)
 //        → acquisisce nome, età, voti usando referenze e puntatori

 //        float calcolaMedia(int*, int)
 //        → riceve array voti tramite puntatore, calcola media

 //        char valutaMedia(float media)

 //        void stampaStudente(const string&, int, int*, float, char)
 //        → stampa dati studente, voti, media, valutazione

 //    Dopo l’inserimento:

 //        Calcolare e stampare la media generale di tutti gli studenti

 //        Stampare gli studenti con media sopra quella generale

 //        Stampare il numero di studenti con valutazione A

 //        Stampare gli indirizzi delle età usando un puntatore

// 🔧 Suggerimenti tecnici:

//     Puoi usare array paralleli: string nomi[50], int eta[50], int voti[50][3]

//     Oppure una struct (se te la senti, ma non obbligatorio)

//     Cicla su N studenti, con for

//     Passa array int voti[3] come int* alle funzioni

#include <iostream>
#include <string>

using namespace std;

void inserisciDati(string& refNome, int& refEta, int* puntaVoti){

	cout << "Nome: ";
	getline(cin, refNome);

	cout << "Età: "; 
	cin >> refEta;

	for(int i=0; i<3; i++){
		cout << "Inserisci il " << i << "° voto: ";
		cin >> puntaVoti[i];
	}
	cin.ignore();
}

float calcolaMediaStudente(int* puntaVoti, int numeroVoti){

	float media=0.0;
	for(int i=0; i<3; i++){
		media += puntaVoti[i];
	}
	media = media/3;
    
	return media;
}

char valutaMedia(float media){

	char valutazione;

	if(media<18.00)
		valutazione = 'F';
	else if(media>=18.00 && media<21.00)
		valutazione = 'D';
	else if(media>=21.00 && media<25.00)
		valutazione = 'C';
	else if(media>=25.00 && media<28.00)
		valutazione = 'B';
	else if(media>=28.00)
		valutazione = 'A';

	return valutazione;
}

void stampaStudente(const string& nome, int&  eta, int* voti, float media, char valutazione){

	cout << "Nome: " << nome << endl;
    cout << "Età: " << eta << endl;
	for(int i=0; i<3; i++){
		cout << "" << i << "° Voto: " << voti[i] << endl;
	}
	cout << "Media voti: " << media << endl;
	cout << "Valutazione media: " << valutazione << endl;
}

int main(){

	int max; // numero massimo di studenti

	cout << "Quanti studenti vuoi gestire? Inserisci un numero: ";
	cin >> max;

	while(max>50){	// check N studenti
		cout << "Puoi gestire un massimo di 50 studenti. Inserisci un valore valido: ";
		cin >> max;
	}
	cin.ignore();

	string nomi[max];
	int eta[max];
	int voti[max][3];
	float media; 
	char valutazione;

	for(int i=0; i<max; i++){
		cout << "\nInserisi i dati del " << i << "° studente: " << endl;
		inserisciDati(nomi[i], eta[i], voti[i]);
		media = calcolaMediaStudente(voti[i], max); // Dopo l'inserimento dei dati calcola la media dei voti inseriti dello studente 
	}

    
	// Stampa dati studenti
	cout << "\n\nDATI STUDENTI\n\n";
	for(int i=0; i<max; i++){
	    cout << "" << i+1 << "° STUDENTE:\n";
		media = calcolaMediaStudente(voti[i], 3);
		valutazione = valutaMedia(media);
		stampaStudente(nomi[i], eta[i], voti[i], media, valutazione);
		cout << "\n";
	}

}
