/*

Signed → unsigned modulo 2^N

Senza eseguire il codice, determina il valore di u:

int i = -20;
unsigned int u = static_cast<unsigned int>(i);


Assumi: unsigned int = 32 bit.

Scrivi il valore esatto di u e spiega il processo matematico.

OUTPUT:

in: unsigned int u = static_cast<unsigned int>(i); 'i' viene castato a unsigned -> 2^32 = 4294967296
u = 4294967296 - 20
u = 4294967276


*/