#include <iostream>
#include "Monoalphabetic_Cipher.h"
#include <string>
using namespace std;

string Monoalphabetic_Cipher_encipher(string key,string plaintext )
{
    int i=0;
    string s;
    char c;
    while(plaintext[i]!= '\0')
    {
        c=plaintext[i];
        if(c==' ')
            s+=c;
        else
        {
            c-=97;
            c=key[c];
            s+=c;
        }
        i++;

    }
    return s;
}
string Monoalphabetic_Cipher_decipher(string key,string ciphertext )
{
    int i=0;
    string s;
    char c;
    while(ciphertext[i]!= '\0')
    {
        c=ciphertext[i];
        if(c==' ')
            s+=c;
        else
        {
            c=key.find(c);
            c+=97;
            s+=c;
        }
        i++;

    }
    return s;
}

