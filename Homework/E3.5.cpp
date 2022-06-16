#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    
    cout << "Input Numbers: ";
    cin >> num1; cin >> num2; cin >> num3;



    if (num1 < num2 < num3){
        cout << "Output: increasing" << endl;
    }
    else if (num1 > num2 > num3){
        cout << "Output: decreasing" << endl;
    }
}