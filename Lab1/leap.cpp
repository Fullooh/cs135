#include <iostream> // stating what headers we are using
                    // used for input and output

using namespace std; // standard spacing deviation

int main()
{
    int year; // initializing the variable year

    cout << "Enter a year: "; // asking user to enter the year
    cin >> year; // inputing variable year into that output

    if (year % 4 == 0) {
        if (year % 100 == 0){  // nested loop for the leap year function
            if (year % 400 == 0){
                cout << "Is a leap year" << endl; //stating it is a leap year
            }
            else {
                cout << " Is a common year"; //stating it is a common year
            }
        }
        else
        {
            cout << "Is a leap year" << endl;
        }
    }
    else{
        cout << "Is a common year";
    }
//second way
    if (year % 4 != 0){
        cout << "Common year" << endl;
    }
    else if ( year % 100 != 0){
        cout << "Leap year" << endl;
    }
    else if (year % 400 != 0){
        cout << "Common year" << endl;
    }
    else {
        cout << "Leap year" << endl;
    }

    /*
    if (year is not divisible by 4) then (it is a common year)
    else if (year is not divisible by 100) then (it is a leap year)
    else if (year is not divisible by 400) then (it is a common year)
    else (it is a leap year)
    */

    return 0;
}