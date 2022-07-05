//Angst S Gregory
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
#include <fstream>
#include <cstdlib>
#include <climits>
#include <array>
using namespace std;



int main()
{
    int i, j, width, length, spaces, stars;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Shape: " << endl;
    spaces = 0;
    stars = width;
    if (width - length < width/2)
    {
        cout << "impossible shape" << endl;
    }
    else
    {
    for (width = 0; width < length; width++)
    {
        for (j=0; j <= spaces; j++)
        {
            cout << " ";
        }
            for (i=0; i < stars; i++)
            {
                cout << "*";
            }
                spaces += 1;
                stars -= 2;
                cout << endl;
            }
    }
}