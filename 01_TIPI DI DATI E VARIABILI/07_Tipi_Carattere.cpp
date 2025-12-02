/*

I tipi per i caratteri servono a memorizzare codici di caratteri (Es. ASCII, UTF-8)

- char (1 byte)
- signed char
- unsigned char

- wchar_t ("wide_char", la dimensione dipende dalla piattaforma)
- char16_t (16bit, per UTF-16)
- char32_t (32bit, per UTF-32)

*/

#include <iostream>
using namespace std;

int main(){

    char c = 'A'; // lettarlmente il carattere
    cout << "c: "<<c<<"\n"; // atteso: A
    cout << "Codice ASCII di c: "<<(int)c<<"\n";
    cout << "c: "<<(char)static_cast<int>(65)<<"\n"; // atteso: A
}