/*

CREARE UN LOGGER SINGLETON usando "Meyers Singleton"

REQUISITI:
    - Esiste una sola istanza
    - Stampa messaggi a video
    - Non può essere copiato
    - Accessibile ovunque tramite "getInstance()"
*/

#include <iostream>
#include <string>

using namespace std;

class Logger{
    // 1. costruttore privato
    private:
        Logger(){};

    public:
        // 2. Copia e Assegnazione NO
        Logger(const Logger&) = delete;
        Logger& operator=(const Logger&) = delete;

        // 3. Accesso all'unica istanza
        static Logger& getInstance(){
            /* è nella funzione perché viene creato solo se serve */
            static Logger instance; // istanza
            return instance;
        }

        // Metodo pubblico
        void log(const string& msg){
            cout<<"[LOG] "<<msg<<endl;
        }
};

int main(){
    /*
    Si usa il riferimento per evitare copie - stesso oggetto - stessa identità dell'oggetto */
    Logger& logger1 = Logger::getInstance();
    Logger& logger2 = Logger::getInstance();



    logger1.log("Avvio programma");
    logger2.log("Secondo messaggio");


}