#include <iostream>

using namespace std;

int main()
{
    int x, y;
    
    cout << "Please enter an integer: ";
    cin >> x;

    while (x <= 0 || x >= 100){
        cout << "Please re-enter: " << endl;
        cin >> x;

    }
    y = x * x; //squaring our first variable
    cout << "Number squared is: " << y << endl;

    return 0;

}