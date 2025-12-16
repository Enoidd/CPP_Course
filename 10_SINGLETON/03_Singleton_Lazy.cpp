/*

SINGLETON MODERNO - MINIMAL TEMPLATE

RISPETTO ALLA VERSIONE 'EAGER' questo ha l'instanza dentro la funzione
*/

#include <iostream>
using namespace std;

class Singleton{
    private:
        Singleton(){};

    public:
        static Singleton& getInstance(){
            static Singleton instance; // alla prima chiamata
            return instance;
        }
};

int main(){

    // Singleton non esiste ancora qui
    Singleton& s = Singleton::getInstance(); // qui nasce Singleton
}