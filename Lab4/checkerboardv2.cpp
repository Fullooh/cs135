//Angst Gregory
//
//
//
//
//
//
//
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{  
    int i, j, width, height;
    cout << "what is the width ";
    cin >> width;
    cout << "what's the height ";
    cin >> height;
    cout << "Shape: " << endl;

     for( i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            if ((i%2 == 0 && j%2 == 0) || (i%2 == 1 && j%2 == 1) )
            cout << "*";
            else 
            cout << " ";
        }
        cout << endl;
    }
}