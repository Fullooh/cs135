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
#include <fstream>
#include <cstdlib>
#include <climits>
#include <array>
using namespace std;



int main()
{
    int i, j, height, width;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
        cout << "Shape: " << endl;
        for (i = 0; i < height; i++)
        {
            for (j=0; j < width; j++)
            {
                if ( ((i/3)%2==0 && (j/3)%2==0) || ((i/3)%2==1 && (j/3)%2==1) )
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