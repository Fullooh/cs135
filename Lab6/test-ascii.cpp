#include <iostream>

using namespace std;

int main ()
{
    string input;
    char c;

    cout << "Input: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        cout << input[i] << " " << int(c) << endl;
    }
}
