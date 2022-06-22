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
//

#include <iostream>

using namespace std;

int main()
{
    int height = 0;
    int width = 0;
    int i = 0;
    int j = 0;

    cout << "Input Width: ";
    cin >> width;

    cout << "Input Height: ";
    cin >> height;

    cout << "Shape:" << endl;

    for (i = 0; i < height; i++)
    {
        for ( j = 0; j < width; j++)
        {
            cout << "*";
        }
        cout << endl;
    }


}