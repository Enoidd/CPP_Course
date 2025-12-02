/*

Per evitare sorprese con le dimensioni, C++ fornisce i tipi fixed-width in <cstdint>

#include <cstdint>

- int8_t (esattamente a 8 bit, signed)
- uint8_t (esattamente a 8 bit, usigned)
- int16_t (esattamente a 16 bit)
- uint16_t
- int32_t
- uint32_t
- int64_t
- uint64_t

*/

#include <iostream>
#include <cstdint>
using namespace std;

int main(){
    
    int32_t a = 100000; // sappiamo che ha 32 bit
    uint64_t b = 1000000000000ULL;

    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
}

/*

Molto utili quando si fa codice portable o si lavora vicino ad hardware / protocolli / formati binari

*/