/*

Creare una classe Config che:
    - Sia un Singleton
    - Contenga una variabile privata 'int port'
    Abbia:
        - setPort(int)
        - getPort() const

    REQUISITI:

        - Costruttore private
        - copia e assegnazione disabilitate
        - getInstance() che ritorna una reference
        - nessun 'new'
*/

#include <iostream>
using namespace std;

class Config{
    private:
        int port; // variabile privata
        Config():port(0){}; // Costruttore privato
    public:
        // Copia e Assegnazione disabilitata
        Config(const Config&) = delete; // copia
        Config& operator=(const Config&)=delete; // assegnazione

        static Config& getInstance(){
            static Config instance;
            return instance;
        }


        void setPort(int p){
            port = p;
        }

        int getPort() const{
            return port;
        }
};

int main(){

    Config& c1 = Config::getInstance();
    Config& c2 = Config::getInstance();

    c1.setPort(8080);
    cout<<c2.getPort(); // atteso: 8080
}