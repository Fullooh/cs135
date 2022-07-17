//
//
//
//
//
//
//
//
//
//
//

#include <iostream>

using namespace std;

char shiftChar(char c, int rshift)
{


if ((int) c >= 65 && (int) c <= 90)
{
    toupper(c);
    return c;
}
if ((int) c >= 97 && (int) c <= 122)
{
    return c;
}
else
{
    return c;
}

}

string encryptCaaesar(string plaintext, int rshift)
{
    string output;

    for (int i = 0; i < plaintext.length(); i++)
    {
        output = shiftChar (plaintext[i], rshift);
    }
    return output;
}

int main()
{
    int shift;
    string input = "";
   
    cout << "Enter Plaintext: ";
    getline(cin, input);

    cout << "Enter Shift: ";
    cin >> shift;

    cout << "Ciphertext: " << encryptCaaesar(input, shift) << endl;
}