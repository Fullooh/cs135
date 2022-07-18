#include <iostream>
#include <vector>

using namespace std;

string encryptVigenere(string plaintext, string keyword)
{

    
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