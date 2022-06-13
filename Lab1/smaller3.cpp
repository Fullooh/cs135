#include <iostream> // using header iostream
                    // used for input and output

using namespace std; // standard spacing

int main()
{
    int num1, num2, num3; //initiliazing all three values

    cout << "Enter three numbers: " << endl; //asking the user for all three values
    cin >> num1 >> num2 >> num3;

    if (num1 < num2 && num1 < num3) // writing if loop stating first number being smaller than both values
    {
        cout << "Smallest of three numbers: " << num1 << endl; //asking for the smallest of three values
    }

    else if (num2 < num1 && num2 < num3) // loop stating the second value is smaller than everything
    {
        cout << "Smallest of three numbers: " << num2 << endl; //asking for the smallest of three values
    }

    else
    {
        cout << "Smallest of three numbers: " << num3 << endl; //stating if the third number is the smallest
    }
    
    
    
    //second way
    cout << "The smallest number is: " <<
    min (num3, min (num1, num2)) << endl;
    // min of num3 and (min of num1 and num2)
    // its recommended doing it the first way not second
    
    return 0;
}