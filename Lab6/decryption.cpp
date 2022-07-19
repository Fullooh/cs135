#include <iostream>
#include <vector>

using namespace std;

char shiftChar(char c, int rshift);

string encryptVigenere(string plaintext, string keyword)
{
    string output = "";
    int pos = 0;
    int shift = 0;

    for (int i = 0; i < plaintext.length(); i++)
    {
        if(pos == keyword.length())
            pos = 0;

        shift = int(keyword[pos]) - 97;
        output += shiftChar (plaintext[i], shift );

        if(isalpha(plaintext[i]))
            pos++;
    }
    return output;


}
string encryptCaesar(string plaintext, int rshift)
{
    string output = "";

    for (int i = 0; i < plaintext.length(); i++)
    {
        output += shiftChar (plaintext[i], rshift);
    }
    return output;
}

char shiftChar(char c, int rshift)
{
char result;

    if (isalpha(c))
    {
        if (isupper(c))
        {
            result = char((int (c) + rshift - 65) % 26 + 65);
        }

        else
        {
            result = char((int (c) + rshift - 97) % 26 + 97);
        }

    }
    else 
    {
        return c;
    }
    return result;
}







int main()
{
    string keyword;
    string input = "";
   
    cout << "Enter Plaintext: ";
    getline(cin, input);

    cout << "Enter Keyword: ";
    cin >> keyword;

    cout << "Ciphertext: " << encryptVigenere(input, keyword) << endl;
}