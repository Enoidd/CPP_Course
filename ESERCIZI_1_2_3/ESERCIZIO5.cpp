/*

Prevedi l’output del seguente programma:

float  f = 1.5f;
double d = 2.5;

auto x = f * d; // Viene promosso f a double
auto y = d / f; // Viene promosso f a double

// Se uno degli operandi è double viene promosso a double

std::cout << sizeof(x) << "\n"; // 8byte
std::cout << sizeof(y) << "\n"; // 8byte

Spiega quali tipi vengono promossi e perché.



*/