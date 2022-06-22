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
    int width;
    int height;
    int i;
    int j;

    cout << "Input Width: ";
    cin >> width;

    cout << "Input Height: ";
    cin >> height;

    cout << "Shape:" << endl;

     for (i = 0; i < height; i++)
        {
        for (j = 0; j < width; j++)
        {
            if ((i%2 == 0 && j%2 == 0) || (i%2 != 0 && j%2 != 0))
            cout << "*";
            else
            cout << " ";
        }
        cout << endl;
    }
        

}