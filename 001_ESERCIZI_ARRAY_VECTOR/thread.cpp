#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    std::cout << "Programma avviato.\n";
    std::cout << "Hai 5 secondi per fare un ping...\n";

    this_thread::sleep_for(chrono::seconds(10));

    std::cout << "Fine.\n";
    return 0;
}
