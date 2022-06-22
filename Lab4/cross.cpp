#include <iostream>

using namespace std;

int main()
{
    int size, i, j;

    cout << "Input Size: ";
    cin >> size;

    cout << "Shape: " << endl;

    for (i = 0; i < size; i++)
        {
        for (j = 0; j < size; j++)    
        {
            if ((i == j) || (j == size - 1 -i))
            {
                cout << "*";
            }
            else 
            {
                cout << " ";
            }
        }        
        cout << endl;
        }

}