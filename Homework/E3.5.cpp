#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    
    cout << "Input Numbers: ";
    cin >> num1; cin >> num2; cin >> num3;



    if (num1 > num2 > num3){
       cout << "Decreasing" << endl;
    }
    else if (num1 < num2 < num3){
        cout << "Output: Increasing" << endl;
    }
    else{
         cout << "Output: Neither" << endl;
    }

}