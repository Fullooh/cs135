#include <iostream>
#include <vector>

using namespace std;

string encryptVigenere(string plaintext, string keyword)
{


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
    int shift;
    string input = "";
   
    cout << "Enter Plaintext: ";
    getline(cin, input);

    cout << "Enter Shift: ";
    cin >> shift;

    cout << "Ciphertext: " << encryptCaesar(input, shift) << endl;
}