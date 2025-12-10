/*

Costante stringa

Dichiara:

const std::string APP_NAME = "MyProgram";


e stampala nel main.
Spiega perché non puoi modificarne il contenuto.

*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    const string APP_NAME = "MyProgram";

    cout<<APP_NAME; // Output: MyProgram
}