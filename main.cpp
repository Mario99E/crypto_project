#include <iostream>
#include <string>
#include "Monoalphabetic_Cipher.h"

#define Mono_Key "DKVQFIBJWPESCXHTMYAUOLRGZN"
using namespace std;



int main()
{
    string s("ifwewishtoreplaceletters");
    string crypto;
    string plain;
    crypto=Monoalphabetic_Cipher_encipher(Mono_Key,s);
    cout << "Enciphered:"<<crypto << endl;
    plain=Monoalphabetic_Cipher_decipher(Mono_Key,crypto);
    cout << "Deciphered:"<<plain << endl;
    return 0;
}


