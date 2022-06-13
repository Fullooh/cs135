#include <iostream> // including headers
                    // iostream used for input and output
                    // 

using namespace std; // using namespace std

int main ()
{
    int num1, num2; //initiliazing both the variables

    cout << "Enter the first number: "; //asking for the first integer
    cin >> num1;

    cout << "Enter the second number: "; //asking for the second integer
    cin >> num2;

    if (num1 > num2) //first integer larger than second integer
    {
        cout << num2;
    }

    else {          //else loop
        cout << num1;
    }

    return 0;
}